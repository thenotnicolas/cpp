#include <iostream>
#include "personagem.h"

using namespace std;

int main(){
	Personagem p1,p2,p3,p4;
	p1.set_nome("nicolas");
	p1.set_email("email do nicolas");
	p1.set_nivel(2);
	
	p2.set_email("email do nicolas");
	p2.set_nivel(3);
	
	p3.set_nome("nicolas1");
	
	p4.aumenta_nivel();
	
	cout << "Usuario1:\n" << "nome: " << p1.get_nome() << "\nemail: " << p1.get_email() << "\nnivel: " << p1.get_nivel() << "\n";
	cout << "\nUsuario2:\n" << "nome: " << p2.get_nome() << "\nemail: " << p2.get_email() << "\nnivel: " << p2.get_nivel() << "\n";
	cout << "\nUsuario3:\n" << "nome: " << p3.get_nome() << "\nemail: " << p3.get_email() << "\nnivel: " << p3.get_nivel() << "\n";
	cout << "\nUsuario4:\n" << "nome: " << p4.get_nome() << "\nemail: " << p4.get_email() << "\nnivel: " << p4.get_nivel() << "\n";	
}
