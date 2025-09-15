#pragma once
#include "Colecao.h"
#include<string>
#include "Banco.h"
#include "Prazo.h"
#include "Ordem.h"

using namespace std;

class Ordem;
class Prazo;

class Cliente {
    int idCliente;
    string nomeCliente;
    string contacto;
    Colecao<Ordem> contasOrdem;
    Colecao<Prazo> contasPrazo;

public:
    Cliente(int id, string nome, string telefone);
    bool addPrazo(int bancoId, int idConta, double saldo, double taxaJuro);
    bool addOrdem(int bancoId, int idConta, double saldo, double plafound);
    int getIdCliente() const;
    string getcontacto() const;
    string getNomeCliente() const;
    Ordem* findOrdem(int idConta);
    Prazo* findPrazo(int idConta);
    void setNomeCliente(const string& nome);
    void setcontacto(const string& telefone);
    void printDetalhado() const;
    bool operator<(const Cliente& n) const;
};
