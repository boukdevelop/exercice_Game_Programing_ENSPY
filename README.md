# Exercice_Game_Programing_ENSPY
|**NOM**|BOUKALA BONOKO|
|-----|------|
|**PRENOM**|FRANCK GABRIEL|
|**MATRICULE**|25P900|

Ce programme simule ce que fait certaines fonctions qui sont chargée de la manipulation des chaines de carctères

Ce programme présente 12 principales fonctions, à savoir :

## 1. size_t LongueurChaine(const char* chaine);
Cette fonction permet déterminer la taille d'une chaine de caractère, en prennant en paramèttre un pointeur de tupe `const char`.
## 2. void CopierChaine(char* destination, const char* source);
Cette fonction permet de copier une le contenue d'une chaine de caractère dans une autre variable tout en changeant son adresse par la même occasion. Et elle prend en paramètre :
- Un pointeur de type `char` ;
- Un pointeur de type `const char`;
## 3. void ConcatenerChaines(char* destination, const char* source);
Cette fonction permet de relier deux chaine de caractères différentes, Et prend en paramètres :
- Un pointeur de type `char`;
- Un pointeur de type `const char`;
## 4. char* TrouverCaractere(const char* chaine, char caractere);
Paramétrage :
 * Recherche la première occurrence d'un caractère dans une chaîne
 * @param chaine: Chaîne dans laquelle chercher (constante)
 * @param caractere: Caractère à rechercher
 * @return: Pointeur vers la première occurrence, ou nullptr si non trouvé
 * 
 * Parcourt la chaîne jusqu'à trouver le caractère ou atteindre '\0'
 * Utilise l'arithmétique des pointeurs pour le parcours
 * Retourne nullptr si le caractère n'est pas trouvé
## 5. size_t CompterOccurrences(const char* chaine, char caractere);
Paramétrage :
 * Compte le nombre d'occurrences d'un caractère dans une chaîne
 * @param chaine: Chaîne à analyser (constante)
 * @param caractere: Caractère à compter
 * @return: Nombre d'occurrences trouvées (size_t)
 * 
 * Parcourt toute la chaîne et incrémente un compteur à chaque match
 * Continue jusqu'au caractère nul
 * Compte toutes les occurrences, pas seulement la première
## 6. void CopierMemoire(void* destination, const void* source, size_t taille);
Paramétrage :
 * Copie un bloc mémoire d'une zone à une autre
 * @param destination: Pointeur vers la zone de destination
 * @param source: Pointeur vers la zone source (constante)
 * @param taille: Nombre d'octets à copier
 * 
 * Utilise des pointeurs de type unsigned char* pour copier octet par octet
 * Gère la copie même si les zones se chevauchent
 * Plus sûr que CopierChaine car utilise une taille explicite
## 7. void InitialiserMemoire(void* zone, unsigned char valeur, size_t taille);
Paramétrage :
 * Remplit une zone mémoire avec une valeur spécifique
 * @param zone: Pointeur vers la zone à initialiser
 * @param valeur: Valeur à écrire dans chaque octet
 * @param taille: Nombre d'octets à initialiser
 * 
 * Parcourt la zone octet par octet et écrit la valeur
 * Utile pour initialiser des tableaux ou structures
 * Peut être utilisé pour mettre des zéros ou d'autres valeurs
## 8. void ExtraireSousChaine(char* destination, const char* source, size_t debut, size_t longueur);
Paramétrage :
 * Extrait une portion d'une chaîne
 * @param destination: Buffer où stocker la sous-chaîne
 * @param source: Chaîne source (constante)
 * @param debut: Indice de départ de l'extraction
 * @param longueur: Nombre de caractères à extraire
 * 
 * Vérifie que debut et longueur sont valides
 * Copie les caractères de [debut] à [debut+longueur-1]
 * Ajoute toujours le '\0' final
 * Tronque si on dépasse la fin de la source
## 9. size_t DiviserChaine(const char* chaine, char separateur, char resultat[][100], size_t max_resultats);
Paramétrage :
 * Divise une chaîne en sous-chaînes selon un séparateur
 * @param chaine: Chaîne à diviser (constante)
 * @param separateur: Caractère séparateur
 * @param resultat: Tableau 2D pour stocker les résultats
 * @param max_resultats: Taille maximale du tableau résultat
 * @return: Nombre de sous-chaînes extraites
 * 
 * Parcourt la chaîne et découpe à chaque séparateur
 * Ignore les séparateurs consécutifs
 * Stocke chaque partie dans le tableau résultat
 * Retourne le nombre réel de sous-chaînes trouvées
## 10. int ComparerChaines(const char* chaine1, const char* chaine2);
Paramétrage :
 * Compare deux chaînes de caractères lexicographiquement
 * @param chaine1: Première chaîne à comparer (constante)
 * @param chaine2: Deuxième chaîne à comparer (constante)
 * @return: 
 *   - 0 si les chaînes sont identiques
 *   - <0 si chaine1 < chaine2 (dans l'ordre alphabétique)
 *   - >0 si chaine1 > chaine2 (dans l'ordre alphabétique)
 * 
 * Compare caractère par caractère jusqu'à trouver une différence
 * ou atteindre la fin d'une des chaînes
 * La comparaison est sensible à la casse
## 11. void ConvertirMinuscules(char* chaine);
Paramétrage :
 * Convertit une chaîne en minuscules (modifie la chaîne originale)
 * @param chaine: Chaîne à convertir (sera modifiée)
 * 
 * Parcourt la chaîne et convertit chaque majuscule en minuscule
 * Utilise la table ASCII : 'A'=65, 'a'=97 (différence de 32)
 * Laisse les caractères non-alphabétiques inchangés
## 12. bool EstChaineNumerique(const char* chaine);
Paramétrage :
 * Vérifie si une chaîne représente un nombre entier
 * @param chaine: Chaîne à vérifier (constante)
 * @return: true si la chaîne est numérique, false sinon
 * 
 * Vérifie que chaque caractère est un chiffre ('0' à '9')
 * Accepte également un signe '-' au début
 * Rejette les nombres à virgule et autres caractères

### La compilation se passe comme suite : 

```bash
# Compilation simple
clang++ main.cpp -o programme

# Compilation avec tous les warnings
clang++ -Wall -Wextra -Wpedantic main.cpp -o programme

# Compilation recommandée pour ce projet
clang++ -Wall -Wextra -Wpedantic -std=c++17 -g -o manipulation_chaines main.cpp

# Exécution
./manipulation_chaines

# Vérification de la version
clang++ --version

# Débogage avec LLDB
lldb ./manipulation_chaines
```
