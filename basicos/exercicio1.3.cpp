#include <iostream>
using namespace std;

class Pessoa {
	public:
		string nome;
		int idade;
		float salario;
		
		Pessoa(string nomeNovo, int idadeNova, float salario_novo){
			nome = nomeNovo;
			idade = idadeNova;
			salario = salario_novo;
		}
	
		void print(){
			cout << nome << " : \n idade: " << idade << "\n salario: " << salario;
		}
};

int main(){
	string nome;
	int idade;
	float salario;
	
	Pessoa pessoa1("nicolas",27,2500);
	pessoa1.print();
	return 0;
}
