#include<iostream>
#include "Prazo.h"

Prazo::Prazo(int idConta, const double& saldo, double taxaJuro)
    : Conta(idConta, "", saldo), taxaJuro(taxaJuro), cliente(nullptr) {}

double Prazo::getTaxaJuro() const {
    return taxaJuro;
}

void Prazo::setCliente(Cliente* c) {
    cliente = c;
}

Cliente* Prazo::getCliente() const {
    return cliente;
}

double Prazo::deposito(double valor) {
    setSaldo(getSaldo() + valor);
    return getSaldo();
}

bool Prazo::operator<(const Prazo& n) const {
    return getIdConta() < n.getIdConta();
}
