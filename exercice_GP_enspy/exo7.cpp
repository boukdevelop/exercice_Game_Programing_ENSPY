#include <iostream>

void InitialiserMemoire(void* zone, unsigned char valeur, size_t taille);

int main() {
    unsigned char *chaineZ = new unsigned char[100];
    std::cout << "Zone avant initialisation : " << (void*)chaineZ << " adresse : " << &chaineZ << "\n";
    InitialiserMemoire(chaineZ, 0, 100);
    std::cout << "Zone apres initialisation : (la vraie valeur )\n";
    for(int i = 0; i < 100; i++) {
        std::cout << "Octet " << i << " : " << (int)chaineZ[i] << "\n";
    }

    return 0;
}

void InitialiserMemoire(void* zone, unsigned char valeur, size_t taille) {
    unsigned char *dest = static_cast<unsigned char *>(zone);
    for(int i = 0; i < taille; i++) {
        dest[i] = valeur;
    }
}