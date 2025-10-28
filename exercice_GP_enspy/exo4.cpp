#include <iostream>

char* TrouverCaractere(const char* chaine, char caractere);

int main () {

    char text[100], c;
    char *chaine = text;
    std::cout << "Entre une chaine de caractere : " << std::endl;
    std::cin >> text;
    std::cout << "Quelle caractere voulez-vous rechercher dans cette chaine ? \n";
    std::cin >> c;
    TrouverCaractere(chaine,c);

    return 0;
}

char* TrouverCaractere(const char* chaine, char caractere) {
    int e = 0;
    bool trouve = false;
    do{
        e++;
        if(*chaine == caractere) {
            std::cout << "\nValeur trouvee a la position " << e << std::endl;
            trouve = true;
            break;
        }
        
        chaine++;
    } while(*chaine != '\0');
    if(!trouve){
            std::cout << "Introuvable\n";
        }
    return nullptr;
}