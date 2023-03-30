/*
** EPITECH PROJECT, 2023
** my_cmps.c
** File description:
** all cmp funcs
*/

#include "my.h"

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    if (s1 == NULL && s2 != NULL)
        return -1;
    if (s2 == NULL && s1 != NULL)
        return 1;
    if (s1 == NULL && s2 == NULL)
        return 0;
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
        i++;
    }
    if (s1[i] == s2[i])
        return 0;
    return s1[i] > s2[i] ? 1 : -1;
}

int my_strncmp(char *s1, char *s2, int n)
{
    int i = 0;

    if (s1 == NULL && s2 != NULL)
        return -1;
    if (s2 == NULL && s1 != NULL)
        return 1;
    if (s1 == NULL && s2 == NULL)
        return 0;
    while (s1[i] != '\0' && s2[i] != '\0' && i < n) {
        if (s1[i] > s2[i])
            return 1;
        if (s1[i] < s2[i])
            return -1;
        i++;
    }
    if (s1[n - 1] == s2[n - 1])
        return 0;
    return s1[i] > s2[i] ? 1 : -1;
}
