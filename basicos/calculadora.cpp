#include <iostream>

using namespace std;

class Calculadora{
	public:
		int soma(int n1,int n2,int n3){
			return n1+n2+n3;
		}
		
		int soma(int n1,int n2){
			return n1+n2;
		}
	
};

int main(){
	int n1=1, n2=2, n3=3;
	Calculadora c1,c2;
	
	cout << "\nTotal: " << c1.soma(n1,n2);
	
	cout << "\nTotal: " <<
	 c2.soma(n1,n2,n3);
	
	return 0;
}
