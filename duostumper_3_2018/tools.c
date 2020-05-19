/*
** EPITECH PROJECT, 2019
** tools
** File description:
** tools
*/

#include "include/my.h"

void my_putchar(char display)
{
    write(1, &display, 1);
}

int my_putstr(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}

int my_strcpr(char *src, char *str)
{
    int index = 0;

    while (src[index] != '\0') {
        if (str[index] == src[index])
            index++;
        else
            return (-1);
    }
    return (1);
}

int my_strlen(char const *str)
{
    int index = 0;

    while (str[index] != '\0') {
        index = index + 1;
    }
    return (index);
}