#include <iostream>

int main(){
    int v1,v2,res, *pont1,*pont2;

    std::cout << "digite: \n";
    std::cin >> v1;

    std::cout << "digite2: \n";
    std::cin >> v2;

    pont1 = &v1;
    pont2 = &v2;

    res = *pont1 * *pont2;

    std::cout << "\n" << res;

    return 0;
}
