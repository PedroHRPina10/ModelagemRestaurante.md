#ifndef ENTREGADOR_HPP
#define ENTREGADOR_HPP

#include <string>
#include <vector>

class Entregador
{
private:
    struct Pedido
    {
        std::string enderecoEntrega;
        std::string contatoCliente;
        std::string status;
    };

    std::vector<Pedido> pedidos;

public:
    void receberNovoPedido(const std::string &enderecoEntrega, const std::string &contatoCliente);
    void exibirPedidosPendentes() const;
    void exibirTempoEntrega() const;
   /* void marcarPedidoEntregue(int indicePedido);*/
};

#endif
