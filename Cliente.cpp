#include "Cliente.hpp"
#include <iostream>

void Cliente::realizarPedido(const std::string &endereco)
{
    pedido.endereco = endereco;
    pedido.status = "pedido enviado";
}

void Cliente::exibirStatusPedido() const
{
    std::cout << "Status do pedido:\n";
    std::cout << "Endereco de entrega: " << pedido.endereco << "\n";
    std::cout << "Status: " << pedido.status << "\n";
}

void Cliente::cancelarPedido()
{
    if (pedido.status == "pedido enviado")
    {
        pedido.status = "pedido cancelado";
    }
}