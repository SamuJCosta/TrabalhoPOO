# Banco Brigantino � Trabalho Pr�tico de POO

Este projeto foi desenvolvido no �mbito da unidade curricular **Programa��o Orientada por Objetos (POO)**.  
O objetivo � implementar uma aplica��o de consola em **C++** que permita gerir clientes e contas banc�rias de uma nova ag�ncia, o **Banco Brigantino**.

## ?? Objetivos do trabalho
- Modelar o problema recorrendo a **classes** e **heran�a**.
- Implementar uma aplica��o modular em **C++** com ficheiros `.h` e `.cpp`.
- Gerir **clientes** e **contas banc�rias** de dois tipos:
  - **Conta � Ordem** � com saldo e plafond (limite de descoberto).
  - **Conta a Prazo** � com saldo e taxa de juro.
- Gerar automaticamente:
  - **IDs** incrementais para clientes e contas.
  - **NIB** �nico para cada conta, com fun��o de valida��o.
- Permitir opera��es b�sicas:
  - **Dep�sitos** em ambas as contas.
  - **Levantamentos** apenas em contas � ordem (respeitando o plafond).
- Implementar controlo de erros (ex.: impedir levantamentos que ultrapassem o plafond ou opera��es em contas inexistentes).

---

## ?? Estrutura do Projeto
O projeto est� dividido em classes, cada uma com declara��o (`.h`) e implementa��o (`.cpp`):

- `Banco.h / Banco.cpp` � Gere os clientes, cria��o de contas e impress�o da informa��o do banco.
- `Cliente.h / Cliente.cpp` � Representa um cliente, contendo dados pessoais e as suas contas.
- `Conta.h / Conta.cpp` � Classe base abstrata para contas banc�rias (com ID, NIB e saldo).
- `Ordem.h / Ordem.cpp` � Classe derivada de `Conta` que implementa contas � ordem (com plafond e levantamentos).
- `Prazo.h / Prazo.cpp` � Classe derivada de `Conta` que implementa contas a prazo (com taxa de juro).
- `Colecao.h` � Template fornecido para gerir cole��es de objetos (n�o pode ser alterado).
- `main.cpp` � Programa principal que cria um banco, adiciona clientes/contas e mostra o resultado.

---

## ?? Funcionalidades Implementadas
- Adicionar novos clientes ao banco (com nome e contacto).
- Criar **contas � ordem** e **contas a prazo** associadas a clientes.
- Gerar e validar automaticamente **NIBs**.
- Realizar opera��es de:
  - **Dep�sito** em qualquer conta.
  - **Levantamento** em contas � ordem (respeitando o plafond).
- Listar todos os clientes e respetivas contas com detalhe:
  - IDs
  - Nomes e contactos
  - Tipo de conta
  - Saldo e condi��es associadas (plafond ou taxa de juro)

---

## ?? Como compilar e executar
Este projeto foi desenvolvido em **Visual Studio** (2015 ou posterior), mas pode ser compilado em qualquer ambiente com suporte a C++11 ou superior.
