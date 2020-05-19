/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** lib functions
*/

#include "my.h"

int my_str_isnum(char *str)
{
    int i = 0;

    if (str[i] == '\0') {
        i++;
        return (1);
    }
    while (str[i] != '\0') {
        if (str[i] >= 48 && str[i] <= 57)
            i++;
        else if ((str[i] >= 0 && str[i] <= 47) ||
                 (str[i] >= 58 && str[i] <= 127))
            return (0);
    }
    return (1);
}

int my_str_isalpha(char *str)
{
    int i = 0;

    if (str[i] == '\0') {
        i++;
        return (1);
    }
    while (str[i] != '\0') {
        if ((str[i] >= 65 && str[i] <= 90) ||
            (str[i] >= 97 && str[i] <= 122))
            i++;
        else if ((str[i] >= 0 && str[i] <= 64) ||
                 (str[i] >= 91 && str[i] <= 96) ||
                 (str[i] >= 123 && str[i] <= 127))
            return (0);
    }
    return (1);
}
