/*
** EPITECH PROJECT, 2019
** cesar
** File description:
** my.h
*/

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*main.c*/
int check_args(int ac, char **av);
void cesar(int ac, char **av);
/*cesar.c*/
char *file_content(int ac, char **av);
int str_to_int(char *str);
int conversion(int ac, char **av);
char majormin(char letter);
char letter_decrypt(char letter, int key);
