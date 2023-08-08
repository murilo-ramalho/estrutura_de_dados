#include <iostream>

using namespace std;

int main(){

    string veiculo = "carro";
    string *apontador;

    apontador=&veiculo;

    cout << apontador << "\n" << *apontador;

    return 0;
}