Functions in this directory deal with adding , changing and manipulating linked \
lists

0-print_listint.c - Prints all the elements of a linked list of ints
Prototype: size_t print_listint(const listint_t *h);

1-listint_len.c - returns the number of elements in a linked list
Prototype: size_t listint_len(const listint_t *h);

2-add_nodeint.c - Adds a new node at the beginning of a linked list
Prototype: listint_t *add_nodeint(listint_t **head, const int n);

3-add_nodeint_end.c - function that adds a new node at the end of a linked list
Prototype: 3-add_nodeint_end.c

4-free_listint.c - function that free's a linked list
Prototype: void free_listint(listint_t *head);

5-free_listint2.c - function that free's a linked list
Prototype: void free_listint2(listint_t **head);

6-pop_listint.c - deletes head node of linked list, returns the head node's data\
(n)
Prototype: int pop_listint(listint_t **head);
