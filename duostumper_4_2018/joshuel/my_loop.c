/*
** EPITECH PROJECT, 2019
** my loop
** File description:
** my loop
*/

#include "include/my.h"

void my_loop(void)
{
    char *result = NULL;
    char **fridge = NULL;

    while (1) {
        result = my_getline();
        if (strcmp(result, "disp fridge") == 0) {
            fridge = fridge_base();
            display_fridge(fridge);
        }
        else if (strcmp(result, "exit\0") == 0)
            exit(0);
        else
            printf("'%s': Invalid operation\n", result);
    }
}