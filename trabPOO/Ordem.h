#pragma once
#include "Colecao.h"
#include <string>
#include "Conta.h"
#include "Cliente.h"

using namespace std;

class Cliente;
class Conta;

class Ordem : public Conta {
	Cliente* cliente;
	double plafound;
public:
	Ordem(const int& idConta, const double& saldo, double plafound);
	double getPlafound() const;
	Cliente* getCliente() const;
	void setCliente(Cliente* c);
	double deposito(double valor);
	double levantamento(double valor);
	bool operator<(const Ordem& n) const;
};