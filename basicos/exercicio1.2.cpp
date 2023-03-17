#include <iostream>
using namespace std;

class Cachorro{
	public:
		string raca="viralatinha";
	
	Cachorro(){
		cout << "Cachorro setado com raca " << raca << "\n";
	}
		
	Cachorro(string racaNova){
		raca = racaNova;
		cout << "Cachorro setado com raca " << raca << "\n";
	}
	
	void latido(){
		printf("au au");
	}
};

int main(){
	string raca1;
	cout << "Digite a raca do cachorro1: ";
	cin.sync();
	getline(cin,raca1);
	
	Cachorro cao1(raca1);
	
	Cachorro cao2;
	cao2.latido();
	return 0;
}
