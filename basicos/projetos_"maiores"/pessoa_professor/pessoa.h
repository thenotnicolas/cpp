#include <iostream>

using namespace std;

class Pessoa{
	private:
		string nome="nome desconhecido";
		long int cpf = 0;
	
	public:
		
		void set_nome(string nome){
			this->nome = nome;
		}
		
		string get_nome(){
			return nome;
		}
		
		void set_cpf(long int cpf){
			this->cpf = cpf;
		}
		
		long int get_cpf(){
			return cpf;
		}
};
