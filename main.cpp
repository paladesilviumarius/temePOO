#include "utils.h"

int     main()
{
    int     liniiA, liniiB;
    int     coloaneA, coloaneB;
    matrice A, B, O, auxOne, auxTwo, rezultat;

    std :: cout << "Rezolvam ecuatia A * X + B = O" << '\n';
    std :: cout << "Dati numarul de linii ale lui A = ";
    std :: cin >> liniiA;
    std :: cout << "Dati numarul de coloane ale lui A = ";
    std :: cin >> coloaneA;
    A.actualizare(liniiA, coloaneA, 0);
    A.citire();
    std :: cout << "Dati numarul de linii ale lui B = ";
    std :: cin >> liniiB;
    std :: cout << "Dati numarul de coloane ale lui B = ";
    std :: cin >> coloaneB;
    B.actualizare(liniiB, coloaneB, 0);
    B.citire();
    rezultat = (~A) * (-B);
    std :: cout << "Rezultatul este:" << '\n';
    rezultat.afisare();
    return (0);
}
