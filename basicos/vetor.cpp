#include <new>
#include <iostream>

using namespace std;

int main(){
	
	//tamanho vetor
	int tam;
	cout << "Digite o tamanho do vetor: ";
	cin >> tam;
	
	//cria��o vetor
	string *vetor = new string [tam];
	
	cout << "Digite uma palavra com " << tam << " letras: ";
	cin >> *vetor;
	
	//aparece o endere�o
	cout << vetor << "\n";
	
	//aparece o conteudo
	cout << *vetor << "\n";
	
	return 0;
}
