#include "list.h"
#include "common.h"
void  *diner();

int main(int argc, char **argv)
{
    printf("%s","222");
    list_t *list= list_create(diner());
    int i = list_size(list);
    printf("%d",i+11);
    return 1;
}
void *diner()
{
    return "dsfdsfd";
}