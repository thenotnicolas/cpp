#include <iostream>

using namespace std;

class Menu{
	public:
		void mostrar_menu(){}
};

class Adm: public Menu{
	public:
		void mostrar_menu(){
			cout << "-----Menu Adm-----\n";
			cout << "1-Comprar\n";
			cout << "2-Vender\n";
			cout << "3-Cadastrar Produto\n";
			cout << "4-Excluir Produto\n";
			cout << "5-Sair\n\n";
		}
};

class Cliente: public Menu{
	public:
		void mostrar_menu(){
			cout << "-----Menu Cliente-----\n";
			cout << "1-Comprar\n";
			cout << "2-Vender\n";
			cout << "3-Sair\n\n";
		}
};

int main(){
	Cliente c1;
	c1.mostrar_menu();
	
	Adm a1;
	a1.mostrar_menu();
	
	return 0;
}
