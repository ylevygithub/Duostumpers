/*
** EPITECH PROJECT, 2019
** fridge
** File description:
** change to make the pasta
*/

#include "include/my.h"

char *change_tomato(char **fridge, int num, int num1)
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

char *change_pasta(char **fridge, int num, int num1)
{
    int i = 8;
    int count = 0;
    char nb[2];

    while (fridge[3][i] != '\n') {
        nb[count] = fridge[3][i];
        i++;
        count++;
    }
    num = atoi(nb);
    num1 = num - 2;
    char *str = int_to_str(num1);
    count = 0;
    i = 8;
    while (str[count] != '\0') {
        fridge[3][i] = str[count];
        count++;
        i++;
    }
    return (fridge[3]);
}

char *change_olive(char **fridge, int num, int num1)
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
    num1 = num - 6;
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

char *change_ham(char **fridge, int num, int num1)
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

char *change_cheese(char **fridge, int num, int num1)
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
