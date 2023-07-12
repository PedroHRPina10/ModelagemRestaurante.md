#ifndef CARDAPIO_HPP
#define CARDAPIO_HPP

#include <string>
#include <vector>

class Cardapio
{
public:
    struct Item
    {
        std::string nome;
        std::string descricao;
        double preco;
    };

    Cardapio();

    void adicionarItem(const std::string &nome, const std::string &descricao, double preco);
    void removerItem(const std::string &nome);
    void exibirCardapio() const;

private:
    std::vector<Item> itens;
};

#endif