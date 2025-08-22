//main
#include <iostream>
#include "matematicas.h"

int main() {
    int X = 10;
    int Y = 4;
    int resultado_suma = sumar(X, Y);
    int resultado_subtra = subtract (X, Y);
    int resultado_multiplicar = multiplicar (X, Y);
    int resultado_dividir = dividir (X, Y);

    std::cout << "Suma" << resultado_suma << std::endl;
    std::cout << "Subtra" << resultado_subtra << std::endl;
    std::cout << "Multiplica" << resultado_multiplicar << std::endl;
    std::cout << "Dividir" << resultado_dividir << std::endl;
    std::cout << std::endl;
    return 0;
}