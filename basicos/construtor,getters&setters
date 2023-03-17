#include <iostream>
using namespace std;

class Celular{
	private:
		string marca;
		float preco;
	public:
			
		//construtores
		Celular(){
			string marca="Nokia Tijolao";
			float preco=1.99;
			set_marca(marca);
			set_preco(preco);
		}
		Celular(string marca){
			set_marca(marca);
		}
		Celular(float preco){
			set_preco(preco);
		}
		Celular(string marca, float preco){
			set_marca(marca);
			set_preco(preco);
		}
		
		//setters
		void set_marca(string nova_marca){
			marca = nova_marca;
		}
		void set_preco(float novo_preco){
			preco = novo_preco;
		}
		
		//getters
		string get_marca(){
			return marca;
		}
		float get_preco(){
			return preco;
		}
		
		//print
		void print(){
			cout << "Celular:\n\nMarca: "<< get_marca() << "\nPreco: " << get_preco() << "\n\n";
		}
};

int main(){
	Celular cel1,cel2,cel3,cel4;
	
	cel1.set_marca("Apple");
	cel1.set_preco(12000.99);
	
	cel2.set_marca("Paraguaizinho");
	
	cel3.set_preco(0);
	
	cel1.print();
	cel2.print();
	cel3.print();
	cel4.print();
	
	return 0;
}
