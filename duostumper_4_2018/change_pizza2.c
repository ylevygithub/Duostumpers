/*
** EPITECH PROJECT, 2019
** fridge
** File description:
** change ingredients to make a pizza
*/

#include "include/my.h"

char *pizza_ham(char **fridge, int num, int num1)
{
    int i = 6;
    int count = 0;
    char nb[2];

    while (fridge[6][i] != '\n') {
        nb[count] = fridge[6][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 4;
    char *str = int_to_str(num1);
    count = 0;
    i = 6;
    while (str[count] != '\0') {
        fridge[6][i] = str[count];
        count++;
        i++;
    }
    return (fridge[6]);
}

char *pizza_cheese(char **fridge, int num, int num1)
{
    int i = 9;
    int count = 0;
    char nb[2];

    while (fridge[7][i] != '\n') {
        nb[count] = fridge[7][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 3;
    char *str = int_to_str(num1);
    count = 0;
    i = 9;
    while (str[count] != '\0') {
        fridge[7][i] = str[count];
        count++;
        i++;
    }
    return (fridge[7]);
}