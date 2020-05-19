/*
** EPITECH PROJECT, 2019
** tools
** File description:
** tools
*/

#include "include/my.h"

char *my_getline(void)
{
    char *file;
    char *newfile = NULL;
    int line = 0;
    int index = -1;

    if (getline(&file, &(ssize_t){0}, stdin) == -1)
        exit (0);
    while (file[++index] != '\n' && file[index]);
    file[index] = '\0';
    newfile = strdup(file);
    free(file);
    return (newfile);
}

void display_fridge(char **fridge)
{
    for (int i = 0; fridge[i] != NULL; i++)
        printf("%s", fridge[i]);
}