#------------------------MESSAGE

#-----------------CHECK
DELIMITER //
CREATE TRIGGER check_deletedMessage
BEFORE DELETE ON user
FOR EACH ROW
BEGIN	
	DELETE FROM message
    WHERE idSender = OLD.idUser;
END;
//
DELIMITER ;

#-----------------BACKUP
DELIMITER //
CREATE TRIGGER deletedMessage
AFTER DELETE ON Message
FOR EACH ROW
BEGIN	
    INSERT INTO deletedMessage (idMessage, message, dataMessage, idChat, idSender) VALUES (OLD.idMessage, OLD.message, OLD.dataMessage, OLD.idChat, OLD.idSender);
END;
//
DELIMITER ;

#-----------------INSERT
DELIMITER //
CREATE TRIGGER notifyMessage
AFTER INSERT ON Message
FOR EACH ROW
BEGIN	
	#------------------------NOTIFICAÇÃO
    INSERT INTO notification 
    (message, dataNotification, idTarget, idSended) VALUES 
    (
    CONCAT( (SELECT name FROM user WHERE idUser = NEW.idSender), ' enviou uma mensagem'),
    CURDATE(), 
    (SELECT CASE WHEN idUserA = NEW.idSender THEN idUserB ELSE idUserA END FROM chat WHERE idChat = NEW.idSender),
    NEW.idSender
    );
END;
//
DELIMITER ;


##------------------------CHAT
#DELIMITER //
#CREATE TRIGGER check_deletedChat
#BEFORE DELETE ON user
#FOR EACH ROW
#BEGIN	
#	DELETE FROM chat
#    WHERE idUserA = OLD.idUser OR idUserB = OLD.idUser;
#END;
#//
#DELIMITER ;
##-----------------CHECK
#
#
##-----------------BACKUP
#DELIMITER //
#CREATE TRIGGER deletedChat
#BEFORE DELETE ON chat
#FOR EACH ROW
#BEGIN
#    INSERT INTO deletedChat (idChat, idUserA, idUserB) VALUES (OLD.idChat, OLD.idUserA, OLD.idUserB);
#END;
#//
#DELIMITER ;
#
#
#
#------------------------REACTION-POST

#-----------------DELETE
DELIMITER //
CREATE PROCEDURE delete_ReactionPost(IN idUser_ INT, IN idPost_ INT)
BEGIN
    UPDATE reactionPost
    SET active = 0
    WHERE idPost = idPost_ AND idUser = idUser_;
END;
//

#-----------------INSERT
CREATE PROCEDURE insert_ReactionPost(IN idUser_ INT, IN idPost_ INT)
BEGIN

    IF EXISTS (SELECT * FROM reactionPost WHERE idPost = idPost_ AND idUser = idUser_) 
    THEN
		UPDATE reactionPost
		SET active = 1
		WHERE idPost = idPost_ AND idUser = idUser_;
	ELSE
		INSERT INTO reactionPost (idPost, idUser) VALUES (idPost_, idUser_);
	END IF;
	
    
    #------------------------NOTIFICAÇÃO
    INSERT INTO notification 
    (message,dataNotification,idTarget,idSended) VALUES 
    (
    CONCAT((SELECT name FROM user WHERE user.idUser = idUser_),'  curtiu seu post'),
    CURDATE(), 
    (SELECT idUSer FROM post WHERE idPost = idPost_),
    idUser_
    );
    
    
END;
//

DELIMITER ;



#------------------------FOLLOW

#-----------------DELETE
DELIMITER //
CREATE PROCEDURE delete_follow(IN idFollower_ INT, IN idFollowed_ INT)
BEGIN
    UPDATE follow
    SET active = 0
    WHERE idFollower = idFollower_ AND idFollowed = idFollowed_;
END;
//

#-----------------INSERT
CREATE PROCEDURE insert_follow(IN idFollower_ INT, IN idFollowed_ INT)
BEGIN

    IF EXISTS (SELECT * FROM follow WHERE idFollower = idFollower_ AND idFollowed = idFollowed_) 
    THEN
		UPDATE follow
		SET active = 1
		WHERE idFollower = idFollower_ AND idFollowed = idFollowed_;
	ELSE
		INSERT INTO follow (idFollower, idFollowed) VALUES (idFollower_, idFollowed_);
	END IF;		
    
    
	#------------------------NOTIFICAÇÃO
    INSERT INTO notification 
    (message, dataNotification, idTarget, idSended) VALUES 
    (
    CONCAT('Você tem um novo seguidor! ', (SELECT name FROM user WHERE user.idUser = idFollower_),' começou a te seguir'),
    CURDATE(), 
    idFollowed_,
    idFollower_
    );
    
END;
//

DELIMITER ;



#------------------------COMMENT

#-----------------CHECK
DELIMITER //
CREATE TRIGGER check_deletedComment
BEFORE DELETE ON user
FOR EACH ROW
BEGIN	
	DELETE FROM comment
    WHERE idUser = OLD.idUser;
END;
//
DELIMITER ;

#-----------------BACKUP
DELIMITER //
CREATE TRIGGER deletedComment
AFTER DELETE ON comment
FOR EACH ROW
BEGIN
	
	INSERT INTO deletedComment (description, commentDate, idPost, idUser, idComment) VALUES (OLD.description, OLD.commentDate, OLD.idPost, OLD.idUser, OLD.idComment);
    
END;
//
DELIMITER ;



#------------------------USER
DELIMITER //
CREATE TRIGGER deletedUser
AFTER DELETE ON user
FOR EACH ROW
BEGIN
    INSERT INTO deletedUser (idUser, name, password, birthDate, description, email, profilePhoto, admin) 
    VALUES (OLD.idUser, OLD.name, OLD.password, OLD.birthDate, OLD.description, OLD.email, OLD.profilePhoto, OLD.admin);
END;
//
DELIMITER ;

#------------------------POST 

#-----------------CHECK
DELIMITER //
CREATE TRIGGER check_deletedPost
BEFORE DELETE ON user
FOR EACH ROW
BEGIN	
	DELETE FROM post
    WHERE idUser = OLD.idUser;
END;
//
DELIMITER ;

#-----------------BACKUP
DELIMITER //
CREATE TRIGGER deletedPost
AFTER DELETE ON post
FOR EACH ROW
BEGIN
    INSERT INTO deletedPost (idPost, description, img, hashtag, postDate, idUser)
    VALUES (OLD.idPost, OLD.description, OLD.img, OLD.hashtag, OLD.postDate, OLD.idUser);
END;
//
DELIMITER ;



#------------------------CHAT
DELIMITER //

CREATE TRIGGER insertChat
BEFORE INSERT ON follow
FOR EACH ROW
BEGIN
	-- Conferindo se aquele chat já existe
	IF NOT EXISTS (
		SELECT 1 FROM chat
        WHERE (
        -- Vendo se já existem esses dados na tabela, independente de em qual coluna eles estejam
			(idUserA = NEW.idFollower AND idUserB = NEW.idFollowed)
            OR
            (idUserA = NEW.idFollowed AND idUserB = NEW.idFollower)
		) 
	) THEN -- Se não existir, ele insere na tabela
		INSERT INTO chat (idUserA, idUserB) 
		VALUES (NEW.idFollower, NEW.idFollowed);
    END IF;
END;
//

DELIMITER ;































SET FOREIGN_KEY_CHECKS = 0;









DROP TRIGGER check_deletedMessage;
DROP TRIGGER deletedMessage;
DROP TRIGGER check_deletedComment;
DROP TRIGGER deletedComment;
DROP TRIGGER deletedUser;
DROP TRIGGER check_deletedPost;
DROP TRIGGER deletedPost;
DROP TRIGGER insertChat;

DROP PROCEDURE insert_reactionPost;
DROP PROCEDURE delete_reactionPost;

DROP PROCEDURE insert_follow;
DROP PROCEDURE delete_follow;






SELECT * FROM user;
SELECT * FROM deletedUser;
SELECT * FROM post;
SELECT * FROM deletedPost;
SELECT * FROM reactionPost;
SELECT * FROM follow;
SELECT * FROM chat;
SELECT * FROM comment;
SELECT * FROM deletedComment;
SELECT * FROM notification;

INSERT INTO user (name,password,birthDate,description,email,profilePhoto,admin) VALUES ('UM','novo','01-01-0001','Sou novo','novo@mail','user.png',0);
INSERT INTO user (name,password,birthDate,description,email,profilePhoto,admin) VALUES ('DOIS','novo','01-01-0001','Sou novo','novo@mail','user.png',0);
INSERT INTO user (name,password,birthDate,description,email,profilePhoto,admin) VALUES ('TRÊS','novo','01-01-0001','Sou novo','novo@mail','user.png',0);
INSERT INTO user (name,password,birthDate,description,email,profilePhoto,admin) VALUES ('QUATRO','novo','01-01-0001','Sou novo','novo@mail','user.png',0);
INSERT INTO user (name,password,birthDate,description,email,profilePhoto,admin) VALUES ('CINCO','novo','01-01-0001','Sou novo','novo@mail','user.png',0);

INSERT INTO post (description,img,hashtag,postDate,idUser) VALUES ('postiei','img.png','#hashtag','01-01-0001',1);
INSERT INTO post (description,img,hashtag,postDate,idUser) VALUES ('postiei','img.png','#hashtag','01-01-0001',2);
INSERT INTO post (description,img,hashtag,postDate,idUser) VALUES ('postiei','img.png','#hashtag','01-01-0001',3);
INSERT INTO post (description,img,hashtag,postDate,idUser) VALUES ('postiei','img.png','#hashtag','01-01-0001',4);
INSERT INTO post (description,img,hashtag,postDate,idUser) VALUES ('postiei','img.png','#hashtag','01-01-0001',5);

INSERT INTO comment(description, commentDate, idPost, idUser) VALUES ('Uau', '01-01-0001',5,1);
INSERT INTO comment(description, commentDate, idPost, idUser) VALUES ('Uau', '01-01-0001',3,2);
INSERT INTO comment(description, commentDate, idPost, idUser) VALUES ('Uau', '01-01-0001',4,3);
INSERT INTO comment(description, commentDate, idPost, idUser) VALUES ('Uau', '01-01-0001',5,4);
INSERT INTO comment(description, commentDate, idPost, idUser) VALUES ('Uau', '01-01-0001',1,5);

CALL insert_reactionPost(1,1);
CALL insert_reactionPost(1,2);
CALL insert_reactionPost(3,1);
CALL insert_reactionPost(1,4);
CALL insert_reactionPost(1,5);

CALL insert_follow(1,2);
CALL insert_follow(1,3);
CALL insert_follow(1,4);
CALL insert_follow(1,5);
CALL insert_follow(5,1);

INSERT INTO message (message, dataMessage, idChat, idSender) VALUES ('ola',CURDATE(),1,1);


INSERT INTO notification 
    (message, dataNotification, idTarget, idSended) VALUES 
    (
    CONCAT( (SELECT name FROM user WHERE idUser = 1), ' enviou uma mensagem'),
    CURDATE(), 
    (SELECT CASE WHEN idUserA = 1 THEN idUserB ELSE idUserA END FROM chat WHERE idChat = 1),
    1
    );



DROP TRIGGER notifYMessage;