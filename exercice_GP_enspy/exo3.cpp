#include <iostream>

void ConcatenerChaines(char* destination, const char* source);

int main() {
    char source[100], destination[100];
    std::cout << "Entrer du texte : " << std::endl;
    std::cin >> source;
    std::cout << "Entrer un nouveau texte : " << std::endl;
    std::cin >> destination;
    std::cout << "Ces textes serons concaténés." << std::endl;
    ConcatenerChaines(destination,source);
    std::cout << "Texte concatene : " << destination << std::endl;
    
    return 0;
}

void ConcatenerChaines(char* destination, const char* source) {
    while(*destination != '\0'){
        destination++;
    }
    while(*source != '\0'){
        *destination = *source;
        destination++;
        source++;
    }
    *destination = '\0';
}