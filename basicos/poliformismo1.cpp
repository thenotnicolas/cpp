#include <iostream>
using namespace std;

class Animal{
	public:
		void emitir_som(){}
};

class Cachorro: public Animal{
	public:
		void emitir_som(){
			cout << "au au\n";
		}
};

class Gato: public Animal{
	public:
		void emitirSom(){
			cout << "miau miau\n";
		}
};

int main(){
	Cachorro c1;
	c1.emitir_som();
	
	Gato g1;
	g1.emitirSom();
	return 0;
}
