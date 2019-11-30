#include <iostream>

#include "Pessoa.h"
 
using std::string;

Pessoa::Pessoa(string nomeDigitado, int idadeDigitada, string telefoneDigitado)
{
	setInicialisaDados(nomeDigitado, idadeDigitada, telefoneDigitado);
}

Pessoa::Pessoa1(string nomeDigitado)
{
	setAlteraNome(nomeDigitado);
}

void Pessoa::setAlteraNome(string nomeDigitado)
{
	nome = nomeDigitado;
}

void Pessoa::setAlteraTelefone(string telefoneDigitado)
{
	telefone = telefoneDigitado;
}

void Pessoa::setAlteraIdade(int idadeDigitada)
{
	idade = idadeDigitada;
}

string Pessoa::getNomeAlterado()
{
	return nome;
}

string Pessoa::getTelefoneAlterado()
{
	return telefone;
}
int Pessoa::getIdadeAlterado()
{
	return idade;
}

void Pessoa::setInicialisaDados(string nomeDigitado, int idadeDigitada, string telefoneDigitado)
{
	nome = nomeDigitado;
	idade = idadeDigitada;
	telefone = telefoneDigitado;
}

string Pessoa::getNome()
{
	return nome;
}

string Pessoa::getTelefone()
{
	return telefone;
}

int Pessoa::getIdade()
{
	return idade;
}
