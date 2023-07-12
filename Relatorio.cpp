#include "Relatorio.hpp"
#include <iostream>

Relatorio::Relatorio()
{
    custoTotal = 0.0;
    lucroTotal = 0.0;
    despesaTotal = 0.0;
}

void Relatorio::adicionarPedido(const Pedido &pedido)
{
    pedidos.push_back(pedido);
}
/*
void Relatorio::calcularCustos()
{
    custoTotal = 0.0;
    for (const auto &pedido : pedidos)
    {
        custoTotal += pedido; //.calcularCustoProducao();
    }
}
*/
double Relatorio::calcularLucro() const
{
    return lucroTotal - calcularDespesa();
}

double Relatorio::calcularDespesa() const
{
    // Lógica para calcular as despesas do restaurante
    double despesa = 0.0;
    // Exemplo de despesa fixa mensal
    double despesaFixaMensal = 2000.0;
    // Exemplo de despesa variável por pedido
    double despesaVariavelPorPedido = 2.5;

    // Calcula a despesa total com base no número de pedidos
    despesa = despesaFixaMensal + (despesaVariavelPorPedido * pedidos.size());

    return despesa;
}

void Relatorio::mostrarRelatorio() const
{
   // calcularCustos();
    std::cout << "Relatório de vendas:\n";
    std::cout << "-------------------------------------------\n";
    for (const auto &pedido : pedidos)
    {
      //  std::cout << "ID do Pedido: " << pedido.getId() << "\n";
        std::cout << "Cliente: " << pedido.getCliente() << "\n";
    //    std::cout << "Itens do Pedido:\n";
     //   for (const auto &item : pedido.getItens())
       // {
      //      std::cout << "- " << item.getNome() << " (" << item.getQuantidade() << "x)\n";
      //  }
      //  std::cout << "-------------------------------------------\n";
   // }
    std::cout << "Custo Total: R$" << custoTotal<<"\n";
    std::cout << "Lucro Total: R$" << lucroTotal<<"\n";
    std::cout << "Despesa Total: R$" << despesaTotal<<"\n";
    std::cout << "Lucro Liquido: R$" << calcularLucro()<<"\n";
}
}
