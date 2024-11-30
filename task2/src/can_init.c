#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"header.h"

can_protocol_t* can_init()
{
    can_protocol_t *ptr = (can_protocol_t*)malloc(sizeof(can_protocol_t));
    ptr->dest = 0b11111111;
    ptr->src = 0b00000000;
    ptr->id = 0b01010101;
    ptr->data = 0b00001111;

    return ptr;
}