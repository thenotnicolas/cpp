#include <iostream>
using namespace std;

class Pessoa{
	public:
		string nome;
		int idade = 0;
	
	Pessoa(){
		printf("Pessoa criada sem nome e sem idade \n");
	}
		
	Pessoa(string nomeNovo){
		printf("Pessoa criada com nome \n");
		nome = nomeNovo;
	}
	
	Pessoa(int idadeNova){
		printf("Pessoa criada com idade \n");
		idade = idadeNova;
	}
	
	Pessoa(string nomeNovo, int idadeNova){
		printf("Pessoa criada com nome e idade \n");
		nome = nomeNovo;
		idade = idadeNova;
	}
};

int main(){
	Pessoa pessoa1;
	cout << "Pessoa1: " << pessoa1.nome << "," << pessoa1.idade << "\n";
	
	Pessoa pessoa2("John");
	cout << "Pessoa2: " << pessoa1.nome << "," << pessoa1.idade << "\n";
	
	Pessoa pessoa3(25);
	cout << "Pessoa3: " << pessoa1.nome << "," << pessoa1.idade << "\n";
	
	Pessoa pessoa4("Jonas",25);
	cout << "Pessoa4: " << pessoa1.nome << "," << pessoa1.idade << "\n";
	
	return 0;
}
