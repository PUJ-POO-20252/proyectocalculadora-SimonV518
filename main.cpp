//main
#include <iostream>
#include "matematicas.h"

int main() {
    int X = 10;
    int Y = 4;
    int resultado_suma = sumar(X, Y);
    int resultado_subtra = subtract (X, Y);

    std::cout << "Suma" << resultado_suma << std::endl;
    std::cout << "Subtra" << resultado_subtra << std::endl;
    return 0;
}