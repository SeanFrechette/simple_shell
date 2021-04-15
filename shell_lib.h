#ifndef shell_lib
#define shell_lib

/* Libraries */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/* Helper Functions */
char *_strncpy(char *dest, char *src, int n);
char *_strncpyconst(char *dest, const char *src, int n);
unsigned int _strlen_const(const char *name);
int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);

/* Built-ins */
void builtin_env(void);
void builtin_exit(char **cmd, char *b);

#endif
