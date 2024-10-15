/*
** EPITECH PROJECT, 2024
** my_params_to_list
** File description:
** my_params_to_list
*/

#include <stdlib.h>
#include <unistd.h>

#ifndef MY_LIST_H
#define MY_LIST_H

typedef struct linked_list {
     void *data;
     struct linked_list *next;
}

linked_list_t *my_params_to_list(int ac, char * const *av);
void my_show_list(struct linked_list *list);

#endif /* !MY_LIST_H_ */
