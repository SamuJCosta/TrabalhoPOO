#pragma once
#include <string>
#include "Colecao.h"
#include "Cliente.h"

using namespace std;

class Cliente;
class Conta;

class Banco {
    int bancoId;
    string nome;
    Colecao<Cliente> clientes;
    static int clienteIdCounter;
    static int contaIdCounter;

public:
    Banco(int bancoID, string nome);
    bool addCliente(string nome, string numero);
    bool addOrdemCliente(double saldo, double plafound, int idCliente);
    bool addPrazoCliente(double saldo, double taxaJuro, int idCliente);
    int getbancoID() const;
    string getNome() const;
    Cliente* findCliente(int idCliente);
    void setNomeCliente(int idCliente, string nomeCliente);
    void setTelefoneCliente(int idCliente, string numero);
    void printBanco(int bancoID);
};
