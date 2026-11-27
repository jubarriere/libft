*This activity has been created as part of the 42 curriculum by julbarri.*

# 42-Libft

## Description

Libft is the first project of the 42 Common-core. The objective is to recode some of the Standard C Library functions and some additional ones in order to build a personal library (`libft.a`) reusable in future projects.

### Features

The library is organized in three parts, with 43 functions in total.

<details>
<summary>Show the list of functions</summary>

#### Part 1 - Libc functions

| Function | Prototype | What it does |
|---|---|---|
| `ft_isalpha` | `int ft_isalpha(int c)` | checks if `c` is a letter |
| `ft_isdigit` | `int ft_isdigit(int c)` | checks if `c` is a digit |
| `ft_isalnum` | `int ft_isalnum(int c)` | checks if `c` is a letter or a digit |
| `ft_isascii` | `int ft_isascii(int c)` | checks if `c` is an ASCII value (0 to 127) |
| `ft_isprint` | `int ft_isprint(int c)` | checks if `c` is a printable char |
| `ft_toupper` | `int ft_toupper(int c)` | turns a lowercase letter into uppercase |
| `ft_tolower` | `int ft_tolower(int c)` | turns an uppercase letter into lowercase |
| `ft_memset` | `void *ft_memset(void *s, int c, size_t n)` | fills `n` bytes of `s` with the byte `c` |
| `ft_bzero` | `void ft_bzero(void *s, size_t n)` | sets `n` bytes of `s` to zero |
| `ft_memcpy` | `void *ft_memcpy(void *dest, const void *src, size_t n)` | copies `n` bytes from `src` to `dest` (no overlap) |
| `ft_memmove` | `void *ft_memmove(void *dest, const void *src, size_t n)` | copies `n` bytes from `src` to `dest`, even if they overlap |
| `ft_memchr` | `void *ft_memchr(const void *s, int c, size_t n)` | finds the first byte `c` in the first `n` bytes of `s` |
| `ft_memcmp` | `int ft_memcmp(const void *s1, const void *s2, size_t n)` | compares the first `n` bytes of two memory areas |
| `ft_strlen` | `size_t ft_strlen(const char *s)` | returns the length of a string |
| `ft_strlcpy` | `size_t ft_strlcpy(char *dst, const char *src, size_t size)` | copies `src` into `dst`, at most `size - 1` chars, and returns the length of `src` |
| `ft_strlcat` | `size_t ft_strlcat(char *dst, const char *src, size_t size)` | appends `src` to `dst` in a buffer of `size` bytes, and returns the length it tried to make |
| `ft_strchr` | `char *ft_strchr(const char *s, int c)` | finds the first occurrence of `c` in a string |
| `ft_strrchr` | `char *ft_strrchr(const char *s, int c)` | finds the last occurrence of `c` in a string |
| `ft_strncmp` | `int ft_strncmp(const char *s1, const char *s2, size_t n)` | compares two strings, up to `n` chars |
| `ft_strnstr` | `char *ft_strnstr(const char *big, const char *little, size_t len)` | finds `little` in `big`, searching at most `len` chars |
| `ft_atoi` | `int ft_atoi(const char *nptr)` | converts a string to an `int` |
| `ft_calloc` | `void *ft_calloc(size_t n, size_t size)` | allocates an array of `n` elements set to zero |
| `ft_strdup` | `char *ft_strdup(const char *s)` | returns a new copy of a string |

#### Part 2 - Additional functions

| Function | Prototype | What it does |
|---|---|---|
| `ft_substr` | `char *ft_substr(char const *s, unsigned int start, size_t len)` | returns a new string, part of `s` starting at `start`, of at most `len` chars |
| `ft_strjoin` | `char *ft_strjoin(char const *s1, char const *s2)` | returns a new string made of `s1` followed by `s2` |
| `ft_strtrim` | `char *ft_strtrim(char const *s1, char const *set)` | returns a copy of `s1` without the chars of `set` at both ends |
| `ft_split` | `char **ft_split(char const *s, char c)` | splits `s` into an array of words separated by `c`, ending with `NULL` |
| `ft_itoa` | `char *ft_itoa(int n)` | converts an `int` to a new string |
| `ft_strmapi` | `char *ft_strmapi(char const *s, char (*f)(unsigned int, char))` | returns a new string made by applying `f` to each char of `s` |
| `ft_striteri` | `void ft_striteri(char *s, void (*f)(unsigned int, char *))` | applies `f` to each char of `s`, in place |
| `ft_putchar_fd` | `void ft_putchar_fd(char c, int fd)` | writes a char to the file descriptor `fd` |
| `ft_putstr_fd` | `void ft_putstr_fd(char *s, int fd)` | writes a string to `fd` |
| `ft_putendl_fd` | `void ft_putendl_fd(char *s, int fd)` | writes a string followed by a newline to `fd` |
| `ft_putnbr_fd` | `void ft_putnbr_fd(int n, int fd)` | writes an `int` to `fd` |

#### Part 3 - Linked lists

Functions to manipulate the `t_list` structure:

```c
typedef struct  s_list
{
    void              *content;
    struct s_list     *next;
}   t_list;
```

| Function | Prototype | What it does |
|---|---|---|
| `ft_lstnew` | `t_list *ft_lstnew(void *content)` | creates a new node with `content` |
| `ft_lstadd_front` | `void ft_lstadd_front(t_list **lst, t_list *new)` | adds a node at the start of a list |
| `ft_lstsize` | `unsigned int ft_lstsize(t_list *lst)` | counts the nodes of a list |
| `ft_lstlast` | `t_list *ft_lstlast(t_list *lst)` | returns the last node of a list |
| `ft_lstadd_back` | `void ft_lstadd_back(t_list **lst, t_list *new)` | adds a node at the end of a list |
| `ft_lstdelone` | `void ft_lstdelone(t_list *lst, void (*del)(void *))` | frees a node and its content with `del` |
| `ft_lstclear` | `void ft_lstclear(t_list **lst, void (*del)(void *))` | frees a whole list with `del` and sets the pointer to `NULL` |
| `ft_lstiter` | `void ft_lstiter(t_list *lst, void (*f)(void *))` | applies `f` to the content of each node |
| `ft_lstmap` | `t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))` | returns a new list made by applying `f` to each content |

</details>

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
Include the header in your code:
```c
#include "libft.h"
```
Then compile and link the library:
```bash
cc -Wall -Wextra -Werror main.c -L./libft -lft -I./libft -o program_name
./program_name
```

### Example Usage

**Split**
```c
#include "libft.h"

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
        i++;
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

I made a custom tester, [libft-tester](https://github.com/jubarriere/libft-tester). It compares each function with its libc equivalent, checks edge cases and detects memory errors and leaks with Valgrind.

Clone it from inside your `libft` folder:

```bash
git clone https://github.com/jubarriere/libft-tester.git
cd libft-tester
make
```

## Resources
- The 42 Libft subject for the expected behavior of each function;
- All the `man` pages (`man strcpy`, `man memmove`, etc.).

### AI usage
AI was used to explain some concepts (linked lists, memory management), generate test cases and to write this README. The library code was written and understood by me.
