#include <iostream>

int main() {

//  las variables se pueden declarar de las dos siguientes maneras
//  tipo nombre = valor;
    int numero = 0;//de esta manera se crea y se le da valor en la misma linea

//  tipo nombre;
    float numeroFlotante;//de esta manera solo se crea la variable pero se le da valor despues

    std::cout << numero;
    std::cout << "\n";

    numero++;

    std::cout << numero;
    std::cout << "\n";


    numeroFlotante = 0.2;
    std::cout << numeroFlotante;

    return 0;
}