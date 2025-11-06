//Área de uma esfera de 4cm

#include <iostream>
#define PI 3.141593

int main(){
    double area, raio;
    raio = 4.0;
    area = PI*raio*raio;
    std::cout << "A área de círculo com raio de 4cm é: " << area << "cm²";
    return 0;
}

/* Volume de uma esfera:

#include <iostream>
#define PI 3.141593

int main(){
    double volume, raio;
    raio = 5.0;
    volume = 4.0/3.0 * PI *raio* raio *raio;
    std::cout << "O volume da esfera com raio de 5cm: " << volume;
    return 0;
}
*/