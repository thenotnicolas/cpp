#include <iostream>

using namespace std;

class Eletronico{
	private:
		string marca;
	public:
		string get_marca(){
			return marca;
		}
		void set_marca(string marca){
			this->marca = marca;
		}
	protected:
		void souEletronico(){
			printf("Sou eletronico!\n");
		}
};
