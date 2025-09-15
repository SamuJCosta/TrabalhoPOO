#pragma once
#include "Conta.h"
#include "Cliente.h"

using namespace std;

class Cliente;

class Prazo : public Conta {
    Cliente* cliente;
    double taxaJuro;

public:
    Prazo(int idConta, const double& saldo, double taxaJuro);
    double getTaxaJuro() const;
    void setCliente(Cliente* c);
    Cliente* getCliente() const;
    double deposito(double valor);
    bool operator<(const Prazo& n) const;
};
