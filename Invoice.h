#ifndef INVOICE_H
#define INVOICE_H

#include <string>
using std::string;

class Invoice
{
	public:
		//construtor
		Invoice(int, string, int, float);
		
		//metodos
		void setInicialisaDados(int, string, int, float);
		int getNumeroPedido();
		string getDescricao();
		int getQuantidade();
		float getPreco();
		void setInvoiceAmount(int, float);
		float getInvoiceAmount();
		
	//membros de dados da classe	
	private:
		int numeroDoPedido;
		int quantidade;
		float preco;
		float valorTotal;
		string descricao;
};

#endif
