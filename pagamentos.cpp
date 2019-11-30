#include "pagamentos.h"

pagamentos::pagamentos()
{
    valorPagamento = 0;
    nomeFuncionario = " ";
}

void pagamentos::setNomeFuncionario(std::string nome){
    nomeFuncionario = nome;
}

std::string pagamentos::getNomeFuncionario(){
    return nomeFuncionario;
}

void pagamentos::setValorPagamento(double valor){
    if(valor > 0)
        valorPagamento = valor;
    else
        valorPagamento = 0;
}

double pagamentos::getValorPagamento(){
    return valorPagamento;
}


