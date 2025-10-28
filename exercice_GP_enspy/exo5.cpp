#include <iostream>

size_t CompterOccurrences(const char* chaine, char caractere);

int main () {

    char text[100], c;
    char *chaine = text;
    std::cout << "Entre une chaine de caractere : " << std::endl;
    std::cin >> text;
    std::cout << "Quelle caractere voulez-vous rechercher dans cette chaine ? \n";
    std::cin >> c;
    std::cout << "Il y'a " << CompterOccurrences(chaine,c) << " caractere comme celui ci : " << c << std::endl;

    return 0;
}

size_t CompterOccurrences(const char* chaine, char caractere) {
    int e = 0;
    do{
        if(*chaine == caractere) {
            e++;
        }
        chaine++;
    } while(*chaine != '\0');
    return e;
}