#include "common.h"
#include "list.h"

void  *dinner();
void sdfdsfds();

struct node{
    list_node *prev;
    list_node *next;
    void *item;
};

struct list{
    list_node *tail;
    list_node *head;
    int size;
    cmpfunc_t cmp_func;
};

/*
 * Creates a new, empty list that uses the given comparison function
 * to compare elements.  The comparison function accepts two elements,
 * and returns -1 if the first is smaller than the second, 1 if the
 * first is greater than the second, and 0 if the elements are equal.
 *
 * Returns the new list.
 */
list_t *list_create(cmpfunc_t cmpfunc)
{
    list_t *list=malloc(sizeof(list_t));
    list->cmp_func=cmpfunc;
    list->size=0;
    list->head=NULL;
    list->tail=NULL;
}

void sdfdsfds()
{
    list_create(dinner());
}
void *dinner()
{
    return "dsfdsfd";
}

/*
 * Destroys the given list.  Subsequently accessing the list
 * will lead to undefined behavior.
 */
void list_destroy(list_t *list)
{
    list_node *node=list->head;
    list_node *tmp=node;
    while(node!=NULL)
    {
        tmp=node->next;
        free(node);
        node=tmp;
    }
}

/*
 * Returns the current size of the given list.
 */
int list_size(list_t *list)
{
  
    return list->size;
}

/*
 * Adds the given element to the start of the given list.
 * Returns 1 on success, and 0 if the operation failed.
 */
int list_addfirst(list_t *list, void *elem)
{
    if(list==NULL)
    {
        return 1;
    }
    list_node *node =malloc(sizeof(list_node));
    node->item=elem;
    list->head=node;
    return 0;
}

/*
 * Adds the given element to the end of the given list.
 * Returns 1 on success, and 0 if the operation failed.
 */
int list_addlast(list_t *list, void *elem);

/*
 * Removes and returns the first element of the given list.
 */
void *list_popfirst(list_t *list)
{

}

/*
 * Removes and returns the last element of the given list.
 */
void *list_poplast(list_t *list)
{
    return 1;
}

/*
 * Returns 1 if the given list contains the given element, 0 otherwise.
 *
 * The comparison function of the list is used to check elements for equality.
 */
int list_contains(list_t *list, void *elem)
{
    return 1;
}
/*
 * Sorts the elements of the given list, using the comparison function
 * of the list to determine the ordering of the elements.
 */
void list_sort(list_t *list)
{

}

struct list_iter{
    int dd;
};

/*
 * Creates a new list iterator for iterating over the given list.
 */
list_iter_t *list_createiter(list_t *list)
{
    list_iter_t *clist=malloc(sizeof(list_iter_t));
    return clist;
}

/*
 * Destroys the given list iterator.
 */
void list_destroyiter(list_iter_t *iter)
{

}

/*
 * Returns 0 if the given list iterator has reached the end of the
 * list, or 1 otherwise.
 */
int list_hasnext(list_iter_t *iter)
{
    return 1;
}

/*
 * Returns the next element in the sequence represented by the given
 * list iterator.
 */
void *list_next(list_iter_t *iter)
{

}




