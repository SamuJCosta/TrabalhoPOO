#include <iostream>
#include "Cliente.h"
#include "Ordem.h"
#include "Prazo.h"

Cliente::Cliente(int id, string nome, string telefone)
    : idCliente(id), nomeCliente(nome), contacto(telefone) {}

bool Cliente::operator<(const Cliente& n) const {
    return idCliente < n.idCliente;
}

bool Cliente::addPrazo(int bancoId, int idConta, double saldo, double taxaJuro) {
    Prazo newConta(idConta, saldo, taxaJuro);
    newConta.setNib(bancoId, idCliente, idConta);
    newConta.setCliente(this);
    return contasPrazo.insert(newConta);
}

bool Cliente::addOrdem(int bancoId, int idConta, double saldo, double plafound) {
    Ordem newConta(idConta, saldo, plafound);
    newConta.setNib(bancoId, idCliente, idConta);
    newConta.setCliente(this);
    return contasOrdem.insert(newConta);
}

int Cliente::getIdCliente() const {
    return idCliente;
}

string Cliente::getcontacto() const {
    return contacto;
}

string Cliente::getNomeCliente() const {
    return nomeCliente;
}

Ordem* Cliente::findOrdem(int idConta) {
    Ordem temp(idConta, 0.0, 0.0);
    return contasOrdem.find(temp);
}

Prazo* Cliente::findPrazo(int idConta) {
    Prazo temp(idConta, 0.0, 0.0);
    return contasPrazo.find(temp);
}

void Cliente::setNomeCliente(const string& nome) {
    nomeCliente = nome;
}

void Cliente::setcontacto(const string& telefone) {
    contacto = telefone;
}

void Cliente::printDetalhado() const {
    cout << "clienteID: " << idCliente << endl;
    cout << "Nome: " << nomeCliente << endl;
    cout << "Telemovel: " << contacto << endl;
    cout << "Contas:" << endl;

    for (auto it = contasOrdem.begin(); it != contasOrdem.end(); ++it) {
        cout << "     Ordem:" << endl;
        cout << "          - NIB: " << (*it).getNIB() << endl;
        cout << "          Saldo: " << (*it).getSaldo() << " EUR (min.: " << (*it).getPlafound() << " EUR)" << endl;
    }

    for (auto it = contasPrazo.begin(); it != contasPrazo.end(); ++it) {
        cout << "     Prazo:" << endl;
        cout << "          - NIB: " << (*it).getNIB() << endl;
        cout << "          Saldo: " << (*it).getSaldo() << " EUR (Taxa aplicada: " << (*it).getTaxaJuro() * 100 << "%)" << endl;
    }
}
