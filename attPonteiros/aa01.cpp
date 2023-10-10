#include <iostream>
using namespace std;

void att1(){
    int num;
    int *pont;

    for(int i=0; i<3; i++){
        cout << "\n digite um valor: \n";
        cin >> num;
        pont = &num;
        cout << "\n local: " << pont << "\n";
    }
}
void att2(){
}
void att3(){}

int main(){
    int c;
    cout << "escolha a atividade (1-3): \n";
    cin >> c;

    switch(c){
        case 1:
            att1();
            break;
        case 2:
            att2();
            break;
        case 3:
            att3();
            break;
        default:
            cout << "não existe";
            break;
    }

return 0;
}
