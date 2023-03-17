#include <iostream>

using namespace std;

class Calculadora{
	public:
		float x;
		float y;
	
	float soma(int x, int y){
		return x + y;
	}
	
	float subtracao(int x, int y){
		return x - y;
	}
	
	float multiplicacao(int x, int y){
		return x*y;
	}
	
	float divisao(int x, int y){
		return x/y;
	}
};

int main(){
	float x = 10, y = 20,soma,subtracao,multiplicacao,divisao;
	Calculadora minha_calculadora;
	
	
	soma = minha_calculadora.soma(x,y);
	subtracao = minha_calculadora.subtracao(x,y);
	multiplicacao = minha_calculadora.multiplicacao(x,y);
	divisao = minha_calculadora.divisao(x,y);
	
	cout << "operacoes:\nsoma: " << soma << "\nsubtracao: " << subtracao << "\nmultiplicacao: " << multiplicacao << "\ndivisao: " << divisao;
	
	return 0;
}
