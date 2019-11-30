#include <iostream>
#include <stdio.h>
#include "controlePagamento.h"
#include "pagamentos.h"

using namespace std;

int main(){
	
    controlePagamento *controlPag = new controlePagamento();

    controlPag->setPagamentos("Luis Henrique", 500);
    controlPag->setPagamentos("Luis Henrique", 1500);
    controlPag->setPagamentos("Luis Henrique", 2000);

    cout << "Total pago: " << controlPag->calculaTotalDePagamentos() << endl;

    if(controlPag->existePagamentoParaFuncionario("Luis Henrique"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    if(controlPag->existePagamentoParaFuncionario("Davi Pontes"))
        cout << "Existe pagamento." << endl;
    else
        cout << "Nao existe pagamento." << endl;

    delete(controlPag);
    
    return 0;
}
