#include <iostream>

using namespace std;

class Animal{	
	private:
		string terreno;
	public:
		Animal(){
			string terreno = "Terreno Desconhecido";
			set_terreno(terreno);
		}
		Animal(string terreno){
			set_terreno(terreno);
		}
		
		void set_terreno(string terreno){
			this->terreno = terreno;
		}
	
		string get_terreno(){
			return terreno;
		}
};
