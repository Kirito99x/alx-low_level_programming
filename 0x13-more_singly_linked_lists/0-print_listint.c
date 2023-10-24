#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_listint(const listint_t *h)
{
    size_t count = 0;  // Initialize count to zero

    while (h != NULL)
    {
        printf("%d\n", h->n);  // Print the current node's value
        h = h->next;  // Move to the next node
        count++;  // Increment the count
    }

    return count;  // Return the number of nodes
}
