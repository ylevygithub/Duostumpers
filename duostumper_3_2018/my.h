/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** my.h
*/

#include <unistd.h>
#include <stdlib.h>

void my_putchar(char c);
void my_putstr(char *str);
void my_putchar_error(char c);
void my_putstr_error(char *str);
void my_putmap(char **map);
int my_str_isnum(char *str);
int my_str_isalpha(char *str);
int my_strcmp(char *s1, char *s2);
char *my_strcpy(char *str);
int my_strlen(char *str);
char **my_str_to_word_array(char *str);
