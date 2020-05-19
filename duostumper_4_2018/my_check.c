/*
** EPITECH PROJECT, 2019
** my check
** File description:
** my check
*/

#include "include/my.h"

int check_addfridge(char *result, char **fridge)
{
    char **addfridge = malloc(sizeof(char *) * 4);
    addfridge[3] = NULL;

    malloc_fridge(result, addfridge);
    create_addfridge(addfridge, result);
    if (strcmp(addfridge[1], "tomato") == 0 ||
        strcmp(addfridge[1], "dough") == 0 || strcmp(addfridge[1], "onion") == 0 ||
        strcmp(addfridge[1], "pasta") == 0 || strcmp(addfridge[1], "olive") == 0 ||
        strcmp(addfridge[1], "pepper") == 0 || strcmp(addfridge[1], "ham") == 0 ||
        strcmp(addfridge[1], "cheese") == 0)
        my_addfridge(fridge, addfridge);
    else
        printf("'%s': Invalid operation\n", result);
    return (0);
}

int check_space(char *result)
{
    int index = 0;
    int check = 0;

    while (result[index] != '\0') {
        if (result[index] == ' ') {
            check++;
        }
        index++;
    }
    return (check);
}