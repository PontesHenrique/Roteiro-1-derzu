#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <string>

using std::string;

class Empregado
{
	public:
		//construtor
		Empregado(string, string, float);
		
		//metodos
		void setInicialisaDados(string, string, float);
		string getNome();
		string getSobreNome();
		float getSalario();
		float getSalarioAnual();
		void setReajustaSalario(float, int);
		
		float getSalarioReajustado();
		float getSalarioAnuallReajustado();
		
	private:
		string nome;
		string sobrenome;
		float salario;
		float salarioReajustado;
};

#endif
