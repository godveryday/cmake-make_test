#ifndef HEADER_H
#define HEADER_H
#include<stdio.h>
#include<stdint.h>

typedef struct can_protocol
{
    uint8_t dest;
    uint8_t src;
    uint8_t id;
    uint8_t data;

}can_protocol_t;


can_protocol_t* init_can(void);
void can_driver(can_protocol_t *ptr);
can_protocol_t* can_init();

#endif