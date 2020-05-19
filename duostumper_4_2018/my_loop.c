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
    char **fridge = fridge_base();
    int check = 0;

    while (1) {
        check = 0;
        result = my_getline();
        my_check_loop(result, fridge, &check);
        if (strcmp(result, "exit") == 0) {
            exit(0);
            check = 1;
        }
        else if (check_space(result) == 2) {
            check_addfridge(result, fridge);
            check = 1;
        }
        else if (check != 1)
            printf("'%s': Invalid operation\n", result);
    }
}

void my_check_loop(char *result, char **fridge, int *check)
{
    if (strcmp(result, "disp fridge") == 0) {
        display_fridge(fridge);
        *check = 1;
    }
    else if (strcmp(result, "make pasta") == 0) {
        fridge = pasta(fridge);
        *check = 1;
    }
    else if (strcmp(result, "make pizza") == 0) {
        fridge = pizza(fridge);
        *check = 1;
    }
}

void my_addfridge(char **fridge, char **addfridge)
{
    int size = atoi(addfridge[2]);
    int index = 0;
    char *ingred = NULL;

    while (fridge[index] != NULL) {
        ingred = take_ingred(fridge[index]);
        if (strcmp(ingred, addfridge[1]) == 0)
            update_fridge(size, fridge[index]);
        index++;
    }
}

char *my_newcat(char *path, char *cmd)
{
    int lenght = strlen(path);
    int addingLength = strlen(cmd);
    char *newStr = malloc(lenght + 1 + addingLength);
    int index = 0;

    newStr[lenght + addingLength] = '\0';
    while (path[index])
        newStr[index++] = path[index];
    for (int i = 0; cmd[i]; i++)
        newStr[index++] = cmd[i];
    return (newStr);
}

void update_fridge(int size, char *ingred)
{
    int index = 0;
    int check = 0;
    int findex = 0;
    int actualint = 0;
    char *actual = malloc(sizeof(char) * 50);

    while (ingred[index] != '\n') {
        if (ingred[index] >= '0' && ingred[index] <= '9')
            check = 1;
        if (check == 1) {
            actual[findex] = ingred[index];
            findex++;
        }
        index++;
    }
    actual[findex] = '\0';
    actualint = atoi(actual);
    actualint = actualint + size;
    actual = int_to_str(actualint);
    change_fridge(ingred, actual);
}

char *take_ingred(char *fridge)
{
    int index = 0;
    char *ingred = malloc(sizeof(char) * 12);
    while (fridge[index] != '\0') {
        if (fridge[index] == ' ') {
            ingred[index] = '\0';
            return (ingred);
        }
        ingred[index] = fridge[index];
        index++;
    }
    return (ingred);
}