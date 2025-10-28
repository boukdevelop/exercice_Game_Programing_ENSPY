#include <iostream>

bool EstChaineNumerique(const char* chaine);

int main() {
    char carac[100];
    std::cout << "Entrer quelqeu chose, meme si c'est un nombre : ";
    std::cin >> carac;
    bool r = EstChaineNumerique(carac);
    if(r == true){
        std::cout << "\nCette chaine est numerique";
    }else if(r == false){
        std::cout << "\nCette chaine n'est pas numerique.";
    }

    return 0;
}

bool EstChaineNumerique(const char* chaine){
    bool valeur;
    while(*chaine != '\0'){
        if(*chaine == '-'){
            chaine++;
        }
        if(*chaine >= '0' && *chaine <= '9'){
            chaine++;
            valeur = true;
        }else{
            valeur = false;
        }
        chaine++;
    }

    return valeur;
}