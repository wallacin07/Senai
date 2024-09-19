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
  fetch("../Dados/loja.json")
    .then((response) => response.json())
    .then((data) => {
      produtos = data;
      const produtosContainer =
        document.getElementById("produtos-container");

      produtos.forEach((produto, index) => {
        const card = document.createElement("div");
        card.className = "card";
        card.style.width = "18rem";
        card.style.marginRight = "10px";

        const imagem = document.createElement("img");
        imagem.src = produto.imagem;
        imagem.className = "card-img-top";

        const cardBody = document.createElement("div");
        cardBody.className = "card-body";

        const cardTitle = document.createElement("h5");
        cardTitle.className = "card-title";
        cardTitle.textContent = produto.descricao;

        const cardText = document.createElement("p");
        cardText.className = "card-text";
        cardText.textContent = "Preço: $" + produto.preco.toFixed(2);

        const btnAdicionarAoCarrinho = document.createElement("a");
        btnAdicionarAoCarrinho.href = "#";
        btnAdicionarAoCarrinho.className =
          "btn btn-primary btn-adicionar-ao-carrinho";
        btnAdicionarAoCarrinho.textContent = "Adicionar ao Carrinho";
        btnAdicionarAoCarrinho.setAttribute("data-indice", index);

        cardBody.appendChild(cardTitle);
        cardBody.appendChild(cardText);
        cardBody.appendChild(btnAdicionarAoCarrinho);

        card.appendChild(imagem);
        card.appendChild(cardBody);

        produtosContainer.appendChild(card);
      });
    })
    .catch((error) => console.error("Erro ao carregar o arquivo JSON", error));

  $("#produtos-container").on(
    "click",
    ".btn-adicionar-ao-carrinho",
    function () {
      const indexDoProduto = $(this).data("indice");
      const produtoSelecionado = produtos[indexDoProduto];
      let carrinho = JSON.parse(localStorage.getItem("carrinho")) || [];
      carrinho.push(produtoSelecionado);
      localStorage.setItem("carrinho", JSON.stringify(carrinho));
      
      alert("Voce adicionou um produto ao Carrinho");
      // const alert = document.getElementById("alert");

      // const modal = document.createElement("dialog");
      // modal.className = "confirmBuy-modal";
      // const modalHeader = document.createElement("div");
      // modalHeader.className = "modal-header";
      // const modalBody = document.createElement("div");
      // modalBody.className = "modal-body";
      // const modalFooter = document.createElement("div");
      // modalFooter.className = "modal-footer";

      // const h3 = document.createElement("h3");
      // h3.textContent = "Alerta"
      // const h5 = document.createElement("h5");
      // h5.textContent = "Você adicionou esse item ao carrinho";
      // const confirm = document.createElement("button");
      // confirm.style.width = '100%';
      // confirm.style.height = '10%';
      // confirm.textContent = "Confirmar";

      // modal.appendChild(modalHeader);
      // modal.appendChild(modalBody);
      // modal.appendChild(modalFooter);
      // modalHeader.appendChild(h3);
      // modalBody.appendChild(h5);
      // modalFooter.appendChild(confirm);

      // alert.appendChild(modal);

      // modal.showModal()

      // confirm.onclick = function () {
      //     modal.close()
      // }

    }
  );
});
