#include <iostream>
#include <string>
#include "DonoRestaurante.hpp"
#include "Cliente.hpp"
#include "Entregador.hpp"
#include "Cozinheiro.hpp"

int main()
{
    DonoRestaurante donoRestaurante;
    donoRestaurante.cadastrarFornecedor("Fornecedor 1", "Endereco 1", "Telefone 1");
    donoRestaurante.cadastrarFornecedor("Fornecedor 2", "Endereco 2", "Telefone 2");

    donoRestaurante.exibirFornecedores();

    Cliente cliente;
    cliente.realizarPedido("Endereco do Cliente");
    cliente.exibirStatusPedido();
    cliente.cancelarPedido();

    Entregador entregador;
    entregador.receberNovoPedido("Endereco de Entrega", "Contato do Cliente");
    entregador.exibirPedidosPendentes();
   // entregador.marcarPedidoEntregue(1);

    Cozinheiro cozinheiro;
    cozinheiro.receberNovoPedido("Cliente 1", {"Item 1", "Item 2"});
    cozinheiro.receberNovoPedido("Cliente 2", {"Item 3"});
    cozinheiro.exibirPedidosPendentes();
    cozinheiro.marcarPedidoPreparado(1);

    system("pause");
    return 0;
}
