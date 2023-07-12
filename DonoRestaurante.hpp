#ifndef DONORESTAURANTE_HPP
#define DONORESTAURANTE_HPP

#include <string>
#include <vector>

class DonoRestaurante
{
private:
    struct Fornecedor
    {
        std::string nome;
        std::string endereco;
        std::string telefone;
    };

    std::vector<Fornecedor> fornecedores;

public:
    void cadastrarFornecedor(const std::string &nome, const std::string &endereco, const std::string &telefone);
    void editarFornecedor(const std::string &nome, const std::string &novoEndereco, const std::string &novoTelefone);
    void excluirFornecedor(const std::string &nome);
    void exibirFornecedores() const;
    void exibirPratosMaisVendidos() const;
    void exibirLucroDiario() const;
    void exibirLucroSemanal() const;
    void exibirLucroMensal() const;
};

#endif
