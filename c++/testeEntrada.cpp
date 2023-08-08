#include <iostream>

int main(){
    std::string name;
    
    //mostra na tela
    std::cout << "what's your name? ";
    //recolhe o valor sem espaços, não pode espaços
    std::cin >> name;

    //pega a linha, ws pode colocar após outra entrada
    //std::getline(std::cin >> std::ws, name);

    std::cout << "hello " << name;

    return 0;
}