#include <iostream>

using namespace std;

int main(){

    int *ap;
    int vetor[10];

    for(int i =0;i<=10;i++){
        ap = &vetor[i];
        *ap = i+10;
        cout << "valor: " << *ap << " - endereco " << ap << "\n";
    }

    return 0;
}