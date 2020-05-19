/*
** EPITECH PROJECT, 2019
** my fridge
** File description:
** my fridge
*/

#include "include/my.h"

char **fridge_base(void)
{
    char **fridge = malloc(sizeof(char *) * 9);
    int index = 0;

    if (fridge == NULL)
        return (NULL);

    fridge[0] = strdup("tomato = 50\n\0");
    fridge[1] = strdup("dough = 50\n\0");
    fridge[2] = strdup("onion = 50\n\0");
    fridge[3] = strdup("pasta = 50\n\0");
    fridge[4] = strdup("olive = 50\n\0");
    fridge[5] = strdup("pepper = 50\n\0");
    fridge[6] = strdup("ham = 50\n\0");
    fridge[7] = strdup("cheese = 50\n\0");
    fridge[8] = NULL;

    return (fridge);
}

void create_addfridge(char **addfridge, char *result)
{
    int index = 0;
    int y = 0;
    int x = 0;

    while (result[index] != '\0') {
        if (result[index] == ' ') {
            addfridge[y][x] = '\0';
            y++;
            x = 0;
            index++;
        }
        addfridge[y][x] = result[index];
        index++;
        x++;
    }
}

void change_fridge(char *ingred, char *actual)
{
    int index = 0;
    int findex = 0;

    while (ingred[index] != '\0') {
        if (ingred[index] >= '0' && ingred[index] <= '9') {
            ingred[index] = actual[findex];
            findex++;
        }
        index++;
    }
}

char **pasta(char **fridge)
{
    int num;
    int num1;

    fridge[0] = change_tomato(fridge, num, num1);
    fridge[3] = change_pasta(fridge, num, num1);
    fridge[4] = change_olive(fridge, num, num1);
    fridge[6] = change_ham(fridge, num, num1);
    fridge[7] = change_cheese(fridge, num, num1);
    return (fridge);
}

char **pizza(char **fridge)
{
    int num;
    int num1;

    fridge[0] = pizza_tomato(fridge, num, num1);
    fridge[1] = pizza_dough(fridge, num, num1);
    fridge[2] = pizza_onions(fridge, num, num1);
    fridge[4] = pizza_olive(fridge, num, num1);
    fridge[5] = pizza_peppers(fridge, num, num1);
    fridge[6] = pizza_ham(fridge, num, num1);
    fridge[7] = pizza_cheese(fridge, num, num1);
    return (fridge);
}
