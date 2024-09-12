# ft_printf

## Descrição

O projeto **ft_printf** consiste em recriar a função `printf` da biblioteca padrão C.
O objetivo é entender profundamente como essa função é implementada e lidar com formatação de strings, inteiros, e diversos outros tipos de dados, além de aprender sobre gerenciamento de memória, buffers, e varargs (argumentos variáveis).

O projeto permite criar uma função `ft_printf` com um comportamento similar ao `printf`, suportando as principais opções de formatação, como `%d`, `%s`, `%x`, e `%p`.

## Estrutura do Projeto

ft_printf.c # Função principal de formatação e impressão
ft_printf_utils.c # Funções auxiliares
inc/ │ └── ft_printf.h # Cabeçalhos das funções e definições de tipos
Makefile # Compila a biblioteca ft_printf
README.md # Documentação do projeto

## Funcionalidades

A função `ft_printf` suporta as seguintes conversões de especificadores:

- `%c`: Caractere.
- `%s`: String (sequência de caracteres).
- `%p`: Ponteiro (endereços de memória).
- `%d` e `%i`: Inteiros com sinal (base 10).
- `%u`: Inteiros sem sinal (base 10).
- `%x` e `%X`: Inteiros hexadecimais (minúsculo e maiúsculo).
- `%%`: O caractere `%`.

## Instalação

Para compilar a biblioteca `ft_printf`, siga os passos abaixo:

1. Clone o repositório:

```bash
git clone https://github.com/seu-usuario/ft_printf.git
cd ft_printf
make
```
## Exemplos de como usar
```bash
#include "ft_printf.h"
```
## Compilação
```bash
gcc -Wall -Wextra -Werror -L. -lftprintf -o programa programa.c
```
## Execução do printf
```bash
ft_printf("Olá, %s! O número é %d.\n", "mundo", 42);
```


