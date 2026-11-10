<div align="center">

# libft

### A personal C standard library for the 42 curriculum

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![Norminette](https://img.shields.io/badge/42-Norminette-00babc.svg)](https://github.com/42School/norminette)

**[English](#english) · [Español](#español)**

</div>

---

<a name="english"></a>

## English

`libft` is a compact, dependency-free C library that recreates commonly used functions from the standard C library and adds practical utilities for strings, memory, file descriptors, and linked lists.

The project is designed for the **42 Libft project**: every function is implemented from scratch, the code is compiled with strict warnings, and the resulting static library can be reused in future C projects.

## Features

- Character classification and conversion
- String length, search, comparison, copying, joining, trimming, and splitting
- Memory allocation and manipulation
- Integer/string conversion
- File-descriptor output helpers
- Singly linked-list utilities included in the bonus section
- Strict compilation with `-Wall -Wextra -Werror`

## Project structure

| Area | Functions |
| --- | --- |
| Character checks | `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint` |
| Strings | `ft_strlen`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`, `ft_substr`, `ft_strjoin`, `ft_strtrim`, `ft_split`, `ft_strmapi`, `ft_striteri` |
| Memory | `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc` |
| Conversion | `ft_atoi`, `ft_itoa`, `ft_toupper`, `ft_tolower` |
| Size-limited strings | `ft_strlcpy`, `ft_strlcat` |
| File descriptors | `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, `ft_putnbr_fd` |
| Bonus linked lists | `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, `ft_lstsize`, `ft_lstlast`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap` |

## Requirements

- A Unix-like operating system
- `cc` or another C compiler compatible with the Makefile
- `make`

## Build

Clone the repository and build the mandatory library:

```bash
git clone https://github.com/wolfredothewise/libft.git
cd libft
make
```

This creates the static library `libft.a`.

To include the linked-list bonus functions:

```bash
make bonus
```

Clean generated object files and the library with:

```bash
make clean    # remove object files
make fclean   # remove object files and libft.a
make re       # rebuild from scratch
```

## Using libft in a project

Include the public header and link the static library when compiling:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("Hello from libft!", 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o demo
./demo
```

## Makefile targets

| Target | Description |
| --- | --- |
| `make` / `make all` | Build `libft.a` with the mandatory functions |
| `make bonus` | Build the library with mandatory and linked-list bonus functions |
| `make clean` | Remove object files |
| `make fclean` | Remove object files and `libft.a` |
| `make re` | Perform a full rebuild |

## Notes

- The library is static and produces `libft.a`.
- The bonus API uses the `t_list` structure declared in `libft.h`.
- Functions return `NULL` when allocation fails where applicable; callers remain responsible for releasing allocated memory.
- The project intentionally keeps dependencies limited to standard headers such as `<stdlib.h>`, `<unistd.h>`, and `<limits.h>`.

## License

No license file is currently included in this repository. Add an explicit license before distributing the code outside the intended academic context.

---

<a name="español"></a>

## Español

`libft` es una biblioteca compacta de C, sin dependencias externas, que recrea funciones habituales de la biblioteca estándar y añade utilidades para trabajar con cadenas, memoria, descriptores de archivo y listas enlazadas.

El proyecto está diseñado para el **proyecto Libft de 42**: cada función está implementada desde cero, el código se compila con advertencias estrictas y la biblioteca estática resultante puede reutilizarse en futuros proyectos en C.

## Funcionalidades

- Comprobación y conversión de caracteres
- Longitud, búsqueda, comparación, copia, unión, recorte y división de cadenas
- Reserva y manipulación de memoria
- Conversión entre enteros y cadenas
- Funciones de salida mediante descriptores de archivo
- Utilidades para listas simplemente enlazadas incluidas en la parte bonus
- Compilación estricta con `-Wall -Wextra -Werror`

## Requisitos

- Un sistema operativo tipo Unix
- `cc` u otro compilador compatible con el Makefile
- `make`

## Compilación

```bash
git clone https://github.com/wolfredothewise/libft.git
cd libft
make
```

Esto genera la biblioteca estática `libft.a`.

Para incluir las funciones bonus de listas enlazadas:

```bash
make bonus
```

Comandos de limpieza y recompilación:

```bash
make clean    # elimina los archivos objeto
make fclean   # elimina los objetos y libft.a
make re       # recompila desde cero
```

## Uso en otro proyecto

Incluye la cabecera pública y enlaza la biblioteca al compilar:

```c
#include "libft.h"

int main(void)
{
    ft_putendl_fd("¡Hola desde libft!", 1);
    return (0);
}
```

```bash
cc -Wall -Wextra -Werror main.c -I. -L. -lft -o demo
./demo
```

## Objetivos del Makefile

| Objetivo | Descripción |
| --- | --- |
| `make` / `make all` | Compila `libft.a` con las funciones obligatorias |
| `make bonus` | Compila las funciones obligatorias y las listas enlazadas bonus |
| `make clean` | Elimina los archivos objeto |
| `make fclean` | Elimina los objetos y `libft.a` |
| `make re` | Realiza una recompilación completa |

## Notas

- La biblioteca es estática y genera `libft.a`.
- La API bonus utiliza la estructura `t_list` declarada en `libft.h`.
- Las funciones devuelven `NULL` cuando falla una reserva de memoria, cuando corresponde; quien use la biblioteca debe liberar la memoria reservada.
- El proyecto limita sus dependencias a cabeceras estándar como `<stdlib.h>`, `<unistd.h>` y `<limits.h>`.

## Licencia

Actualmente el repositorio no incluye un archivo de licencia. Añade una licencia explícita antes de distribuir el código fuera del contexto académico previsto.
