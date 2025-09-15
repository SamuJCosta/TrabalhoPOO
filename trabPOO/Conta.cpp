#include <iostream>
#include "Conta.h"

Conta::Conta(int idConta, string nib, double saldo)
    : idConta(idConta), nib(nib), saldo(saldo) {}

int Conta::getIdConta() const {
    return idConta;
}

string Conta::getNIB() const {
    return nib;
}

double Conta::getSaldo() const {
    return saldo;
}

bool Conta::operator<(const Conta& n) const {
    return idConta < n.idConta;
}

void Conta::setNib(int bancoId, int clienteId, int contaId) {
    char _nib[] = "AAAABBBBCCCCD";
    snprintf(_nib, sizeof(_nib), "%04d%04d%04d", bancoId, clienteId, contaId);
    _nib[12] = static_cast<char>((sumDigits(_nib) % 9 + 1) + '0');
    nib = _nib;
}

bool Conta::validarNib(string _nib) {
    return (sumDigits(_nib) - (_nib[12] - '0')) % 9 + 1 == _nib[12] - '0';
}

int Conta::sumDigits(const string& str) {
    int sum = 0;
    for (char c : str) {
        if (isdigit(c)) {
            sum += c - '0';
        }
    }
    return sum;
}

void Conta::setSaldo(double saldo) {
    this->saldo = saldo;
}
