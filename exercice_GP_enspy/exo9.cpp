#include <iostream>

size_t DiviserChaine(const char* chaine, char separateur, char resultat[][100], size_t max_resultats);

int main() {
    char source[100];
    char separateur;
    char resultat[100][100];  // 100 mots maximum, chaque mot = 99 caractères max
    size_t max_resultats = 100;

    std::cout << "Entrer une chaine de caracteres : ";
    std::cin >> source;

    std::cout << "Choisissez le caractere de separation : ";
    std::cin >> separateur;

    size_t nombre = DiviserChaine(source, separateur, resultat, max_resultats);

    std::cout << "Resultat de la division (" << nombre << " morceaux) :\n";
    for (size_t i = 0; i < nombre; i++) {
        std::cout << "- " << resultat[i] << std::endl;
    }

    return 0;
}

size_t DiviserChaine(const char* chaine, char separateur, char resultat[][100], size_t max_resultats) {
    size_t compteur_resultats = 0;
    size_t index_courant = 0;

    for (size_t i = 0; chaine[i] != '\0'; i++) {
        if (chaine[i] == separateur) {
            // c'est la din d'un mot ici
            resultat[compteur_resultats][index_courant] = '\0';
            compteur_resultats++;
            index_courant = 0;

            // là  c'est si on dépasse la limite
            if (compteur_resultats >= max_resultats) break;
        } else {
            // on copie le caractère
            resultat[compteur_resultats][index_courant] = chaine[i];
            index_courant++;
        }
    }

    // On finit le dernier mot
    resultat[compteur_resultats][index_courant] = '\0';
    compteur_resultats++;

    return compteur_resultats;
}
