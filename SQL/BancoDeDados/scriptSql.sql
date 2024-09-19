Create Database bd_FinalProject;

CREATE TABLE `user` (
    `idUser` INT AUTO_INCREMENT NOT NULL,
    `name` VARCHAR(100) NOT NULL,
    `password` VARCHAR(25) NOT NULL,
    `birthDate` DATETIME NOT NULL,
    `description` VARCHAR(100) NULL,
    `email` VARCHAR(128) NOT NULL,
    `profilePhoto` VARCHAR(254) NOT NULL,
    `admin` BOOLEAN NOT NULL DEFAULT 0,
    `active` BOOLEAN NOT NULL DEFAULT 1,
    PRIMARY KEY (`idUser`)
)DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedUser` (
    `deletedIdUser` INT AUTO_INCREMENT NOT NULL,
    `idUser` INT NOT NULL,
    `name` VARCHAR(100) NOT NULL,
    `password` VARCHAR(25) NOT NULL,
    `birthDate` DATETIME NOT NULL,
    `description` VARCHAR(100) NULL,
    `email` VARCHAR(128) NOT NULL,
    `profilePhoto` VARCHAR(254) NOT NULL,
    `admin` BOOLEAN NOT NULL DEFAULT 0,
    `active` BOOLEAN NOT NULL DEFAULT 1,
    PRIMARY KEY (`idUser`)
)DEFAULT CHARSET=utf8mb4;

CREATE TABLE `Reaction` (
    `idReaction` INT AUTO_INCREMENT NOT NULL,
    `description` VARCHAR(255) NOT NULL,
    PRIMARY KEY (`idReaction`)
) DEFAULT CHARSET=utf8mb4;


CREATE TABLE `deletedReaction` (
	`deletedIdReaction` INT AUTO_INCREMENT NOT NULL,
    `idReaction` INT NOT NULL,
    `description` VARCHAR(255) NOT NULL,
    PRIMARY KEY (`idReaction`)
) DEFAULT CHARSET=utf8mb4;

CREATE TABLE `post` (
    `idPost` INT AUTO_INCREMENT NOT NULL,
    `description` VARCHAR(100) NULL,
    `img` VARCHAR(128) NULL,
    `hashtag` VARCHAR(60) NULL,
    `postDate` DATETIME NOT NULL,
    `idUser` INT NULL,
    PRIMARY KEY (`idPost`)
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedPost` (
    `deletedIdPost` INT AUTO_INCREMENT NOT NULL,
    `idPost` INT NOT NULL,
    `description` VARCHAR(100) NULL,
    `img` VARCHAR(128) NULL,
    `hashtag` VARCHAR(60) NULL,
    `postDate` DATETIME NOT NULL,
    `idUser` INT NULL,
    PRIMARY KEY (`idPost`)
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `follow` (
    `idFollower` INT NOT NULL,
    `idFollowed` INT NOT NULL,
    `active` BOOLEAN NOT NULL DEFAULT 0,
    PRIMARY KEY (`idFollower`, `idFollowed`),
    UNIQUE KEY `follows_idFollowed_idFollower_unique` (`idFollower`, `idFollowed`),
    FOREIGN KEY (`idFollower`) REFERENCES `user` (`idUser`) ON DELETE CASCADE,
    FOREIGN KEY (`idFollowed`) REFERENCES `user` (`idUser`) ON DELETE CASCADE
) DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedFollow` (
	`deletedFollowId` INT AUTO_INCREMENT NOT NULL,
    `idFollower` INT NOT NULL,
    `idFollowed` INT NOT NULL,
    `active` BOOLEAN NOT NULL DEFAULT 0,
    PRIMARY KEY (`idFollower`, `idFollowed`),
    UNIQUE KEY `follows_idFollowed_idFollower_unique` (`idFollower`, `idFollowed`)
) DEFAULT CHARSET=utf8mb4;

CREATE TABLE `comment` (
    `idComment` INT AUTO_INCREMENT NOT NULL,
    `description` VARCHAR(100) NULL,
    `commentDate` DATETIME NOT NULL,
    `idPost` INT NULL,
    `idUser` INT NULL,
    PRIMARY KEY (`idComment`),
    FOREIGN KEY (`idPost`) REFERENCES `post` (`idPost`) ON DELETE CASCADE,
    FOREIGN KEY (`idUser`) REFERENCES `user` (`idUser`) ON DELETE CASCADE
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedComment` (
	`deletedIdComment` INT AUTO_INCREMENT NOT NULL,
    `idComment` INT NOT NULL,
    `description` VARCHAR(100) NULL,
    `commentDate` DATETIME NOT NULL,
    `idPost` INT NULL,
    `idUser` INT NULL,
    PRIMARY KEY (`idComment`)
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `reactionPost` (
	`idReactionPost` INT AUTO_INCREMENT NOT NULL,
    `idReaction` INT NOT NULL,
    `idPost` VARCHAR(100) NULL,
	FOREIGN KEY (`idReaction`) REFERENCES `Reaction` (`idReaction`) ON DELETE CASCADE,
    FOREIGN KEY (`idPost`) REFERENCES `post` (`idPost`) ON DELETE CASCADE
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedReactionPost` (
	`deletedIdReactionPost` INT AUTO_INCREMENT NOT NULL,
    `idReaction` INT NOT NULL,
    `idPost` VARCHAR(100) NULL
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `chat` (
	`idChat` INT AUTO_INCREMENT NOT NULL,
    `idUserA` INT NOT NULL,
    `idUserB` VARCHAR(100) NULL,
	FOREIGN KEY (`idUserA`) REFERENCES `user` (`idUser`) ON DELETE CASCADE,
    FOREIGN KEY (`idUserB`) REFERENCES `user` (`idUser`) ON DELETE CASCADE
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedChat` (
	`deletedIdChat` INT AUTO_INCREMENT NOT NULL,	
	`idChat` INT AUTO_INCREMENT NOT NULL,
    `idUserA` INT NOT NULL,
    `idUserB` VARCHAR(100) NULL
)  DEFAULT CHARSET=utf8mb4;


CREATE TABLE `Message` (
	`idMessage` INT AUTO_INCREMENT NOT NULL,
    `message` varchar(3000) NOT NULL,
    `dataMessage` date not NULL,
    `idChat` INT  NOT NULL,
    `idSender` INT  NOT NULL,
	FOREIGN KEY (`idChat`) REFERENCES `Chat` (`idChat`) ON DELETE CASCADE,
    FOREIGN KEY (`idSender`) REFERENCES `user` (`idUser`)
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `deletedMessage` (
	`deletedIdMessage` INT AUTO_INCREMENT NOT NULL,
    `idMessage` INT NOT NULL,
    `message` varchar(3000) NOT NULL,
    `dataMessage` date not NULL,
    `idChat` INT  NOT NULL,
    `idSender` INT  NOT NULL
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `notification` (
	`idNotification` INT AUTO_INCREMENT NOT NULL,
    `message` varchar(3000) NOT NULL,
    `dataNotification` date not NULL
)  DEFAULT CHARSET=utf8mb4;

CREATE TABLE `notification` (
	`idNotification` INT AUTO_INCREMENT NOT NULL,
    `message` varchar(3000) NOT NULL,
    `dataNotification` date not NULL
)  DEFAULT CHARSET=utf8mb4;








