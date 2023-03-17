#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class Cookie {
	public:
		float preco;
		string sabor;
		string formato;
	Cookie(){
		printf("Cookie criado com sucesso\n\n");
		formato = "redondo";
	}
};

int main(){
	Cookie cookie1;
	
	cout << "Digite o preco o cookie: ";
	cin >> cookie1.preco;
	
	cout << "Digite o sabor do cookie: ";
	
	//limpa buffer
	cin.sync();
	
	//le o sabor msm que tenha espaços
	getline(cin,cookie1.sabor);
	
	cout << "Digite o formato do cookie: ";
	
	//limpa buffer
	cin.sync();
	
	//le o sabor msm que tenha espaços
	getline(cin,cookie1.formato);
	
	cout << "\ncookie sabor: " << cookie1.sabor;
	cout << "\ncusta: R$" << cookie1.preco;
	cout << "\nformato: " << cookie1.formato;
}
