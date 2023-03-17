#include <iostream>
#include "usuario.h"

using namespace std;

class Personagem: public Usuario{	
	private:
		int nivel;
	public:
		
		Personagem(){
			int nivel = 0;
			set_nivel(nivel);
		}
		
		Personagem(int nivel){
			set_nivel(nivel);
		}		
		
		void set_nivel(int nivel){
			this->nivel = nivel;
		}
	
		int get_nivel(){
			return nivel;
		}
		
		void aumenta_nivel(){
			nivel++;
		}
	
};
