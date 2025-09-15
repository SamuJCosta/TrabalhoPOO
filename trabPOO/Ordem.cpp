#include<iostream>
#include "Ordem.h"

Ordem::Ordem(const int& idConta, const double& saldo, double plafound)
    : Conta(idConta, "", saldo), plafound(plafound), cliente(nullptr) {}

double Ordem::getPlafound() const {
    return plafound;
}

Cliente* Ordem::getCliente() const {
    return cliente;
}

void Ordem::setCliente(Cliente* c) {
    cliente = c;
}

double Ordem::deposito(double valor) {
    setSaldo(getSaldo() + valor);
    return getSaldo();
}

double Ordem::levantamento(double valor) {
    if (getSaldo() - valor >= -plafound) {
        setSaldo(getSaldo() - valor);
        return getSaldo();
    }
    return getSaldo();
}

bool Ordem::operator<(const Ordem& n) const {
    return getIdConta() < n.getIdConta();
}
