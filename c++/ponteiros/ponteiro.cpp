#include <iostream>

using namespace std;

int main(){
    int variavel;
    int *ponteiro;

    cout << "digite: ";
    cin >> variavel;

    ponteiro = &variavel;

    cout << "\n variavel: " << *ponteiro << "\n local da variavel: " << ponteiro << "\n local do ponteiro: " << &ponteiro;

    return 0;
}
