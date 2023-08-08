#include <iostream>

using namespace std;

int calcular(int a, int b){
    return a+b;
}

int main(){
    int num1,num2;
    int *ap1, *ap2;

    cout << "numero 1 \n";
    cin >> num1;

    cout << "numero 1 \n";
    cin >> num2;

    ap1 = &num1;
    ap2 = &num2;

    cout << calcular(*ap1,*ap2);

    return 0;
}