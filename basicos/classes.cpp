#include <iostream>
using namespace std;

class Pessoa{
	public:
		int idade;
		string nome;
};

int main(){
	Pessoa pessoa1;
	
	pessoa1.idade = 15;
	pessoa1.nome = "John";
	
	cout << pessoa1.nome << " tem " << pessoa1.idade << " anos";
	
	return 0;
}
