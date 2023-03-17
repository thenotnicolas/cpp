#include <iostream>
using namespace std;

class Pessoa {
	private:
		string nome;
	public:
		string getNome(){
			return nome;
		}
		void setNome(string novo_nome){
			nome = novo_nome;
		}
};

int main(){
	Pessoa pessoa1;
	pessoa1.setNome("Nicolas");
	cout << pessoa1.getNome() << "\n";
	return 0;
}
