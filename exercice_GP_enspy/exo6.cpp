#include <iostream>

void CopierMemoire(void* destination, const void* source, size_t taille);

int main() {
    //declaration de variables ; allocation de memoire pour la copie et conversion de types
    std::string source;
    unsigned char* chaineS = reinterpret_cast<unsigned char*>(source.data());
    unsigned char *chaineD = new unsigned char[100];
    std::cout << "Entrer un texte : " << std::endl;
    std::getline(std::cin,source);
    std::cout << "Texte avant copie : " << source << " ; adresse memoire = " << &source <<std::endl;
    CopierMemoire(chaineD, chaineS, source.size() + 1);
    
    std::cout << "Texte copie : " << chaineD << " ; nouvelle adresse memoire = " << &chaineD << std::endl;
    // On libère la memoire à la fin de l'operation
    delete[] chaineD;
    return 0;
}

void CopierMemoire(void* destination, const void* source, size_t taille) {
    unsigned char* dest = static_cast<unsigned char*>(destination);
    const unsigned char* src = static_cast<const unsigned char*>(source);
    
    for (size_t i = 0; i < taille; ++i) {
        dest[i] = src[i];
    }
}