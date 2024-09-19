// Declaração da variável produtos fora do escopo do evento para torná-la global
let produtos;

// window.onload = function () {
//   var storedUser = localStorage.getItem("usuario");
//   var user = JSON.parse(storedUser);
//   document.getElementById("user").textContent = user.name;
//   document.getElementById("perfil").textContent = user.name;
//   document.getElementById("idPerfil").textContent = user.id;
// };

document.addEventListener("DOMContentLoaded", function () {
    console.log('ta indo')
  fetch("../Dados/showRoom.json")
    .then((response) => response.json())
    .then((data) => {
      produtos = data;
      const produtosContainer = document.getElementById("produtos-container");

      produtos.forEach((produto, index) => {
        const card = document.createElement("div");
        card.className = "card";
        card.style.width = "18rem";
        card.style.marginRight = "10px";
        card.style.border = "2px solid black";

        const imagem = document.createElement("img");
        imagem.src = produto.imagem;
        imagem.className = "card-img-top";
        imagem.style.width = "25%";
        imagem.style.height = "25%";

        const cardBody = document.createElement("div");
        cardBody.className = "card-body";

        const cardTitle = document.createElement("h5");
        cardTitle.className = "card-title";
        cardTitle.textContent = produto.descricao;
        
        const cardDisponibility = document.createElement("div");
        cardDisponibility.style.width = "15px";
        cardDisponibility.style.height = "15px";
        cardDisponibility.style.borderRadius = "10px";
        if (produto.status === true) {
            cardDisponibility.style.backgroundColor = "Green";
        }
        else
        {
            cardDisponibility.style.backgroundColor = "Red";
        }

        const cardText = document.createElement("p");
        cardText.className = "card-text";
        cardText.textContent = "Preço: $" + produto.preco.toFixed(2);

        const cardText2 = document.createElement("p");
        cardText2.className = "card-text";
        cardText2.textContent = "Quantidade: " + produto.quantidade;

        cardBody.appendChild(cardTitle);
        cardBody.appendChild(cardText);
        cardBody.appendChild(cardText2);
        cardBody.appendChild(cardDisponibility);

        card.appendChild(imagem);
        card.appendChild(cardBody);

        produtosContainer.appendChild(card);
      });
    })
    .catch((error) => console.error("Erro ao carregar o arquivo JSON", error));

});
