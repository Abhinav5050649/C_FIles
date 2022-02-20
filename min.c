#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int number;
    struct node* next;
}
node;

int main()
{
    node *list =  malloc(sizeof(node));
    if (list == NULL)
    {
        return -1;
    }

    node *tmp = malloc(sizeof(node));
    if (tmp == NULL)
    {
        return -1;
    }

    node *n;
    for (int i = 0; i < 5; tmp = tmp -> next, i++)
    {
        printf("Enter a number: ");
        n = malloc(sizeof(node));
        if (n == NULL)
        {
            return -1;
        }

        scanf("%d", &n->number);
        n-> next = NULL;
        tmp = n;
    }
    
    for (node* temp = list; temp != NULL; temp = temp -> next)
    {
        printf("Numbers: %d\n", temp-> number);
    }

    while (list != NULL)
    {
        node *t = list;
        t = list -> next;
        free(list);
        list = t;
    }


    return 0;
}