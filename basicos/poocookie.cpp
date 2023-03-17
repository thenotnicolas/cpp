#include <iostream>
#include <ios>
#include <limits>
using namespace std;

class Cookie {
	public:
		float preco;
		string sabor;
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
	
	cout << "\ncookie sabor: " << cookie1.sabor;
	cout << "\ncusta: R$" << cookie1.preco;
}
