/*
** EPITECH PROJECT, 2023
** lib.c
** File description:
** all lib funcs
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    if (str == NULL)
        return 0;
    while (str[i] != '\0')
        i++;
    return i;
}

char *my_strdup(char *str)
{
    char *dup = NULL;
    int size = my_strlen(str);
    int i = 0;

    if (str == NULL || size == 0)
        return NULL;
    dup = malloc(sizeof(char) * (size + 1));
    if (dup == NULL)
        return NULL;
    for (; str[i] != '\0'; i++)
        dup[i] = str[i];
    dup[i] = '\0';
    return dup;
}
