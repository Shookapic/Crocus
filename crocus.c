/*
** EPITECH PROJECT, 2023
** crocus.c
** File description:
** crocus project
*/

#include "my.h"

void draw_char(data_t *data, char nb, int i, int j)
{
    char c = '0';
    bool end = false;
    int len = my_strlen(data->string);
    draw_t functions[] = {
        {'0', zero}, {'1', one}, {'2', two},
        {'3', three}, {'4', four}, {'5', five},
        {'6', six}, {'7', seven}, {'8', eight},
        {'9', nine}
    };
    for (int k = 0; k < 10; k++) {
        c = data->string != NULL ? data->string[k % len] : '0';
        if (nb == functions[k].c) {
            functions[k].func(c, i);
            end = true;
        } if (end && j + 1 < my_strlen(data->number)) {
            printf(" ");
            return;
        }
    }
}

void generate_chars(data_t *data)
{
    for (int i = 0; i < 5; i++) {
        for (int j = 0; data->number[j] != '\0'; j++)
            draw_char(data, data->number[j], i, j);
        printf("\n");
    }
}

int main(int ac, char **av)
{
    data_t *data = NULL;

    if (ac < 3 || ac > 5 || ac == 4)
        return 84;
    data = parse(av);
    if (data == NULL || data->number == NULL)
        return 84;
    generate_chars(data);
    free_data(data);
    return 0;
}
