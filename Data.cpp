#include <iostream>
#include "Data.h"

using namespace std;

//construtor da classe Data
Data::Data(int diaDigitado, int mesDigitado, int anoDigitado)
{
	setVerificaData(diaDigitado, mesDigitado, anoDigitado);
}

//metodos da classe Data
void Data::setVerificaData(int diaDigitado, int mesDigitado, int anoDigitado)
{
	if(diaDigitado < 1 || diaDigitado > 30){
		cout << "Dia Invalido ";
		dia = 1;
	}else{
		dia = diaDigitado;
	}
	
	if(mesDigitado < 1 || mesDigitado > 12){
		cout << "\nMes Invalido ";
		mes = 1;
	}else{
		mes = mesDigitado;
	}
	
	if(anoDigitado < 0){
		cout << "\nAno Invalido";
		ano = 2019;
	}else{
		ano = anoDigitado;
	}
}

int Data::getDia( )
{
	return dia;	
}

int Data::getMes( )
{
	return mes;	
}

int Data::getAno( )
{
	return ano;	
}

void Data::setAvancaData(int avancarData)
{
	int restoMes;
	
	if(avancarData + dia > 30){
		restoMes = (avancarData + dia) - 30;
		dia = restoMes;
		mes += 1;
		if(mes > 12){
			mes = 1;
			ano++;
		}
	}else{
		dia += avancarData;
	}
}
