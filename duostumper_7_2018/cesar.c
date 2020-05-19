/*
** EPITECH PROJECT, 2019
** cesar
** File description:
** cesar
*/

#include "my.h"

char *file_content(int ac, char **av)
{
    const char *pathname = av[2];
    int size;
    int fd;
    char *buff;

    if (av[1][0] == '-' && av[1][1] == 'f') {
        fd = open(pathname, O_RDONLY);
        struct stat jack;
        stat(pathname, &jack);
        size = jack.st_size;
        buff = malloc(sizeof(char) * (size + 1));
        read(fd, buff, size);
        buff[size] = '\0';
        return (buff);
    }
    else if (av[1][0] == '-' && av[1][1] == 's')
    {
        buff = av[2];
        return (buff);
    }
}

int str_to_int(char *str)
{
    int result = 0;
    int index = 0;
    int neg = 1;

    while (str[index] <= '9' && str[index] >= '0' || str[index] == '-') {
        if (str[index] == '-')
            neg = neg * -1;
        else
            result = (10 * result) + str[index] - '0';
        index++;
    }
    result = result * neg;
    return (result);
}

int conversion(int ac, char **av)
{
    int i = str_to_int(av[3]);
    return (i);
}

char majormin(char letter)
{
    if (letter >= 'a' && letter <= 'z')
        return ('a');
    else if (letter >= 'A' && letter <= 'Z')
        return ('A');
    else
        return (letter);
}

int key_neg(char letter)
{
    int i = 0;

    while (letter != 'a') {
        i++;
        letter++;
    }
    return (i);
}

char letter_decrypt(char letter, int key)
{
    char var = majormin(letter);
    char new_letter;

    if (key >= 0 && letter >= 'a' && letter <= 'z' ||
    letter >= 'A' && letter <= 'Z') {
        new_letter = (letter - var + key) %26 + var;
        return (new_letter);
    }
    else if (key < 0 && letter >= 'a' && letter <= 'z' ||
    letter >= 'A' && letter <= 'Z') {
        if (letter + key < 'a') {
            new_letter = (letter - var + key) %26 + var;//key_neg(letter);
            printf("%d", key_neg('['));
            return (new_letter);
        }
        else {
            new_letter = (letter - var + key) %26 + var;
            return (new_letter);
        }
    }
    else
        return (letter);
}

