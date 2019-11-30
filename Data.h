#ifndef DATA_H
#define DATA_H

class Data
{
	public:
		
		//construtor da classe com três parâmewtros
		Data(int, int, int);
		
		//metodos da classe Data
		void setVerificaData(int, int, int);
		int getDia();
		int getMes();
		int getAno();
		void setAvancaData(int);
			
	//membros de dados da classe
	private:
		int dia;
		int mes;
		int ano;
};

#endif
