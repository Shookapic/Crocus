/*
** EPITECH PROJECT, 2023
** second_part_numbers.c
** File description:
** second part numbers
*/

#include "my.h"

void five(char c, int i)
{
    if (i == 0)
        printf("%c%c%c%c%c", c, c, c, c, c);
    if (i == 1)
        printf("%c    ", c);
    if (i == 2)
        printf("%c%c%c%c ", c, c, c, c);
    if (i == 3)
        printf("    %c", c);
    if (i == 4)
        printf("%c%c%c%c ", c, c, c, c);
}

void six(char c, int i)
{
    if (i == 0)
        printf(" %c%c%c ", c, c, c);
    if (i == 1)
        printf("%c    ", c);
    if (i == 2)
        printf("%c%c%c%c ", c, c, c, c);
    if (i == 3)
        printf("%c   %c", c, c);
    if (i == 4)
        printf(" %c%c%c ", c, c, c);
}

void seven(char c, int i)
{
    if (i == 0)
        printf("%c%c%c%c%c", c, c, c, c, c);
    if (i == 1)
        printf("    %c", c);
    if (i == 2)
        printf("   %c ", c);
    if (i == 3)
        printf("  %c  ", c);
    if (i == 4)
        printf(" %c   ", c);
}

void eight(char c, int i)
{
    if (i == 0 || i == 2 || i == 4)
        printf(" %c%c%c ", c, c, c);
    else
        printf("%c   %c", c, c);
}

void nine(char c, int i)
{
    if (i == 0)
        printf(" %c%c%c ", c, c, c);
    if (i == 1)
        printf("%c   %c", c, c);
    if (i == 2)
        printf(" %c%c%c%c", c, c, c, c);
    if (i == 3)
        printf("    %c", c);
    if (i == 4)
        printf(" %c%c%c ", c, c, c);
}
