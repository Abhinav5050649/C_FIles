#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node* next;
}
node;

int main()
{
    node* list = malloc(sizeof(node));
    if (list == NULL)
    {
        return -1;
    }

    node *n;

    int number_of_iterations = 0;
    printf("Enter number of numbers: ");
    scanf("%d", &number_of_iterations);

    int i = 0;
    for (node* tmp = list; i < number_of_iterations; i++, tmp = list -> next)
    {
        n = malloc(sizeof(node));
        if (n == NULL)
        {
            return -1;
        }

        printf("Enter a number: ");
        scanf("%d", &(n->number));
        n-> next = NULL;
        tmp -> next = n;
        list = tmp;
    }

    for (node* tmp = list; tmp != NULL; tmp = list->next)
    {
        printf("%d", tmp->number);
    }

    while (list != NULL)
    {
        node* temp = list;
        temp = list -> next;
        free(list);
        list = temp;
    }

    return 0;
}