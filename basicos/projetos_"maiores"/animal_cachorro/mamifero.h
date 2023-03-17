#include <iostream>
#include "animal.h"
using namespace std;

class Mamifero: public Animal{	
	private:
		float meses_gestacao;
	public:
		Mamifero(){
			float meses_gestacao = 0;
			set_mg(meses_gestacao);
		}
		Mamifero(float meses_gestacao){
			set_mg(meses_gestacao);
		}
		
		void set_mg(float meses_gestacao){
			this->meses_gestacao = meses_gestacao;
		}
	
		float get_mg(){
			return meses_gestacao;
		}
};
