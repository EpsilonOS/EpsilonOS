#include "port.h"

unsigned char port_byte_in(unsigned short port){
    unsigned char result;
    asm volatile("inb %1, %0" : "=a"(result) : "Nd"(port));
    return result;
}

void port_byte_out(unsigned short port,unsigned char result){
    asm volatile("outb %0, %1" : : "a"(result), "Nd"(port));
}