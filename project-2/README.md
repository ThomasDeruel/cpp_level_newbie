# What I learned ?

## Pointeurs: Références

Par défaut, les arguments passés dans une fonction sont **copiés**.
Ainsi, si on modifie la valeur de l'argument, la variable originale ne sera pas impactée.

```cpp

int value = 0;

void plusOne(int number) {
    number += 1
}

// outpout: 0
cout << value << endl;
```

On peut changer se comportement on ajoutant une **esperluette**.

```cpp

int value = 0;

void plusOne(int &number) {
    number += 1
}

// outpout: 1
std::cout << value << std::endl;
```

## cin

Un `character input` permet de contrôler le flux en entrée.

 Cela permet à un utilisateur de séléctionner un (ou un ensemble) de caractère(s) de son choix à partir de son clavier en fonction du type que l'on souhaite avoir (int, char, string, etc.), sans quoi, le flux retournera une erreur.

```cpp
int number;

std::cin >> number;
```

Dans le cas où on souhaite récupérer absolument la bonne valeur, on sera contraint de boucler à l'aide d'un `while`.

```cpp
int number;

while(std::cout << "Choisir un nombre:" && !(std::cin >> number)){

    /* Dans le cas on n'a pas la valeur attendu
    *  où qu'on rencontre une erreur
    *  cin.clear() nettoiera l'ensemble des flux en entrée proprement.
    *  Ainsi, on ne rencontra aucun problème lors de la prochaine boucle
    *  et l'utilisateur pourra donc y entrer une nouvelle valeur */

    std::cin.clear();

    // on prend l'ensemble des caractères et on filtre. Ainsi tous les
    // saut d'espaces sont ignorés, y compris quand entre sur la
    // touche entrée la première fois
    // dans certains cas, il peut corriger les issues
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// ok, it's good
std::cout << value << std::endl;
```


> Dans le cas où on souhaite créer un message d'erreur lorsque `cin` rencontre une erreur, on fera appel à `if(cin.fail())`

## Random


`rand()` fait appel à `srand()` qui lui même va générer des nombres pseudo-aléatoires en fonction de la valeur donnée, elle ne doit être alimenté qu'une seule fois.

Par défaut, sans modification, nous avons `srand(1)`, ce qui est problématique car la valeur de `rand()` toujours sera la même.

Pour y remédier, on attribut comme paramètre à `srand` le temps actuel (soit `std::time(NULL)` en timestamp)

```cpp
// besoin d'inclure 2 éléments
#include <cstdlib>
#include <ctime>

int main(){

    srand(time(NULL));
    int random = rand();

    return 0;
}
```