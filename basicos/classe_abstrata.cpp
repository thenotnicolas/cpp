#include <iostream>

using namespace std;

class FormaGeometrica{
	public:
		virtual int Area() = 0;
		
		void set_largura(int largura){
			this->largura = largura;
		}
		
		void set_altura(int altura){
			this->altura = altura;
		}
	
	protected:
		int largura;
		int altura;
};

class Retangulo: public FormaGeometrica{
	public:
		int Area(){
			return (largura * altura);
		}
};

class Triangulo: public FormaGeometrica{
	public:
		int Area(){
			return (largura * altura)/2;
		}
};

int main(){
	Retangulo R;
	Triangulo T;
	
	R.set_altura(10);
	R.set_largura(5);
	
	T.set_altura(8);
	T.set_largura(20);
	
	cout << "Area do retangulo: " << R.Area() << endl;
	cout << "Area do triangulo: " << T.Area() << endl;
	
	return 0;
}

