#include "Pedido.hpp"
#include <cstring>

Pedido::Pedido(const std::string &cliente, const std::string &descricao)
    : cliente(cliente), descricao(descricao), status("pedido enviado") {}

std::string Pedido::getCliente() const
{
    return cliente;
}

std::string Pedido::getDescricao() const
{
    return descricao;
}

std::string Pedido::getStatus() const
{
    return status;
}

void Pedido::setStatus(const std::string &novoStatus)
{
status=novoStatus;
}
