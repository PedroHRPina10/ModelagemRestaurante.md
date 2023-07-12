#include "Entregador.hpp"
#include <iostream>

void Entregador::receberNovoPedido(const std::string &enderecoEntrega, const std::string &contatoCliente)
{
    Pedido pedido;
    pedido.enderecoEntrega = enderecoEntrega;
    pedido.contatoCliente = contatoCliente;
    pedido.status = "a caminho";
    pedidos.push_back(pedido);
}

void Entregador::exibirPedidosPendentes() const
{
    std::cout << "Pedidos pendentes de entrega:\n";
    int i = 1;
    for (const auto &pedido : pedidos)
    {
        std::cout << "Pedido " << i << ":\n";
        std::cout << "Endereco de entrega: " << pedido.enderecoEntrega << "\n";
        std::cout << "Contato do cliente: " << pedido.contatoCliente << "\n";
        std::cout << "Status: " << pedido.status << "\n\n";
        i++;
    }
}

void Entregador::exibirTempoEntrega() const
{
    std::cout << "Tempo estimado de entrega:\n";
    // Implementação para exibir o tempo estimado de entrega
}

/*void Entregador::marcarPedidoEntregue(std::vector<Entregador::Pedido>::size_type indicePedido)
{
    if (indicePedido > 0 && indicePedido <= pedidos.size())
    {
        pedidos[indicePedido - 1].status = "entregue";
    }
}
*/
