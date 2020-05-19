/*
** EPITECH PROJECT, 2018
** my header
** File description:
** header
*/

#ifndef MY_H_
#define MY_H_
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <fcntl.h>

typedef struct s_count
{
	int input_of_line;
	int nbr_of_line;
} line_manage;

int n_flagb(int ac, char **av, char *buffer, line_manage *line);
int v_flag(int ac, char **av, char *buffer, line_manage *line);
void hub_line_flag(char **dest, line_manage *line);
int main(int ac, char **av);
int error_open(int ac, char **av, int fd);
int my_strlen(char const *str);
int flag_c(int ac, char **av, int fd, char *buffer);
void hub_c(char *buffer, int size);
int str_to_int(char *str);
void my_putchar(char display);
int my_putstr(char *str);
char **tableau(char *buffer, line_manage *line);
int my_strcpr(char *src, char *str);
void hub_line_flag(char **dest, line_manage *line);
int check_string(char *str);
char *adress_move(char *str);
int my_strcpr_spec(char *src, char *str);
int zero_flag(int ac, char **av, char *buffer, line_manage *line);
int n_flag(int ac, char **av, char *buffer, line_manage *line);
int no_flag(int ac, char **av, char *buffer, line_manage *line);
void my_print_tab(char **tab, int length);
void my_print_tab_spec(char **tab, int length, int index);
void hub(char **dest, line_manage *line);

#endif 