#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"header.h"

void can_driver(can_protocol_t* ptr)
{
    if(ptr == NULL)
    {
        printf("There is no data\n");
        exit(1);
    }

    printf("Destination is 0x%x\n", ptr->dest);
    printf("Source is 0x%x\n", ptr->src);
    printf("Id is 0x%x\n", ptr->id);
    printf("payloade is 0x%x\n", ptr->data);

}