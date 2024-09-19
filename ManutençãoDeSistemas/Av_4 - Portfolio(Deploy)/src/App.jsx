
import style from '../src/App.module.css'
import imagem from '../src/assets/imagem.svg'
import mundo from '../src/assets/no-mundo-todo.png'
import github from '../src/assets/icons8-github-250.svg'
import controle from '../src/assets/controle-de-jogo.png'
import dados from '../src/assets/coleta-de-dados.png'
import java from '../src/assets/java-svgrepo-com.svg'
import Csharp from '../src/assets/Csharp.svg'
import C from '../src/assets/c.svg'
import Javascript from '../src/assets/logo-javascript.svg'
import sql from '../src/assets/microsoft-sql-server-logo.svg'
import python from '../src/assets/python.svg'
import csi from '../src/assets/CSI.png'
import Bosch from '../src/assets/Bosch-Logo-W (1).webp'
import html from '../src/assets/icons8-html-480.svg'
import Linkedin from '../src/assets/icons8-linkedin-240.svg'
import css from '../src/assets/w3_css-icon.svg'

function App() {

  const enviar = () => 
  {
    let mensagem = "Ola queria saber mais sobre seu trabalho";
     var numeroTelefone = "5541988778886";
 
     var link = "https://wa.me/" + numeroTelefone + `?text=${encodeURIComponent(mensagem)}`;
     window.open(link, "_blank")
  }
  return (


    
    <>
      <header>
        <div className={style.Start}>
            <svg width="40" height="23" viewBox="0 0 90 60" fill="none" xmlns="http://www.w3.org/2000/svg"><rect x="6" y="10" width="35" height="52" fill="#000000"></rect><path d="M0 0V70.338H89.521V0H0ZM19.184 53.481L12.79 47.085L19.184 40.691L25.578 34.2971C25.578 34.2971 21.681 30.4 19.184 27.903C16.687 25.406 12.79 21.509 12.79 21.509L15.987 18.3115L19.184 15.114L28.7755 24.7055L38.367 34.2971L28.7755 43.889L19.184 53.481Z" fill="aliceblue"></path><rect  x="45" y="44" width="29" height="8" fill="#000000"></rect></svg>
            <h3>DevSpot</h3>
        </div>
        <nav className={style.navBar}>
            <div className={style.navItens}>
                <div className={style.guides} >
                       <a href="#home"><h3 id={style.home}>Home</h3></a> 
                </div>
                
                <div className={style.guides}>
                       <a href="#experience"><h3 id={style.experience}> Experience</h3></a> 

                </div>

                <div className={style.guides}>
                       <a href="#myStory"><h3 id={style.story}>My Story</h3></a> 
                </div>

                <div className={style.guides} >  
                        <a href="#contact" onClick={() => enviar()}><h3 id={style.contact}>Contact me</h3></a>
                </div>

            </div>
        </nav>
    </header>


    <div className={style.mainContent}>
<section id='home'>

  <div className={style.boxAbout}>
      <div className={style.textAbout}>
          <h1>Hello, i&apos;m <span className={style.neonText}>Wallace!</span></h1>
          
          <h2>I&apos;m a developer.</h2>
          
          <div className={style.neon}>
          <h3>

          Minha area principal é no desenvolvimento back-end, mas também com atuação no front-end, o que me proporciona uma melhor visão do ciclo de desenvolvimento de aplicações. 
          Ao longo desse tempo, trabalhei em projetos que envolvem a construção de APIs, manipulação de bancos de dados, e implementação de lógica.
          <br/><br/>
          Estou constantemente em busca de aprimorar meus conhecimentos e aplicar soluções criativas nos projetos em que estou envolvida, com o objetivo de me tornar uma desenvolvedor full stack mais completo.
          </h3>

          </div>
      </div>
      <div className={style.hero_graphic}>
          <div className={style.computer_graphic}><img src={imagem} alt="" /></div></div>

  </div>




</section>
<section id='experience'>
  <div className={style.Technologies}>
  <h1 className={style.cardsText5}>My Projects </h1>

    <div className={style.projects}>
        <div className={style.cards}>
            <img src={mundo} alt="" className={style.cardsImg}/>
            <h2 className={style.cardsText2}>Rede Social</h2>
            <h3  className={style.cardsText}>Este projeto foi desenvolvido com mais dois parceiros de trabalho, para um projeto final. <br /><br />
                ele foi feito em express, javascript, ejs e css.
            </h3 >
            <a id="link" target='blank' href="https://github.com/wallacin07/SocialMedia_WebProject"><img  id={style.imageFooter} src={github} alt=""/></a>
        </div>

        <div className={style.cards}>
            <img src={controle} alt="" className={style.cardsImg}/>
            <h2 className={style.cardsText2}>Explode Man</h2>
            <h3 className={style.cardsText}>Um jogo feito em c, inspirado no Bomberman<br /><br /> foi desenvolvido por mim e meus colegas, para o projeto final</h3>
            <a id="link" target='blank' href="https://github.com/wallacin07/ProjetosPessoais/tree/main/Grafico"><img  id={style.imageFooter} src={github} alt=""/></a>
        </div>

        <div className={style.cards}>
            <img src={dados} alt="" className={style.cardsImg}/>
            <h2 className={style.cardsText2}>Struct Data</h2>
            <h3 className={style.cardsText}>Esse projeto foi feito como proposta final de java, onde fazemos todas as estruturas de dados<br /><br />Nele tem pilha, fila e hash</h3>
            <a id="link" target='blank' href="https://github.com/wallacin07/Bosch/tree/main/5%20-%20Java/Aula%205"><img  id={style.imageFooter} src={github} alt=""/></a>
        </div>
    </div>



      <div className={style.textTech}>
          <h1>
              Languages that i learned!
          </h1>
      </div>
  
    <div className={style.images}>    
        <div className={style.boxImage}>
            <img id={style.imageTech} src={java} alt=""/>
        </div>

        <div className={style.boxImage}>
            <img id={style.imageTech} src={Csharp} alt=""/>
        </div>

        <div className={style.boxImage}>
            <img id={style.imageTech} src={C} alt=""/>
        </div>

        <div className={style.boxImage}>
            <img id={style.imageTech} src={python} alt=""/>
        </div>


        <div className={style.boxImage}>
            <img id={style.imageTech} src={html} alt=""/>
        </div>

        <div className={style.boxImage}>
            <img id={style.imageTech} src={css} alt=""/>
        </div>

        <div className={style.boxImage}>
            <img id={style.imageTech} src={Javascript} alt=""/>
        </div>


        <div className={style.boxImage}>
            <img id={style.imageTech} src={sql} alt=""/>
        </div>
        
        <div className={style.boxImage}>
            <img id={style.imageTech} src="https://git-scm.com/images/logos/downloads/Git-Icon-1788C.svg" alt=""/>
        </div>


    </div>


</div>
</section>



    <section id='myStory'>
        <div className={style.career}>
        <h1 className={style.cardsText4}>My Career && My Professional Experience</h1>

                <div className={style.projects2}>
                        <div className={style.cards}>
                            <img src={csi} alt="" className={style.cardsImg3}/>
                            <h2 className={style.cardsText2}>Suporte N1</h2>
                            <h3  className={style.cardsText}>Trabalhei por 1 ano como Suporte mexendo com servidores,Grafana, Gerenciamento de Usuários e rede
                            </h3 >
                            
                        </div>

                        <div className={style.cards}>
                            <img src={Bosch} alt="" className={style.cardsImg2}/>
                            <h2 className={style.cardsText2}>Aprendiz</h2>
                            <h3 className={style.cardsText}>Atualmente estou na Bosch Brasil, Atuando como aprendiz, e me desenvolvendo para virar um Desenvolvedor</h3>
                        </div>
                    </div>

            </div>
            </section>










</div>




<footer>
<a id="link" target='blank' href="https://github.com/wallacin07"><img  id={style.imageFooter} src={github} alt=""/></a>
<a  id="link" target='blank' href="https://www.linkedin.com/in/wallace-abreu-da-silva-948304244?utm_source=share&utm_campaign=share_via&utm_content=profile&utm_medium=android_app"><img  id={style.imageFooter} src={Linkedin} alt=""/></a>
</footer>
    </>
  )
}

export default App
