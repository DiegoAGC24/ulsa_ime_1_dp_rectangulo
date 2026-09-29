#include <iostream>
#include "utilerias.h"

int main() {
    // 1. Variables
    double ancho = 0.0;
    double alto = 0.0;
    double area = 0.0;
    double perimetro = 0.0;

    std::cout << "Area y perimetro de un rectangulo\n";

    // 2. Entrada: el ancho
    std::cout << "Escribe el ancho del rectangulo en cm (mayor que 0): ";
    ancho = leerDecimal("");

    while (ancho <= 0) {
        std::cout << "El ancho debe ser mayor que 0\n";
        std::cout << "Escribe nuevamente el ancho del rectangulo en cm: ";
        ancho = leerDecimal("");
    }

    // 3. Entrada: el alto
    std::cout << "Escribe el alto del rectangulo en cm (mayor que 0): ";
    alto = leerDecimal("");

    while (alto <= 0) {
        std::cout << "El alto debe ser mayor que 0\n";
        std::cout << "Escribe nuevamente el alto del rectangulo en cm: ";
        alto = leerDecimal("");
    }

    // 4. Proceso
    area = ancho * alto;
    perimetro = 2 * (ancho + alto);

    // 5. Salida
    std::cout << "Area: " << area << " cm2\n";
    std::cout << "Perimetro: " << perimetro << " cm\n";

    return 0;
}