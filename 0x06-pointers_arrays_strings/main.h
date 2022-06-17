#ifndef MAIN_H
#define MAIN_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);

#endif /* MAIN_H */
