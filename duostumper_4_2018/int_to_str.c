/*
** EPITECH PROJECT, 2019
** int to str
** File description:
** int to str
*/

#include "include/my.h"

char *int_to_str(int nb)
{
    char *result;
    int size = 0;
    int tempnb = nb;
    int index;

    while (tempnb != 0) {
        tempnb = tempnb / 10;
        size++;
    }
    result = malloc(sizeof(char) * size + 1);
    index = size;
    result[index] = '\0';
    index = size - 1;
    while (index >= 0) {
        result[index] = (nb % 10) + '0';
        nb = nb / 10;
        index--;
    }
    return (result);
}
