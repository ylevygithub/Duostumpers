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

int count_sizex(char *result, int *count)
{
    int index = 0;
    
    while (result[(*count)] != ' ' && result[(*count)] != '\0') {
        (*count)++;
        index++;
    }
    (*count)++;
    return (index);
}

void malloc_fridge(char *result, char **addfridge)
{
    int index = 0;
    int count = 0;
    int sizeX = 0;

    while (index != 3) {
        sizeX = count_sizex(result, &count);
        addfridge[index] = malloc(sizeof(char) * (sizeX + 1));
        addfridge[sizeX + 1] = '\0';
        index++;
    }
}