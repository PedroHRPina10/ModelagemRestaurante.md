#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <vector>

class Cliente
{
private:
    struct Pedido
    {
        std::string endereco;
        std::vector<std::string> itens;
        std::string status;
    };

    Pedido pedido;

public:
    void realizarPedido(const std::string &endereco);
    void exibirStatusPedido() const;
    void cancelarPedido();
};

#endif