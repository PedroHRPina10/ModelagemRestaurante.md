#include "Cardapio.hpp"
#include <iostream>

Cardapio::Cardapio() {}

void Cardapio::adicionarItem(const std::string &nome, const std::string &descricao, double preco)
{
    Item item;
    item.nome = nome;
    item.descricao = descricao;
    item.preco = preco;
    itens.push_back(item);
}

void Cardapio::removerItem(const std::string &nome)
{
    for (auto it = itens.begin(); it != itens.end(); ++it)
    {
        if (it->nome == nome)
        {
            itens.erase(it);
            break;
        }
    }
}

void Cardapio::exibirCardapio() const
{
    std::cout << "Cardápio do Restaurante:\n";
    std::cout << "-------------------------------------------\n";
    for (const auto &item : itens)
    {
        std::cout << "Nome: " << item.nome << "\n";
        std::cout << "Descrição: " << item.descricao << "\n";
        std::cout << "Preço: R$" << item.preco << "\n\n";
    }
    std::cout << "-------------------------------------------\n";
}