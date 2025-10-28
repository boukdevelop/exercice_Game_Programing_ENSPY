#include <iostream>

void ExtraireSousChaine(char* destination, const char* source, size_t debut, size_t longueur);
size_t LongueurChaine(const char* chaine);

int main() {
    char source[100];
    char sousChaine[100];
    size_t debut;
    std::cout << "Entrer une chaine de caracteres : \n";
    std::cin >> source;
    size_t longueur = LongueurChaine(source);
    std::cout << "Chaine source : " << source << " ; longueur = " << longueur << std::endl;
    std::cout << "Entrer la position de debut de la sous-partie que vous voulez : ";
    std::cin >> debut;
    std::cout << "Entrer la taille de la sous-partie que vous voulez : ";
    std::cin >> longueur;
    ExtraireSousChaine(sousChaine, source, debut, longueur);
    std::cout << "Sous partie : " << sousChaine << " ; longueur ! " << LongueurChaine(sousChaine) << std::endl;
   
    return 0;
}
void ExtraireSousChaine(char* destination, const char* source, size_t debut, size_t longueur) {
    size_t i = 0;

    // oN VERIFIE QUE DEUT EST DANS LES LIMITES
    size_t tailleSource = LongueurChaine(source);
    if (debut < 0 && debut >= tailleSource) {
        std::cout << "Erreur : debut hors limites !" << std::endl;
        return ;
    }

    // On copie les caractères demandés
    while (i < longueur && source[debut + i] != '\0') {
        destination[i] = source[debut + i];
        i++;
    }

    // Ic ic'est la fin de la chaine destination
    destination[i] = '\0';
}

size_t LongueurChaine(const char* chaine) {
    const char *debut = chaine;
    
    while (*chaine != '\0') {
        chaine++;
    }

    return chaine - debut;
}