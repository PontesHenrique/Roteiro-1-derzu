#include <iostream>

#include "Empregado.h"
 
using std::string;

Empregado::Empregado(string nomeDigitado, string sobreNomeDigitado, float salarioDigitado)
{
	setInicialisaDados( nomeDigitado, sobreNomeDigitado, salarioDigitado);
}

void Empregado::setInicialisaDados(string nomeDigitado, string sobreNomeDigitado, float salarioDigitado)
{
	nome = nomeDigitado;
	sobrenome = sobreNomeDigitado;
	salario = salarioDigitado;
}

string Empregado::getNome()
{
	return nome;
}
string Empregado::getSobreNome()
{
	return sobrenome;
}
float Empregado::getSalario()
{
	return salario;
}

float Empregado::getSalarioAnual()
{
	return salario * 12;
}

void Empregado::setReajustaSalario(float salario, int reajuste)
{
	salarioReajustado = ((salario * reajuste)/100) + salario;
}

float Empregado::getSalarioReajustado()
{
	return salarioReajustado;
}

float Empregado::getSalarioAnuallReajustado()
{
	return salarioReajustado * 12;
}























