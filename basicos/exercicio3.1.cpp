#include <iostream>

using namespace std;

class Idioma{
	public:
		void saudar(){}
};

class Ingles: public Idioma{
	public:
		void saudar(){
			printf("Hello\n");
		}
};

class Espanhol: public Idioma{
	public:
		void saudar(){
			printf("Hola\n");
		}
};

class Portugues: public Idioma{
	public:
		void saudar(){
			printf("Ola\n");
		}
};

int main(){
	Ingles i1;
	Espanhol e1;
	Portugues p1;
	
	i1.saudar();
	e1.saudar();
	p1.saudar();
}
