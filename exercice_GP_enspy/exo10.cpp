#include <iostream>

int ComparerChaines(const char* chaine1, const char* chaine2);

int main() {
    char chaine1[100], chaine2[100];

    std::cout << "Entrez la premiere chaine : ";
    std::cin >> chaine1;

    std::cout << "Entrez la deuxieme chaine : ";
    std::cin >> chaine2;

    int resultat = ComparerChaines(chaine1, chaine2);

    if (resultat == 0)
        std::cout << "Les chaines sont identiques.\n";
    else if (resultat < 0)
        std::cout << "La premiere chaine est plus petite.\n";
    else
        std::cout << "La premiere chaine est plus grande.\n";

    return 0;
}

int ComparerChaines(const char* chaine1, const char* chaine2) {
    while (*chaine1 != '\0' && *chaine2 != '\0') {
        if (*chaine1 != *chaine2)
            return *chaine1 - *chaine2;
        chaine1++;
        chaine2++;
    }
    return *chaine1 - *chaine2;
}
