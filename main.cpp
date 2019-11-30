#include <iostream>
#include <string>
#include <ostream>   
#include <fstream> 
#include <ctime>
#include <cstdlib>
#include <iomanip>

#include "Data.h"
#include "Invoice.h"
#include "Empregado.h"
#include "Pessoa.h"

using namespace std;

int main(int argc, char** argv) {

 cout << "===================================	Questao 01	===========================================\n";
	
	int diaDigitado, mesDigitado, anoDigitado, avancarData;
	
	cout << "Digite o dia: ";
	cin >> diaDigitado;
	cout << "Digite o mes: ";
	cin >> mesDigitado;
	cout << "Digite o ano: ";
	cin >> anoDigitado;
	
	Data dataDigitada(diaDigitado, mesDigitado, anoDigitado);//chama o construtor
	
	cout << "\nData Valida: " << dataDigitada.getDia() << "/" << dataDigitada.getMes() << "/" << dataDigitada.getAno();
	
	do {
		cout << "\n\nDigite quantos dias deseja avancar a data: ";
		cin >> avancarData;
	}while(avancarData > 30 || avancarData < 1);

	dataDigitada.setAvancaData(avancarData);
	
	cout << "\nData Futura: " << dataDigitada.getDia() << "/" << dataDigitada.getMes() << "/" << dataDigitada.getAno(); 
	

/*cout << "\n===================================	Questao 02	===========================================\n";

	int numeroPedidoDigitado, quantidadeDigitada;
	float precoDigitado;
	string descricaoDigitada;
	
	cout << "Digite a descricao do produto: ";
	getline(cin, descricaoDigitada);
	cout << "Digite o numero do pedido: ";
	cin >> numeroPedidoDigitado;
	cout << "Digite a quantidade: ";
	cin >> quantidadeDigitada;
	cout << "Digite o preco: ";
	cin >> precoDigitado;

	Invoice dadosDigitados(numeroPedidoDigitado, descricaoDigitada, quantidadeDigitada, precoDigitado);//chama o construtor
	dadosDigitados.setInvoiceAmount(dadosDigitados.getQuantidade(), dadosDigitados.getPreco());
	
	cout << "\nNumero do Pedido: " << dadosDigitados.getNumeroPedido() << "\nQuantidade: " 
		<< dadosDigitados.getQuantidade() << "\nPreco Unitario R$ " << dadosDigitados.getPreco() 
		<< "\nDescricao: " << dadosDigitados.getDescricao() << "\nValor Final da Nota R$ " << setprecision(4)
		<< dadosDigitados.getInvoiceAmount() << endl; */
		

/*cout << "\n===================================	Questao 03	===========================================\n";

	float salarioDigitado;
	string nomeDigitado, sobreNomeDigitado;
	int reajuste;
	
	cout << "Digite o seu Nome: ";
	getline(cin, nomeDigitado);
	cout << "Digite o seu Sobrenome: ";
	getline(cin, sobreNomeDigitado);
	cout << "Digite o seu Salario R$ ";
	cin >> salarioDigitado;
	
	Empregado dadosEmpregado(nomeDigitado, sobreNomeDigitado, salarioDigitado);//chama o construtor
	
	cout << "\nNome Completo: " << dadosEmpregado.getNome() << " " << dadosEmpregado.getSobreNome()
		<< "\nSalario Mensal de R$ " << dadosEmpregado.getSalario()
		<< "\nSalario Anual R$ "<< dadosEmpregado.getSalarioAnual() << endl;
		
	cout << "\nDigite um Reajuste: ";
	cin >> reajuste;
	
	dadosEmpregado.setReajustaSalario(dadosEmpregado.getSalario(), reajuste);
	
	cout << "\nNome Completo: " << dadosEmpregado.getNome() << " " << dadosEmpregado.getSobreNome()
		<< "\nSalario Mensal Reajustado R$ " << dadosEmpregado.getSalarioReajustado()
		<<  "\nSalario Anual Reajustado R$ "<< dadosEmpregado.getSalarioAnuallReajustado() << endl; */
		
		
/*cout << "\n===================================	Questao 04	===========================================\n";

	string telefoneDigitado, nomeDigitado;
	int idadeDigitada;
	
	cout << "Digite o seu Nome: ";
	getline(cin, nomeDigitado);
	cout << "Digite o seu Telefone: ";
	getline(cin, telefoneDigitado);
	cout << "Digite sua idade: ";
	cin >> idadeDigitada;
	
	
	Pessoa dadosPessoa(nomeDigitado, idadeDigitada, telefoneDigitado);//chama o construtor
	
	cout << "\nNome: " << dadosPessoa.getNome() << "\nIdade: " << dadosPessoa.getIdade()
		<< "\nTelefone: " << dadosPessoa.getTelefone();
		
	fflush(stdin);
		
	cout << "\n\nAltere o seu Nome: ";
	getline(cin, nomeDigitado);
	cout << "Altere o seu Telefone: ";
	getline(cin, telefoneDigitado);
	cout << "Altere sua idade: ";
	cin >> idadeDigitada;
	
	dadosPessoa.Pessoa1(nomeDigitado);
	dadosPessoa.setAlteraIdade(idadeDigitada);
	dadosPessoa.setAlteraTelefone(telefoneDigitado);
	
	cout << "\nNome: " << dadosPessoa.getNome() << "\nIdade: " << dadosPessoa.getIdadeAlterado()
		<< "\nTelefone: " << dadosPessoa.getTelefoneAlterado(); */
		
    
	return 0;
}
