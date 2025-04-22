#ifndef MAIN_H
#define MAIN_H

/* Librerias estandars permitidas */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>

/* Prototipos de funciones */

/**
 * promt_loop - Funcion principal del loop del shell
 */
void promt_loop(void);

/**
 * execute_command - Ejecuta un comando ingresado por el usuario
 * @args: lista de argumentos del comando
 * @argv: nombre del programa principal (argv[0])
 */
void execute_command(char **args, char *argv);

/**
 * parse_input - Divide una linea de entrada en tokens
 * @line: linea de entrada
 * Return: array de strings (tokens)
 */
char **parse_input(char *line);

/**
 * free_args - Libera la memoria de un array de strings
 * @args: argumentos a liberar
 */
void free_args(char **args);

#endif /* MAIN_H */
