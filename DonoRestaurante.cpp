#include "DonoRestaurante.hpp"
#include <iostream>

void DonoRestaurante::cadastrarFornecedor(const std::string &nome, const std::string &endereco, const std::string &telefone)
{
    Fornecedor fornecedor;
    fornecedor.nome = nome;
    fornecedor.endereco = endereco;
    fornecedor.telefone = telefone;
    fornecedores.push_back(fornecedor);
}

void DonoRestaurante::editarFornecedor(const std::string &nome, const std::string &novoEndereco, const std::string &novoTelefone)
{
    for (auto &fornecedor : fornecedores)
    {
        if (fornecedor.nome == nome)
        {
            fornecedor.endereco = novoEndereco;
            fornecedor.telefone = novoTelefone;
            break;
        }
    }
}

void DonoRestaurante::excluirFornecedor(const std::string &nome)
{
    for (auto it = fornecedores.begin(); it != fornecedores.end(); ++it)
    {
        if (it->nome == nome)
        {
            fornecedores.erase(it);
            break;
        }
    }
}

void DonoRestaurante::exibirFornecedores() const
{
    std::cout << "Lista de fornecedores cadastrados:\n";
    for (const auto &fornecedor : fornecedores)
    {
        std::cout << "Nome: " << fornecedor.nome << "\n";
        std::cout << "Endereco: " << fornecedor.endereco << "\n";
        std::cout << "Telefone: " << fornecedor.telefone << "\n\n";
    }
}
/*
void DonoRestaurante::visualizarStatusEstoque() const
{
    std::cout << "Status do estoque:\n";
    // Implementação para visualizar o status do estoque
}
*/
/*void DonoRestaurante::visualizarRelatorios() const
{
    std::cout << "Relatórios de vendas e faturamento:\n";
    // Implementação para visualizar os relatórios de vendas e faturamento
}
*/
