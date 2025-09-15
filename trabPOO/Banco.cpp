#include<iostream>
#include "Banco.h"
#include "Cliente.h"
#include "Ordem.h"
#include "Prazo.h"

int Banco::clienteIdCounter = 1;
int Banco::contaIdCounter = 1;

Banco::Banco(int bancoID, string nome) : bancoId(bancoID), nome(nome) {}

bool Banco::addCliente(string nome, string numero) {
    Cliente newCliente(clienteIdCounter++, nome, numero);
    return clientes.insert(newCliente);
}

bool Banco::addOrdemCliente(double saldo, double plafound, int idCliente) {
    Cliente* cliente = findCliente(idCliente);
    if (cliente) {
        return cliente->addOrdem(bancoId, contaIdCounter++, saldo, plafound);
    }
    return false;
}

bool Banco::addPrazoCliente(double saldo, double taxaJuro, int idCliente) {
    Cliente* cliente = findCliente(idCliente);
    if (cliente) {
        return cliente->addPrazo(bancoId, contaIdCounter++, saldo, taxaJuro);
    }
    return false;
}

int Banco::getbancoID() const {
    return bancoId;
}

string Banco::getNome() const {
    return nome;
}

Cliente* Banco::findCliente(int idCliente) {
    Cliente temp(idCliente, "", "");
    return clientes.find(temp);
}

void Banco::setNomeCliente(int idCliente, string nomeCliente) {
    Cliente* cliente = findCliente(idCliente);
    if (cliente) {
        cliente->setNomeCliente(nomeCliente);
    }
}

void Banco::setTelefoneCliente(int idCliente, string contacto) {
    Cliente* cliente = findCliente(idCliente);
    if (cliente) {
        cliente->setcontacto(contacto);
    }
}

void Banco::printBanco(int bancoID) {
    cout << "bancoId: " << bancoId << endl;
    cout << "Nome: " << nome << endl;
    cout << "----------" << endl;

    for (auto it = clientes.begin(); it != clientes.end(); ++it) {
        (*it).printDetalhado();
    }
}
