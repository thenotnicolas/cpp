#include <iostream>
using namespace std;

class Coxinha{
	public:
		string sabor = "frango";
	
	Coxinha(string Novosabor){
		printf("Sabor setado com sucesso! \n");
		sabor = Novosabor;
	}
};

int main(){
	string sabor;
	cout << "Digite o sabor da coxinha: ";
	
	//limpa buffer
	cin.sync();
	//le o sabor msm que tenha espaços
	getline(cin,sabor);
	//cin >> sabor;
	
	Coxinha coxinha1(sabor);
	
	cout << "Coxinha1: " << coxinha1.sabor << "\n";
	return 0;
}
