*This activity has been created as part of the 42 curriculum by julbarri.*

# 42-Libft

## Description

Libft is the first project of the 42 Common-core. The objectif is to recode some of the Standard C Library functions and some additional ones in order to build a personal library (`libft.a`) reusable in future projects.

### Features

The library is organized in three parts :

**Part 1 - Libc functions**

`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmpr`, `ft_strnstr`.

**Part 2 - Additional functions**

`ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_itoa`, `ft_strmapi`, `ft_striteri`, `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd`.

**Part 3 - Linked lists**

Functions to manipulate the `t_list` structure.

```c
typedef struct  s_list
{
    void              *content;
    struct s_list     *next;
}   t_list;
```

`ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`.

### Structure

```
libft/
|__ Makefile
|__ libft.h
|__ ft_isalpha.c
|__ ft_isdigit.c
|__ ...
|__ README.md
```
## Instructions

### Requirements
- `cc` and `make`

### Installation
```bash
git clone https://github.com/jubarriere/libft.git
cd libft
```

### Compilation
```bash
make    #same as make all
make all    #compile the .c files into .o files, then build libft.a
make clean  #remove the .o files
make fclean #remove the .o files and the libft.a
make re #rebuild everything
```
### Execution

`libft.a` is a library, not a program. It is only used in another program.
Include the header in your code :
```c
#include "libft.h"
```
Then compile and link the library :
```bash
cc - Wall -Werror -Wextra main.c -L./libft -I./libft -o program_name ./program_name
```

### Example Usage

**Split**
```c
#include "libft.h"
#include <stdlib.h>

int main(void)
{
    char    **words;
    int     i;

    words = ft_split("one two three", ' ');
    i = 0;
    while (words[i])
    {
        ft_putendl_fd(words[i], 1);
        free(words[i]);
        i+;
    }
    free(words);
    return (0);
}
```
```bash
$ cc -Wall -Wextra -Werror main.c -L. -lft
$ ./a.out
one
two
three
```

### Testing

I made a custom tester, [libft-tester](https://github.com/jubarriere/libft-tester). It compares each function with its libc equivalent, check edge cases and detects memory errors and leaks with Valgrind.

```bash
git clone https://github.com/jubarriere/libft-tester.git
cd libft-tester
make
```

## Resources
- The 42 Libft subject for the expected behavior of each functions;
- All the `man` pages (`man strcpy`, `man memmove`, etc.).

### AI usage
AI was used to explain some concepts (linked lists, memory management), generate test cases and to write this README. The library code was written and understood by me.
