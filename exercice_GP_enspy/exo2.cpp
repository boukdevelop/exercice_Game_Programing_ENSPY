#include <iostream>

void CopierChaine(char* destination, const char* source);

int main() {
    char source[100];
    char *chaineS = source;
    char *chaineD = new char[100];
    std::cout << "Entrer un texte : " << std::endl;
    std::cin >> source;
    std::cout << "Avant copie : source = " << source << " adresse = " << &source << std::endl;
    CopierChaine(chaineD, chaineS);

    delete[] chaineD;
    return 0;
}


void CopierChaine(char* destination, const char* source) {
    char *dest = destination;
    while(*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
    std::cout << "Après copie : destination = " << dest << " adresse = " << &dest << std::endl;
}