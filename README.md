# 📚 Libft — My First C Library

**"Building the foundation for all future C projects!"**

Welcome to Libft, a custom C library project where I've reimplemented standard functions and created additional utilities as my first major programming project at 42.

---

## 🎯 Project Objectives

- Deep understanding of standard C library functions by reimplementing them from scratch
- Practice memory management, pointer manipulation, and string operations
- Create a personal toolbox of functions for future C projects
- Master the art of clean, efficient, and well-organized code

---

## 📋 What's Inside

### 🧩 Part 1: Libc Functions

Reimplementations of classic C library functions:

| Function | Description |
|----------|-------------|
| ft_isalpha | Checks if character is alphabetic |
| ft_isdigit | Checks if character is a digit |
| ft_isalnum | Checks if character is alphanumeric |
| ft_isascii | Checks if character is in ASCII table |
| ft_isprint | Checks if character is printable |
| ft_strlen | Calculates string length |
| ft_memset | Fills memory with a constant byte |
| ft_bzero | Zeros a memory area |
| ft_memcpy | Copies memory area |
| ft_memmove | Copies memory area with overlap handling |
| ft_strlcpy | Size-bounded string copying |
| ft_strlcat | Size-bounded string concatenation |
| ft_toupper | Converts character to uppercase |
| ft_tolower | Converts character to lowercase |
| ft_strchr | Locates first occurrence of character in string |
| ft_strrchr | Locates last occurrence of character in string |
| ft_strncmp | Compares two strings up to n bytes |
| ft_memchr | Locates byte in memory area |
| ft_memcmp | Compares memory areas |
| ft_strnstr | Locates substring in a string with length limit |
| ft_atoi | Converts string to integer |
| ft_calloc | Allocates and zeros memory |
| ft_strdup | Duplicates a string |

### 🔧 Part 2: Additional Functions

Useful utilities not found in libc:

| Function | Description |
|----------|-------------|
| ft_substr | Extracts a substring from a string |
| ft_strjoin | Concatenates two strings |
| ft_strtrim | Trims specified characters from string |
| ft_split | Splits string using delimiter character |
| ft_itoa | Converts integer to string |
| ft_strmapi | Applies function to each character of string |
| ft_striteri | Applies function to each character with index |
| ft_putchar_fd | Outputs character to file descriptor |
| ft_putstr_fd | Outputs string to file descriptor |
| ft_putendl_fd | Outputs string with newline to file descriptor |
| ft_putnbr_fd | Outputs integer to file descriptor |

### ✨ Bonus: Linked List Functions

Tools for creating and manipulating linked lists:

| Function | Description |
|----------|-------------|
| ft_lstnew | Creates new list node |
| ft_lstadd_front | Adds node to beginning of list |
| ft_lstsize | Counts nodes in list |
| ft_lstlast | Returns last node of list |
| ft_lstadd_back | Adds node to end of list |
| ft_lstdelone | Deletes node content and frees node |
| ft_lstclear | Deletes and frees entire list |
| ft_lstiter | Applies function to content of each node |
| ft_lstmap | Creates new list from applying function to original list |

---

## 🛠️ How to Use

```bash
# Build the library
make

# Add bonus functions
make bonus

# Clean up object files
make clean

# Remove all generated files
make fclean

# Rebuild everything
make re
```

Include in your projects:
```c
#include "libft.h"
```

Compile with:
```bash
cc -L. -lft your_file.c
```

---

## 💡 Key Learnings

- Proper memory allocation and management
- String manipulation techniques
- Function pointers and their applications
- Linked list implementation and operations
- Creating maintainable, modular code

---

## 📦 Project Structure

```
.
├── Makefile        # Compilation rules
├── libft.h         # Library header
├── ft_*.c          # Source files
└── README.md       # You are here!
```

All functions follow the 42 Norm and are memory-leak free! 🧹