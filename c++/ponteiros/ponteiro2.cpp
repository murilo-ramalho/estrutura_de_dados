#include <iostream>

int main(){
    int variavel;
    int *ponteiroA, *ponteiroB;

    std::cout << "digite: ";
    std::cin >> variavel;

    ponteiroA = &variavel;
    ponteiroB = &variavel;

    std::cout << "ponteiro A: \n" << *ponteiroA;
    std::cout << "ponteiro B: \n" << *ponteiroB;

    if(*ponteiroA == *ponteiroB){
        std::cout << "conteudo igual\n";
    }

    return 0;
}
