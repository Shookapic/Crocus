/*
** EPITECH PROJECT, 2023
** parser.c
** File description:
** parsing
*/

#include "my.h"

int my_arraylen(char **arr)
{
    int i = 0;

    for (; arr != NULL && arr[i] != NULL; i++);
    return i;
}

void free_data(data_t *data)
{
    if (data == NULL)
        return;
    if (data->number != NULL)
        free(data->number);
    if (data->string != NULL)
        free(data->string);
    free(data);
}

bool is_num(char *str)
{
    if (str == NULL)
        return false;
    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] < '0' || str[i] > '9')
            return false;
    return true;
}

data_t *parse(char **array)
{
    data_t *data = NULL;
    int len = my_arraylen(array);

    data = malloc(sizeof(data_t));
    if (data == NULL)
        return NULL;
    for (int i = 1; i < len; i++) {
        if (my_strcmp("-n", array[i]) == 0)
            data->number = array[i + 1] != NULL && is_num(array[i + 1]) ?
                my_strdup(array[i + 1]) : data->number;
        if (my_strcmp("-s", array[i]) == 0)
            data->string = array[i + 1] != NULL ?
                my_strdup(array[i + 1]) : data->string;
    }
    return data;
}
