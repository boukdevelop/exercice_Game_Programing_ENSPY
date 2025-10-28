#include <iostream>

void ConvertirMinuscules(char* chaine);

int main(){
    char chaine[100];
    std::cout << "Entrer une chaine de caracteres : (Ecrivez en majuscules !)\n";
    std::cin >> chaine;
    std::cout << "Chaine avant conversion : " << chaine << std::endl;
    ConvertirMinuscules(chaine);
    std::cout << "Chaine apres conversion : " << chaine << std::endl;

    return 0;
}

void ConvertirMinuscules(char* chaine) {
    do{
        if(*chaine >= 'A' && *chaine <= 'Z'){
            *chaine = *chaine + 32;
            chaine++;
        }else{
            chaine++;
        }
    }while(*chaine != '\0');
}