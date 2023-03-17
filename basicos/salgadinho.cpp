#include <iostream>
using namespace std;

class Salgadinho{
	private:
		string sabor;
	public:
		Salgadinho(string sabor){
			set_sabor(sabor);
		}
		string get_sabor(){
			return sabor;
		}
		void set_sabor(string sabor){
			//atributo classe recebee valor do parametro
			this->sabor = sabor;
		}
		void print(){
			cout << "Salgadinho:\nsabor: " << get_sabor() << "\n";
		}
};

int main(){
	Salgadinho s("picante");
	s.print();
}
