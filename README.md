# Creating the content of the README file
readme_content = """
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


libft/ │ ├── src/ # Source files for the library functions │ ├── include/ # Header files │ └── libft.h # Header file with function prototypes │ ├── Makefile # Makefile to compile the project └── README.md # Project documentation


## 📂 Usage

To use the functions in your project, include the header file `libft.h` and compile the source files along with your main program. Here's an example of how to use the `ft_strlen` function:

```c
#include "libft.h"

int main() {
    char *str = "Hello, world!";
    int len = ft_strlen(str);
    printf("Length of the string: %d\n", len);
    return 0;
}

🛠️ Installation
Clone the repository to your local machine:

git clone https://github.com/yourusername/libft.git
