
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n;
    cout << "escreva um número de entrada: ";
    cin >> n;

    cout <<"valor lido: " << n << " incremento: " << n+1 << endl;
}

class Ponto {
public:
    float x;
    float y;

    Ponto(){}
    Ponto(float i, float j){ x=i; y=j; }
    ~Ponto(){}
};

class Quadrado{
    Ponto inicio;
    Ponto fim;

public:
    Quadrado(Ponto i, Ponto f){
        inicio = Ponto(i.x,i.y);
        fim = Ponto(f.x,f.y);
    }

    Quadrado(Ponto i, float autura, float largura):
        inicio(i.x,i.y),fim(i.x+largura,i.y+autura) {}

    void desenha(){ /*codigo*/ }
    void desenha(int cor){ /*codigo*/ }
};
