#include <iostream>

#include "Invoice.h"

using std::string;

//construtor da classe invoice
Invoice::Invoice(int numeroPedidoDigitado, string descricaoDigitada, int quantidadeDigitada, float precoDigitado)
{
	setInicialisaDados(numeroPedidoDigitado, descricaoDigitada, quantidadeDigitada, precoDigitado);
}

void Invoice::setInicialisaDados(int numeroPedidoDigitado, string descricaoDigitada, int quantidadeDigitada, float precoDigitado)
{
	if(quantidadeDigitada < 0){
		quantidade = 0;
	}else{
		quantidade = quantidadeDigitada;
	}
	if(precoDigitado < 0.0){
		preco = 0.0;
	}else{
		preco = precoDigitado;
	}
	numeroDoPedido = numeroPedidoDigitado;
	descricao = descricaoDigitada;
}

int Invoice::getNumeroPedido()
{
	return numeroDoPedido;
}
string Invoice::getDescricao()
{
	return descricao;
}
int Invoice::getQuantidade()
{
	return quantidade;
}
float Invoice::getPreco()
{
	return preco;
}

void Invoice::setInvoiceAmount(int quantidade, float preco)
{
	valorTotal =  preco * (float)quantidade;
}

float Invoice::getInvoiceAmount()
{
	return valorTotal;
}
