#include <iostream>
using namespace std;

#include <ios>
#include <limits>

int main(){
	char frase[80];
	cout << "Digite uma frase: ";
	
	//limpeza do buffer
	cin.sync();
	
	//le a frase mesmo que tenha espaço
	cin.getline(frase,80);
	
	cout << "\n Frase: " << frase << "\n";
	
	//le DE NOVO, apos limpar o buffer
	cin.sync();
	cin.getline(frase,80);
	cout << "\n Nova Frase: " << frase << "\n";
	
	return 0;
}
