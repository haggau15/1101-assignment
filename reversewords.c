#include "list.h"
#include "common.h"
void  *diner();

int main(int argc, char **argv)
{
    list_t *list= list_create(diner());
    int i = list_size(list);
    printf("%d\n",i+11);
    return 1;
    return 0;
}
void *diner()
{
    return "dsfdsfd";
}