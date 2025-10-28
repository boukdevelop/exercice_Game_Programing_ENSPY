# Exercice_Game_Programing_ENSPY
|**NOM**|BOUKALA BONOKO|
|-----|------|
|**PRENOM**|FRANCK GABRIEL|
|**MATRICULE**|25P900|

Ce programme simule ce que fait certaines fonctions qui sont chargée de la manipulation des chaines de carctères

Ce programme présente 12 principales fonctions, à savoir :

## size_t LongueurChaine(const char* chaine);
Cette fonction permet déterminer la taille d'une chaine de caractère, en prennant en paramèttre un pointeur de tupe `const char`.
## void CopierChaine(char* destination, const char* source);
Cette fonction permet de copier une le contenue d'une chaine de caractère dans une autre variable tout en changeant son adresse par la même occasion. Et elle prend en paramètre :
- Un pointeur de type `char` ;
- Un pointeur de type `const char`;
## void ConcatenerChaines(char* destination, const char* source);
Cette fonction permet de relier deux chaine de caractères différentes, Et prend en paramètres :
- Un pointeur de type `char`;
- Un pointeur de type `const char`;
## char* TrouverCaractere(const char* chaine, char caractere);
## size_t CompterOccurrences(const char* chaine, char caractere);
## void CopierMemoire(void* destination, const void* source, size_t taille);
## void InitialiserMemoire(void* zone, unsigned char valeur, size_t taille);
## void ExtraireSousChaine(char* destination, const char* source, size_t debut, size_t longueur);
## size_t DiviserChaine(const char* chaine, char separateur, char resultat[][100], size_t max_resultats);
## int ComparerChaines(const char* chaine1, const char* chaine2);
## void ConvertirMinuscules(char* chaine);
## bool EstChaineNumerique(const char* chaine);
