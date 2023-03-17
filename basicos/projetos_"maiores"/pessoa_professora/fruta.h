#include <iostream>
using namespace std;

class Fruta{
	private:
		string nome;
		float preco;
	public:
			
		//construtores
		Fruta(){
			string nome="Fruta Desconhecida";
			float preco=1.99;
			set_nome(nome);
			set_preco(preco);
		}
		Fruta(string nome){
			set_nome(nome);
		}
		Fruta(float preco){
			set_preco(preco);
		}
		Fruta(string nome, float preco){
			set_nome(nome);
			set_preco(preco);
		}
		
		//setters
		void set_nome(string novo_nome){
			nome = novo_nome;
		}
		void set_preco(float novo_preco){
			preco = novo_preco;
		}
		
		//getters
		string get_nome(){
			return nome;
		}
		float get_preco(){
			return preco;
		}
		
		//print
		void print(){
			cout << "Fruta:\n\nNome: "<< get_nome() << "\nPreco: " << get_preco() << "\n\n";
		}
};
