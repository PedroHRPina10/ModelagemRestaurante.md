#ifndef RELATORIO_HPP
#define RELATORIO_HPP

#include <vector>
#include "Pedido.hpp"

class Relatorio
{
private:
    std::vector<Pedido> pedidos;
    double custoTotal;
    double lucroTotal;
    double despesaTotal;

public:
    Relatorio();
    void adicionarPedido(const Pedido &pedido);
    void calcularCustos();
    double calcularLucro() const;
    double calcularDespesa() const;
    void mostrarRelatorio() const;
};

#endif
