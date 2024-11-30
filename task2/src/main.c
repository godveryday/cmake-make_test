#include<stdio.h>
#include"header.h"

int main()
{
    can_protocol_t *ptr = can_init();
    can_driver(ptr);

    return 0;
}