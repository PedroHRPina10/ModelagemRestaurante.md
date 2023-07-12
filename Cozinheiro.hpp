#ifndef COZINHEIRO_HPP
#define COZINHEIRO_HPP

#include <string>
#include <vector>

class Cozinheiro
{
private:
    struct Pedido
    {
        std::string cliente;
        std::vector<std::string> itens;
        std::string status;
    };

    std::vector<Pedido> pedidos;

public:
    void receberNovoPedido(const std::string &cliente, const std::vector<std::string> &itens);
    void exibirPedidosPendentes() const;
    void exibirDetalhesPedido(int indicePedido) const;
    void marcarPedidoPreparado(int indicePedido);
};

#endif
