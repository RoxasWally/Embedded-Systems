/*
 * Project1 - 145.c
 *
 * Created: 1/23/2022 5:10:50 PM
 */ 

#include <avr/io.h>
#include "avr.h"

//functions
void wait();

int main(void)
{
   //Set up
    DDRB = 0b00000001;
    //PORTB = 0;
    //PINB&2 = 1;
    
    while (1) 
    {
        if(!(PINB&2))
        {
            PORTB = 1;
            wait();
            PORTB = 0;
            wait();
        }
        
    }
}

void wait(void)
{
    volatile int i;
    for(i = 0; i < 31500; i++);
}