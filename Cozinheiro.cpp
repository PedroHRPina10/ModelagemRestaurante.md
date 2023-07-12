#include "Cozinheiro.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <cstring>

void Cozinheiro::receberNovoPedido(const std::string &cliente, const std::vector<std::string> &itens)
{
    Pedido pedido;
    pedido.cliente = cliente;
    pedido.itens = itens;
    pedido.status = "pendente";
    pedidos.push_back(pedido);
}

void Cozinheiro::exibirPedidosPendentes() const
{
    std::cout << "Pedidos pendentes de preparo:\n";
    int i = 1;
    for (const auto &pedido : pedidos)
    {
        std::cout << "Pedido " << i << ":\n";
        std::cout << "Cliente: " << pedido.cliente << "\n";
        std::cout << "Itens: ";
        for (const auto &item : pedido.itens)
        {
            std::cout << item << ", ";
        }
        std::cout << "\n";
        std::cout << "Status: " << pedido.status << "\n\n";
        i++;
    }
}

void Cozinheiro::exibirDetalhesPedido(int indicePedido) const
{
    if (indicePedido > 0 && indicePedido <= pedidos.size())
    {
        const auto &pedido = pedidos[indicePedido - 1];
        std::cout << "Detalhes do pedido:\n";
        std::cout << "Cliente: " << pedido.cliente << "\n";
        std::cout << "Itens: " << std::endl;
        for (const auto &item : pedido.itens)
        {
            std::cout << item << ", ";
        }
        std::cout << "\n";
        std::cout << "Status: " << pedido.status << "\n";
    }
}

void Cozinheiro::marcarPedidoPreparado(int indicePedido)
{
    if (indicePedido > 0 && indicePedido <= pedidos.size())
    {
        pedidos[indicePedido - 1].status = "preparado";
    }
}
