#include <iostream>
#include "mamifero.h"

using namespace std;

class Cachorro: public Mamifero{	
	private:
		string raca;
	public:
		Cachorro(){
			string raca = "Raca desconhecida";
			set_raca(raca);
		}
		Cachorro(string raca){
			set_raca(raca);
		}
		
		void set_raca(string raca){
			this->raca = raca;
		}
	
		string get_raca(){
			return raca;
		}
		
		void print(){
			cout << "\n\nCachorro:\nmeses: " << get_mg() << "\nterreno: " << get_terreno() << "\nraca: " << get_raca();
		}
		
		void latir(){
			cout << "\nAu au em " << get_raca() << "nes\n\n";
		}
		
};

int main(){
	Cachorro c1,c2;
	c1.set_mg(12.3);
	c1.set_raca("golden");
	c1.set_terreno("aereo");
	c1.print();
	c1.latir();
		
	c2.print();
	c2.latir();
	
}
