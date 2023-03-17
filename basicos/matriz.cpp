#include <new>
#include <iostream>

using namespace std;

int main(){
	int nlinhas, ncol;
	
	cin >> nlinhas;
	cin >> ncol;
	
	//aloca linhas
	int ** matriz = new int*[nlinhas];
	
	//aloca colunas
	for(int i=0; i < nlinhas; i++){
		matriz[i]= new int[ncol];
	}
	
	int k=0;
	for(int i = 0; i < nlinhas; i++){
		for(int j = 0; j < ncol; j++){
			
			matriz[i][j] = k;
			k++;
			cout << matriz[i][j] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}
