#include <iostream>

using namespace std;

class Usuario{	
	private:
		string nome,email;
	public:
		
		Usuario(){
			string nome = "nome desconhecido";
			string email = "email desconhecido";
			set_nome(nome);
			set_email(email);
		}
		
		Usuario(string nome){
			set_nome(nome);
		}
		
		/*Usuario(string email){
			set_email(email);
		}*/
		
		Usuario(string nome,string email){
			set_nome(nome);
			set_email(email);
		}
		
		
		void set_nome(string nome){
			this->nome = nome;
		}
	
		string get_nome(){
			return nome;
		}
		
		void set_email(string email){
			this->email = email;
		}
	
		string get_email(){
			return email;
		}
};
