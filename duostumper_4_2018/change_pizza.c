/*
** EPITECH PROJECT, 2019
** fridge
** File description:
** change ingredients to make a pizza
*/

#include "include/my.h"

char *pizza_tomato(char **fridge, int num, int num1)
{
    int i = 9;
    int count = 0;
    char nb[2];

    while (fridge[0][i] != '\n') {
        nb[count] = fridge[0][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 5;
    char *str = int_to_str(num1);
    count = 0;
    i = 9;
    while (str[count] != '\0') {
        fridge[0][i] = str[count];
        count++;
        i++;
    }
    return (fridge[0]);
}

char *pizza_dough(char **fridge, int num, int num1)
{
    int i = 8;
    int count = 0;
    char nb[2];

    while (fridge[1][i] != '\n') {
        nb[count] = fridge[1][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 1;
    char *str = int_to_str(num1);
    count = 0;
    i = 8;
    while (str[count] != '\0') {
        fridge[1][i] = str[count];
        count++;
        i++;
    }
    return (fridge[1]);
}

char *pizza_onions(char **fridge, int num, int num1)
{
    int i = 8;
    int count = 0;
    char nb[2];

    while (fridge[2][i] != '\n') {
        nb[count] = fridge[2][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 3;
    char *str = int_to_str(num1);
    count = 0;
    i = 8;
    while (str[count] != '\0') {
        fridge[2][i] = str[count];
        count++;
        i++;
    }
    return (fridge[2]);
}

char *pizza_olive(char **fridge, int num, int num1)
{
    int i = 8;
    int count = 0;
    char nb[2];

    while (fridge[4][i] != '\n') {
        nb[count] = fridge[4][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 8;
    char *str = int_to_str(num1);
    count = 0;
    i = 8;
    while (str[count] != '\0') {
        fridge[4][i] = str[count];
        count++;
        i++;
    }
    return (fridge[4]);
}

char *pizza_peppers(char **fridge, int num, int num1)
{
    int i = 9;
    int count = 0;
    char nb[2];

    while (fridge[5][i] != '\n') {
        nb[count] = fridge[5][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 8;
    char *str = int_to_str(num1);
    count = 0;
    i = 9;
    while (str[count] != '\0') {
        fridge[5][i] = str[count];
        count++;
        i++;
    }
    return (fridge[5]);
}
