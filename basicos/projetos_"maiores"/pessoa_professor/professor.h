#include <iostream>
#include "pessoa.h"

using namespace std;

class Professor: public Pessoa{
	private:
		float salario;
	public:
		Professor(){
			string nome = "nome desconhecido";
			int cpf = 0;
			float salario = 0;
			set_nome(nome);
			set_cpf(cpf);
			set_salario(salario);
		}
		Professor(string nome,int cpf,float salario){
			set_nome(nome);
			set_cpf(cpf);
			set_salario(salario);
		}
		
		float get_salario(){
			return salario;
		}
		
		void set_salario(float salario){
			this->salario = salario;
		}
};
