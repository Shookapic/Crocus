/*
** EPITECH PROJECT, 2023
** firs_part_numbers
** File description:
** ascii_art_numbers_0_to_4
*/

#include <stdio.h>
#include <stdlib.h>

void zero(char c, int i)
{
    if (i == 0 || i == 4) {
        printf("%c%c%c%c%c", ' ', c, c, c, ' ');
    }
    if (i > 0 && i < 4) {
        printf("%c%c%c%c%c", c, ' ', ' ', ' ', c);
    }
}

void one(char c, int i)
{
    if (i == 0) {
        printf("%c%c%c%c%c", ' ', c, c, c, ' ');
    }
    if (i == 1) {
        printf("%c%c%c%c%c", c, ' ', c, c, ' ');
    }
    if (i == 2 || i == 3) {
        printf("%c%c%c%c%c", ' ', ' ', c, c, ' ');
    }
    if (i == 4) {
        printf("%c%c%c%c%c", ' ', c, c, c, c);
    }
}

void two(char c, int i)
{
    if (i == 0) {
        printf("%c%c%c%c%c", ' ', c, c, c, ' ');
    }
    if (i == 1) {
        printf("%c%c%c%c%c", c, ' ', ' ', ' ', c);
    }
    if (i == 2) {
        printf("%c%c%c%c%c", ' ', ' ', ' ', c, ' ');
    }
    if (i == 3) {
        printf("%c%c%c%c%c", ' ', c, ' ', ' ', ' ');
    }
    if (i == 4) {
        printf("%c%c%c%c%c", c, c, c, c, c);
    }
}

void three(char c, int i)
{
    if (i == 0 || i == 4) {
        printf("%c%c%c%c%c", c, c, c, c, ' ');
    }
    if (i == 1 || i == 3) {
        printf("%c%c%c%c%c", ' ', ' ', ' ', ' ', c);
    }
    if (i == 2) {
        printf("%c%c%c%c%c", ' ', c, c, c, ' ');
    }
}

void four(char c, int i)
{
    if (i == 0) {
        printf("%c%c%c%c%c", ' ', ' ', c, c, ' ');
    }
    if (i == 1) {
        printf("%c%c%c%c%c", ' ', c, ' ', c, ' ');
    }
    if (i == 2) {
        printf("%c%c%c%c%c", c, ' ', ' ', c, ' ');
    }
    if (i == 3) {
        printf("%c%c%c%c%c", c, c, c, c, c);
    }
    if (i == 4) {
        printf("%c%c%c%c%c", ' ', ' ', ' ', c, ' ');
    }
}
