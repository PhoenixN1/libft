# Libft — My C Library

## Présentation

Libft est un projet du cursus 42 / 1337 qui consiste à réimplémenter plusieurs fonctions standard de la bibliothèque C et à développer des fonctions utilitaires pour manipuler les chaînes de caractères, la mémoire et les listes chaînées.

L'objectif est de comprendre le fonctionnement du langage C, la gestion de la mémoire, les pointeurs et les structures de données, tout en construisant une bibliothèque réutilisable dans de futurs projets.

## Objectifs

- Comprendre le fonctionnement des fonctions standard du C.
- Maîtriser les pointeurs et les allocations dynamiques de mémoire.
- Manipuler les chaînes de caractères et les blocs mémoire.
- Comprendre les listes chaînées.
- Compiler plusieurs fichiers C dans une bibliothèque statique.
- Utiliser un Makefile pour automatiser la compilation.

## Technologies utilisées

- Langage : C
- Compilateur : cc / gcc
- Compilation : Makefile
- Bibliothèque générée : libft.a
- Norme : 42 / 1337

## Structure du projet

```text
libft/
├── libft.h
├── Makefile
├── ft_isalpha.c
├── ft_isdigit.c
├── ft_isalnum.c
├── ft_isascii.c
├── ft_isprint.c
├── ft_strlen.c
├── ft_memset.c
├── ft_bzero.c
├── ft_memcpy.c
├── ft_memmove.c
├── ft_strlcpy.c
├── ft_strlcat.c
├── ft_strchr.c
├── ft_strrchr.c
├── ft_strncmp.c
├── ft_memchr.c
├── ft_memcmp.c
├── ft_strnstr.c
├── ft_atoi.c
├── ft_calloc.c
├── ft_strdup.c
├── ft_substr.c
├── ft_strjoin.c
├── ft_strtrim.c
├── ft_split.c
├── ft_itoa.c
├── ft_strmapi.c
├── ft_striteri.c
├── ft_putchar_fd.c
├── ft_putstr_fd.c
├── ft_putendl_fd.c
├── ft_putnbr_fd.c
├── ft_lstnew.c
├── ft_lstadd_front.c
├── ft_lstsize.c
├── ft_lstlast.c
├── ft_lstadd_back.c
├── ft_lstdelone.c
├── ft_lstclear.c
├── ft_lstiter.c
└── ft_lstmap.c
```

La structure exacte dépend des fonctions implémentées dans le projet.

## Compilation

Clone le dépôt, puis accède au dossier du projet :

```bash
git clone <git@vogsphere.1337.ma:vogsphere/intra-uuid-33574042-73b2-4351-a1d2-4ef6cd790152-7738455-momellou>
cd libft
```

Compile la bibliothèque :

```bash
make
```

Autres commandes disponibles :

| Commande | Description |
|---|---|
| `make` | Compile la bibliothèque libft.a |
| `make clean` | Supprime les fichiers objets .o |
| `make fclean` | Supprime les fichiers objets et libft.a |
| `make re` | Recompile entièrement le projet |

## Utilisation

### Inclure le header
    
Dans ton fichier C :

```c
#include "libft.h"
```

### Compiler avec la bibliothèque

Exemple avec un fichier `main.c` :

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hello, Libft!");
    if (!str)
        return (1);
    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile le programme avec :

```bash
cc -Wall -Wextra -Werror main.c libft.a -o program
```

Exécute-le :

```bash
./program
```

Résultat attendu :

```text
Hello, Libft!
```

## Parties du projet

### Part 1 — Fonctions de la libc

Réimplémentation de fonctions pour manipuler les caractères, les chaînes de caractères et la mémoire.

### Part 2 — Fonctions supplémentaires

Création de fonctions utilitaires comme `ft_substr`, `ft_strjoin`, `ft_split`, `ft_itoa` et les fonctions d'écriture vers un descripteur de fichier.

### Part 3 — Listes chaînées

Manipulation de listes chaînées à l'aide de structures et de pointeurs, avec des fonctions comme `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast` et `ft_lstclear`.

## Compétences développées

- Programmation en C.
- Pointeurs et doubles pointeurs.
- Allocation et libération de mémoire (`malloc`, `free`).
- Manipulation des tableaux et des chaînes de caractères.
- Structures et listes chaînées.
- Compilation séparée et édition de liens.
- Débogage et tests de fonctions.
- Utilisation de Git et GitHub.

## Auteur

**Mostafa Mellouki**

- GitHub : [PhoenixN1](https://github.com/PhoenixN1)

---

Projet réalisé dans le cadre de l'apprentissage du langage C et des concepts fondamentaux de la programmation système.
