#ifndef SHELL_H
#define SHELL_H

/* Standard Headers */
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
* struct function - Struct that holds different functions
* @type: Type of function to use
* @function: Pointer to the function via type
*/

typedef struct functions
{
	 char type;
	 char *(*function)(va_list);

} func_t;

/*function pointers*/
/**
* struct _builtin_ - Pointers built in functions
* @command: Commands
* @function: Functions
*/
typedef struct _builtin_
{
	char **command;
	void (*function)(char *);
} built_in;

/* Things for strings */
int _putchar(char c);
int _strlen(char *s);
char *_strcat(char *str1, char *str2);
int _strcmp(char *s1, char *s2);
char *_strcpy(char *dest, char *src);
char *_strdup(char *str);
char *_strtok(char *str, char *separator, int flag);
