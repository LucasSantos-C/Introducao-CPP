#include <iostream>

int main(){
    int x, y, soma;

    std::cout << "Enter the X and the Y value (in this exact order): \n";
    std::cin >> x >> y;
    soma = x+y;
    
    std:: cout << "Soma = " << soma << "\n\n";
    system("PAUSE");
    return 0;
}