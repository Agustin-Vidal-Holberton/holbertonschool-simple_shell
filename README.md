# hsh - Simple Shell

`hsh` es una implementaciónba�sica de un shell en lenguaje C, inspirada en el shell original de Unix

## Características

- Modo interactivo y no interactivo
- Ejecución de comandos mediante `PATH`
- Manejo de procesos con `fork`, `execve`, y `wait`
- Manejo básico de errores
- Sin fugas de memoria
- Compatible con la salida estándar de `/bin/sh`

## Compilación

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

