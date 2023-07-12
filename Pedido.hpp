#ifndef PEDIDO_HPP
#define PEDIDO_HPP

#include <string>

class Pedido
{
private:
    std::string cliente;
    std::string descricao;
    std::string status;

public:
    Pedido(const std::string &cliente, const std::string &descricao);
    std::string getCliente() const;
    std::string getDescricao() const;
    std::string getStatus() const;
    void setStatus(const std::string &novoStatus);
};

#endif
