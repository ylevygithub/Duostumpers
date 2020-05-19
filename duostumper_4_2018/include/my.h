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

void change_fridge(char *ingred, char *actual);
void my_check_loop(char *result, char **fridge, int *check);
int check_addfridge(char *result, char **fridge);
int check_space(char *result);
void create_addfridge(char **addfridge, char *result);
void malloc_fridge(char *result, char **addfridge);
int count_sizex(char *result, int *count);
char **fridge_base(void);
void my_addfridge(char **fridge, char **addfridge);
char *take_ingred(char *fridge);
void update_fridge(int size, char *ingred);
char *my_newcat(char *path, char *cmd);
void display_fridge(char **fridge);
void my_loop(void);
char *my_getline(void);
void my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);

char *int_to_str(int nb);
char **pasta(char **fridge);
char *change_cheese(char **fridge, int num, int num1);
char *change_ham(char **fridge, int num, int num1);
char *change_olive(char **fridge, int num, int num1);
char *change_pasta(char **fridge, int num, int num1);
char *change_tomato(char **fridge, int num, int num1);

char **pizza(char **fridge);
char *pizza_tomato(char **fridge, int num, int num1);
char *pizza_dough(char **fridge, int num, int num1);
char *pizza_onions(char **fridge, int num, int num1);
char *pizza_olive(char **fridge, int num, int num1);
char *pizza_peppers(char **fridge, int num, int num1);
char *pizza_ham(char **fridge, int num, int num1);
char *pizza_cheese(char **fridge, int num, int num1);


#endif
