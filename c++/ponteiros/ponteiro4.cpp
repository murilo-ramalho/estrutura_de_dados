#include <iostream>

int main(){
    int v1=1,v2=2,v3=3,*pont;

    pont = &v1;
    std::cout << pont << "\n";

    pont = &v2;
    std::cout << pont << "\n";

    pont = &v3;
    std::cout << pont << "\n";

    return 0;
}
