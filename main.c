#include "main.h"

/**
 * main - entrada principal del programa shell
 * @argc: numero de argumentos
 * @argv: vector de argumentos
 * Return: 0 al salir
 */

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	write(STDOUT_FILENO, "hsh: shell inicializado\n", 24);

	return (0);
}
