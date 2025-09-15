#pragma once
#include <string>

using namespace std;

class Conta {
    int idConta;
    string nib;
    double saldo;

public:
    Conta(int idConta, string nib, double saldo);
    int getIdConta() const;
    string getNIB() const;
    double getSaldo() const;
    void setSaldo(double saldo);
    void setNib(int bancoId, int clienteId, int contaId);
    bool validarNib(string nib);
    int sumDigits(const string& str);
    bool operator<(const Conta& n) const;
};
