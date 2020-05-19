/*
** EPITECH PROJECT, 2018
** my
** File description:
** header file that contains the prototypes libmy
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#ifndef MY_H_
#define MY_H_

char **fridge_base(void);
void display_fridge(char **fridge);
void my_loop(void);
char *my_getline(void);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);

#endif
