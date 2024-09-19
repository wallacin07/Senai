function login() {
  const modal = document.querySelector('dialog')
  var nome = $("#nome").val();
  var senha = $("#senha").val();

  if (nome === "admin" && senha === "admin") {
    const user = {
      name: nome,
      dataEntrada: new Date(),
      id: Math.floor(Math.random() * 100000),
    };

    localStorage.setItem("usuario", JSON.stringify(user));

    window.location.href = "../Loja/loja.html";
  } else {
    modal.showModal()
    const button = document.querySelector("dialog button");
    button.onclick = function () {
      modal.close();
    }
      
  }
}

function showPassword()
{
  console.log("foi")
  const senha = document.getElementById('senha');
  if (senha.getAttribute('type') === 'password') {
    senha.setAttribute('type', 'text');
  }
  else
  {
    senha.setAttribute('type', 'password');
  };
}
