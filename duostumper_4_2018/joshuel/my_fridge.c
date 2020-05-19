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