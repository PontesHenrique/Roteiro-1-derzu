#ifndef PESSOA_H
#define PESSOA_H

#include <string>

using std::string;

class Pessoa
{
	public:
		//construtor
		Pessoa(string, int, string);
		Pessoa1(string);
		
		//metodos
		void setInicialisaDados(string, int, string);
		void setAlteraNome(string);
		void setAlteraTelefone(string);
		void setAlteraIdade(int);
		string getNome();
		string getTelefone();
		int getIdade();
		string getNomeAlterado();
		string getTelefoneAlterado();
		int getIdadeAlterado();
		
		
	
	//membros de dados da classe
	private:
		string nome;
		int idade;
		string telefone;
};

#endif
