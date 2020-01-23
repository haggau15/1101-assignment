#include "list.h"
#include "common.h"
void  *diner();

int main(int argc, char **argv)
{
    list_t *list= list_create(diner());
    int i=list_size(list);
    printf("%d",i);
    return 0;
}
void *diner()
{
    return "dsfdsfd";
}