#include <iostream>
#include "fruta.h"

using namespace std;

int main(){
	Fruta fruta1,fruta2,fruta3,fruta4;
	
	fruta1.set_nome("Maca");
	fruta1.set_preco(12.99);
	
	fruta2.set_nome("Melao");
	
	fruta3.set_preco(0);
	
	fruta1.print();
	fruta2.print();
	fruta3.print();
	fruta4.print();
	
	return 0;
}
