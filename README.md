*This project has been created as part of the 42 curriculum by momellou.*

# Libft

## Description

Libft is a custom C library developed as part of the 42 curriculum. The goal of this project is to recreate several standard C library functions and implement additional utility functions, including functions for manipulating strings, memory, and linked lists.

The library provides reusable functions that can be used in future C projects. Implementing these functions helps develop a deeper understanding of pointers, memory allocation, data structures, string manipulation, and low-level programming.

The project is divided into three parts:

- **Part 1 — Libc functions:** Reimplementation of selected standard C library functions using the `ft_` prefix.
- **Part 2 — Additional functions:** Implementation of useful functions for manipulating strings, converting integers, applying callbacks, and writing data to file descriptors.
- **Part 3 — Linked lists:** Implementation of functions for creating, manipulating, traversing, and deleting singly linked lists.

## Instructions

### Requirements

The project requires a C compiler, `make`, and the `ar` utility to create the static library.

The source files must compile with the following flags:

```bash
-Wall -Wextra -Werror
```

### Compilation

Clone the repository and navigate to the project directory:

```bash
git clone <git@vogsphere.1337.ma:vogsphere/intra-uuid-a668f5f3-1562-4b2e-99ef-e6a2677af348-7772951-momellou> libft
cd libft
```

Compile the library:

```bash
make
```

This generates the static library `libft.a` at the root of the repository.

Available Makefile rules:

| Command | Description |
|---|---|
| `make` | Compiles the library. |
| `make all` | Builds the library. |
| `make clean` | Removes object files (`.o`). |
| `make fclean` | Removes object files and `libft.a`. |
| `make re` | Performs a full rebuild. |

### Using the library

Include the header file in your C source file:

```c
#include "libft.h"
```

Compile your program with the library:

```bash
cc -Wall -Wextra -Werror main.c ./libft.a
```

Run the program:

```bash
./a.out
```

The `libft.a` argument specifies the static library file to link directly with `main.c`. The -o programme option names the generated executable programme.

### Testing

Test programs can be created to verify the behavior of individual functions and compare their results with the corresponding standard library functions when available.

Example:

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    printf("Length: %zu\n", ft_strlen("Libft"));
    return (0);
}
```

Compile and run the test:

```bash
cc -Wall -Wextra -Werror main.c ./libft.a -o test
./test
```

## Library Functions

### Part 1 — Libc Functions

These functions reproduce the behavior of selected standard C library functions using the `ft_` prefix.

#### Character classification and conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an uppercase or lowercase letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

#### String manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string, excluding the terminating null character. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string, limited to a specified length. |
| `ft_strlcpy` | Copies a string into a destination buffer with a specified size limit. |
| `ft_strlcat` | Appends a string to a destination string with a specified size limit. |

#### Memory manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory region with a specified byte value. |
| `ft_bzero` | Sets a specified number of bytes to zero. |
| `ft_memcpy` | Copies a specified number of bytes between memory regions that do not overlap. |
| `ft_memmove` | Copies bytes between memory regions, including overlapping regions. |
| `ft_memchr` | Searches a memory region for the first occurrence of a byte. |
| `ft_memcmp` | Compares two memory regions byte by byte. |

#### Conversion and allocation

| Function | Description |
|---|---|
| `ft_atoi` | Converts the initial numeric portion of a string into an integer. |
| `ft_calloc` | Allocates memory for multiple elements and initializes the allocated bytes to zero. |
| `ft_strdup` | Allocates memory and creates a duplicate of a string. |

### Part 2 — Additional Functions

These functions provide additional string operations, character transformations, and output utilities.

#### String operations

| Function | Description |
|---|---|
| `ft_substr` | Creates a substring starting at a specified index and with a maximum length. |
| `ft_strjoin` | Creates a new string by concatenating two strings. |
| `ft_strtrim` | Creates a copy of a string with specified characters removed from its beginning and end. |
| `ft_split` | Splits a string into an array of strings using a delimiter character. |
| `ft_itoa` | Converts an integer into its string representation, including negative numbers. |

#### String iteration and transformation

| Function | Description |
|---|---|
| `ft_strmapi` | Creates a new string by applying a callback function to each character and its index. |
| `ft_striteri` | Iterates through a string and applies a callback function to each character by address. |

#### Output functions

| Function | Description |
|---|---|
| `ft_putchar_fd` | Writes a character to a specified file descriptor. |
| `ft_putstr_fd` | Writes a string to a specified file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline to a specified file descriptor. |
| `ft_putnbr_fd` | Writes an integer to a specified file descriptor. |

### Part 3 — Linked Lists

This part introduces a singly linked list using the following structure in `libft.h`:

```c
typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;
```

Each node contains a `content` pointer, which can refer to different data types, and a `next` pointer, which points to the next node or `NULL` when there is no next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Allocates and initializes a new node with the supplied content and sets `next` to `NULL`. |
| `ft_lstadd_front` | Adds a node at the beginning of a linked list. |
| `ft_lstsize` | Counts the number of nodes in a linked list. |
| `ft_lstlast` | Returns the last node of a linked list. |
| `ft_lstadd_back` | Adds a node at the end of a linked list. |
| `ft_lstdelone` | Deletes one node and frees its content through a supplied deletion function without deleting the next node. |
| `ft_lstclear` | Deletes a node and all its successors, freeing their contents and setting the list pointer to `NULL`. |
| `ft_lstiter` | Applies a supplied function to the content of each node. |
| `ft_lstmap` | Creates a new list by applying a supplied function to each node's content, using a deletion function to handle cleanup if necessary. |

## Technical Considerations

- The project is written in C and must comply with the 42 Norm.
- All source files must compile with `-Wall -Wextra -Werror`.
- The static library must be created using `ar`; `libtool` is forbidden.
- Global variables are forbidden.
- Helper functions should be declared `static` when their scope must be limited to a single source file.
- Dynamically allocated memory must be handled correctly and freed when necessary.
- The Makefile must avoid unnecessary relinking.
- Source files and the required project files must be placed at the repository root.

## Resources

The following resources can help with understanding and implementing the project:

- **42 Libft subject:** Official project requirements and function specifications.
- **C library manual pages:** `man strlen`, `man memset`, `man memcpy`, `man memmove`, `man calloc`, and other relevant manual pages.
- **AI:** `chatgpt`.
- **GitHub:** `GitHub repository for the old promo`.


### AI Usage

AI tools may be used as learning support to clarify C programming concepts, explain function behavior, help interpret compiler errors, and suggest test cases.

For this project, AI assistance should support understanding and debugging rather than replace independent reasoning. The implementation, testing, and final understanding of each function should be verified by the developer. Any AI assistance actually used should be described accurately and specifically for the relevant tasks and parts of the project.

## Learning Objectives

The main objectives of Libft are to:

- Strengthen knowledge of the C language.
- Understand pointers, arrays, and memory addresses.
- Practice dynamic memory allocation and deallocation.
- Learn how strings and memory regions are manipulated.
- Understand function pointers and callbacks.
- Implement and manipulate linked lists.
- Learn to compile, test, and organize a reusable C library.
- Develop debugging and problem-solving skills.

## Conclusion

Libft is a foundational project that provides a reusable collection of C functions while developing essential programming skills. By recreating standard functions and implementing additional utilities and linked lists, the project builds a strong foundation for future C programming assignments.

