/*
** EPITECH PROJECT, 2019
** cesar
** File description:
** main
*/

#include "my.h"

void cesar(int ac, char **av)
{
    int i = 0;
    int key = conversion(ac, av);
    int neg = (key %26) * -1;
    int counter = 0;
    char *buff = file_content(ac, av);
    char tmp = buff[i] + key;
    const char *pathname = "crypt";
    int fd = open(pathname, O_RDWR | O_CREAT, 0444);


    while (buff[i] != 0) {
        buff[i] = letter_decrypt(buff[i], key);
        i++;
    }
    write(fd, buff, strlen(buff));
    printf("%s", buff);
    close(fd);
}

int check_args(int ac, char **av)
{
    int fd;

    if (ac != 4)
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    if (check_args(ac, av) == 1)
        return (84);
    cesar(ac, av);
    return (0);
}
