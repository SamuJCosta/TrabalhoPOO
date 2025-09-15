#include <iostream>
#include "Banco.h"

int main() {
    Banco banco(343, "Banco Brigantino");

    banco.addCliente("Bruno Maga", "939514343");
    banco.addOrdemCliente(17.93, -1200.00, 1);
    banco.addOrdemCliente(303.62, 6.00, 1);

    banco.addCliente("Ana Borges", "929345411");
    banco.addOrdemCliente(0.00, 900.00, 2);
    banco.addPrazoCliente(6000.00, 0.05, 2);

    banco.printBanco(343);

    return 0;
}
