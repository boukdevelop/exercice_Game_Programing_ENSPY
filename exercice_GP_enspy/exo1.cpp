#include <iostream>

size_t LongueurChaine(const char* chaine);

int main() {
    char carac[100];
    std::cout << "Ce programme détermine la taille d'une chaine de caractère." << std::endl;
    std::cout << "Entrer une chaine de caractères : ";
    char *chaine = carac;
    std::cin >> carac;
    std::cout << "Distance : " << LongueurChaine(chaine) << " (Longueur de " << carac << " )\n";
}

size_t LongueurChaine(const char* chaine) {
    const char *debut = chaine;
    
    while (*chaine != '\0') {
        chaine++;
    }

    return chaine - debut;
}