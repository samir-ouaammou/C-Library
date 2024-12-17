
# 🛠️ libft - 1337 School Project

Welcome to my **libft** repository! 🚀  
The **libft** project is an essential part of the **1337 School** curriculum, where I implemented various functions from the C standard library to deepen my understanding of C programming, memory management, and pointers.

## 📊 Project Overview

The **libft** project involves creating your own versions of several standard C library functions. These functions include string manipulation, memory allocation, and file handling. It is a key project that helps solidify the foundations of system-level programming in C.

## 🔧 Functions Implemented

- **String Functions:**
  - `ft_strlen()`
  - `ft_strcpy()`
  - `ft_strdup()`
  - `ft_strcmp()`
  - `ft_strcat()`
  - `ft_strchr()`
  - `ft_strrchr()`
  - `ft_strncat()`
  - `ft_strncmp()`
  - `ft_strlcpy()`
  - `ft_strlcat()`

- **Memory Functions:**
  - `ft_memset()`
  - `ft_bzero()`
  - `ft_memcpy()`
  - `ft_memmove()`
  - `ft_memchr()`
  - `ft_memcmp()`
  - `ft_calloc()`

- **Character Functions:**
  - `ft_isalpha()`
  - `ft_isdigit()`
  - `ft_isalnum()`
  - `ft_isascii()`
  - `ft_isprint()`
  - `ft_toupper()`
  - `ft_tolower()`

- **Other Functions:**
  - `ft_itoa()`
  - `ft_strsplit()`
  - `ft_strjoin()`
  - `ft_strtrim()`
  - `ft_lstnew()`
  - `ft_lstadd_front()`
  - `ft_lstadd_back()`
  - `ft_lstdelone()`
  - `ft_lstclear()`
  - `ft_lstiter()`
  - `ft_lstmap()`

## 📋 Project Structure

The project is structured as follows:

```
libft/
│
├── src/          # Source files for the library functions
│
├── include/      # Header files
│   └── libft.h   # Header file with function prototypes
│
├── Makefile      # Makefile to compile the project
└── README.md     # Project documentation
```

## 📂 Usage

To use the functions in your project, include the header file `libft.h` and compile the source files along with your main program. Here's an example of how to use the `ft_strlen` function:

```c
#include "libft.h"

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("Length of the string: %d
", len);
    return 0;
}
```

## 🛠️ Installation

1. Clone the repository to your local machine:
   ```bash
   git clone https://github.com/samir-ouaammou/1337-Libft
   ```

2. Navigate to the project directory:
   ```bash
   cd 1337-Libft
   ```

3. Compile the source files using `make`:
   ```bash
   make
   ```

4. Clean up compiled files:
   ```bash
   make clean
   ```

5. To remove all object files and the executable:
   ```bash
   make fclean
   ```

6. To recompile the project from scratch:
   ```bash
   make re
   ```

## 🎯 Challenges Overcome

Throughout this project, I encountered and overcame challenges such as:
- Implementing memory management functions without using the standard library.
- Understanding the nuances of pointers and memory allocation.
- Ensuring efficient and error-free string manipulation.

## 🏆 Key Achievements

- Mastered key concepts in C programming such as memory management, pointers, and recursion.
- Built reusable, efficient functions that mimic the behavior of the C standard library.
- Gained confidence in system-level programming and debugging techniques.

## 🚀 Next Steps

With **libft** completed, I am now focused on:
- Building advanced projects like **ft_printf** and **Born2beroot**.
- Improving my knowledge of system programming and Linux internals.
- Expanding my skills in algorithms and data structures.

## 🌟 Reflection

The **libft** project was a challenging yet rewarding experience. It pushed me to think critically about memory, pointers, and efficient code writing. I am excited to apply the skills I gained to more complex projects and continue learning and growing as a programmer.

---

Thank you for checking out my **libft** project! 🚀 Stay tuned for more updates as I continue to enhance my skills and tackle new challenges.
