/*
** EPITECH PROJECT, 2019
** crocus
** File description:
** main
*/

#include "my.h"

int check_arg1(int ac, char **av)
{
    if (ac == 4)
        return (-1);
    else if (ac == 5 && av[3][0] != '-')
        return (-1);
    return (0);
}

int check_arg(int ac, char **av)
{
    if (ac < 3 || av[1][0] != '-' ||
    ((av[1][1] == 'n') && (!my_str_isnum(av[2]))) ||
    ((av[1][1] == 's') && (!my_str_isalpha(av[2]))) || ac > 5)
        return (-1);
    else if (ac < 3 && (av[1][1] != 'n' || av[1][1] != 's'))
        return (-1);
    else if (ac == 5 && (av[1][1] == 'n' && !my_str_isnum(av[2]) || (av[3][1] == 's' && !my_str_isalpha(av[4]))))
        return (-1);
    return (0);
}

int main(int ac, char **av)
{
    int return_value;

    if (check_arg(ac, av) == -1)
        return (84);
    else if (check_arg1(ac, av) == -1)
        return (84);
    return (0);
}
