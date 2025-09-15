# Banco Brigantino – Trabalho Prático de POO

Este projeto foi desenvolvido no âmbito da unidade curricular **Programação Orientada por Objetos (POO)**.  
O objetivo é implementar uma aplicação de consola em **C++** que permita gerir clientes e contas bancárias de uma nova agência, o **Banco Brigantino**.

## 📌 Objetivos do trabalho
- Modelar o problema recorrendo a **classes** e **herança**.
- Implementar uma aplicação modular em **C++** com ficheiros `.h` e `.cpp`.
- Gerir **clientes** e **contas bancárias** de dois tipos:
  - **Conta à Ordem** – com saldo e plafond (limite de descoberto).
  - **Conta a Prazo** – com saldo e taxa de juro.
- Gerar automaticamente:
  - **IDs** incrementais para clientes e contas.
  - **NIB** único para cada conta, com função de validação.
- Permitir operações básicas:
  - **Depósitos** em ambas as contas.
  - **Levantamentos** apenas em contas à ordem (respeitando o plafond).
- Implementar controlo de erros (ex.: impedir levantamentos que ultrapassem o plafond ou operações em contas inexistentes).

---

## 📂 Estrutura do Projeto
O projeto está dividido em classes, cada uma com declaração (`.h`) e implementação (`.cpp`):

- `Banco.h / Banco.cpp` – Gere os clientes, criação de contas e impressão da informação do banco.
- `Cliente.h / Cliente.cpp` – Representa um cliente, contendo dados pessoais e as suas contas.
- `Conta.h / Conta.cpp` – Classe base abstrata para contas bancárias (com ID, NIB e saldo).
- `Ordem.h / Ordem.cpp` – Classe derivada de `Conta` que implementa contas à ordem (com plafond e levantamentos).
- `Prazo.h / Prazo.cpp` – Classe derivada de `Conta` que implementa contas a prazo (com taxa de juro).
- `Colecao.h` – Template fornecido para gerir coleções de objetos (não pode ser alterado).
- `main.cpp` – Programa principal que cria um banco, adiciona clientes/contas e mostra o resultado.

---

## ⚙️ Funcionalidades Implementadas
- Adicionar novos clientes ao banco (com nome e contacto).
- Criar **contas à ordem** e **contas a prazo** associadas a clientes.
- Gerar e validar automaticamente **NIBs**.
- Realizar operações de:
  - **Depósito** em qualquer conta.
  - **Levantamento** em contas à ordem (respeitando o plafond).
- Listar todos os clientes e respetivas contas com detalhe:
  - IDs
  - Nomes e contactos
  - Tipo de conta
  - Saldo e condições associadas (plafond ou taxa de juro)

---

## ▶️ Como compilar e executar
Este projeto foi desenvolvido em **Visual Studio** (2015 ou posterior), mas pode ser compilado em qualquer ambiente com suporte a C++11 ou superior.

### Compilação (Linux/macOS com g++)
```bash
g++ -std=c++11 -o trabPOO main.cpp Banco.cpp Cliente.cpp Conta.cpp Ordem.cpp Prazo.cpp
