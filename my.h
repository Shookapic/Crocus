/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** .h of stumper
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <stddef.h>

typedef struct data_s {
    char *number;
    char *string;
} data_t;

typedef struct draw_s {
    char c;
    void (*func)(char , int);
} draw_t;

void free_data(data_t *data);
int my_strlen(char *str);
int my_strcmp(char *s1, char *s2);
data_t *parse(char **array);
char *my_strdup(char *str);
void zero(char c, int i);
void one(char c, int i);
void two(char c, int i);
void three(char c, int i);
void four(char c, int i);
void five(char c, int i);
void six(char c, int i);
void seven(char c, int i);
void eight(char c, int i);
void nine(char c, int i);

#endif
