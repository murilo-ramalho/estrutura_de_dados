#include <iostream>

int main(){
    int variavelA = 2, variavelB = 4;
    int *ponteiro;

    ponteiro = &variavelA;
    std::cout << *ponteiro << "\n";

    ponteiro = &variavelB;
    std::cout << *ponteiro << "\n";

    return 0;
}
