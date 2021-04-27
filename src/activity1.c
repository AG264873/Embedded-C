#include "activity1.h"

#include <avr/io.h>

int fstactivity(void){
    DDRB = DDRB&0b11111101;//fd
    DDRC = DDRC|0b01000000;//40
    DDRB = DDRB&0b11111110;//fe


    while(1){
        if((PINB & 0b00000010)||(PINB & 0b0000001)==1){//02 & 01
            PORTC = PORTC&0b10111111;//bf
        }
        else{
            PORTC = PORTC|0b01000000;//40
        }
    }

}
