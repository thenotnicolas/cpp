#include <iostream>
#include "professor.h"

using namespace std;

int main(){
	Professor p1,p2,p3,p4;
	p1.set_nome("nicolas");
	p1.set_cpf(1);
	p1.set_salario(2.99);
	
	p2.set_nome("nicolas1");
	
	p3.set_cpf(2);
	p3.set_salario(3);
	
	p4.set_salario(4.99);
	
	cout << "\nProfessor:\nnome: " << p1.get_nome() << "\nCPF: " << p1.get_cpf() << "\nsalario: " << p1.get_salario() << "\n";
	cout << "\nProfessor:\nnome: " << p2.get_nome() << "\nCPF: " << p2.get_cpf() << "\nsalario: " << p2.get_salario() << "\n";
	cout << "\nProfessor:\nnome: " << p3.get_nome() << "\nCPF: " << p3.get_cpf() << "\nsalario: " << p3.get_salario() << "\n";
	cout << "\nProfessor:\nnome: " << p4.get_nome() << "\nCPF: " << p4.get_cpf() << "\nsalario: " << p4.get_salario() << "\n";
	
	return 0;
}
