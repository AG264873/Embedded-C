#include "activity1.h"

#include <avr/io.h>

int fstactivity(void){
    DDRD = DDRD&0b11111101;//fd
    DDRD = DDRD|0b01000000;//40
    DDRB = DDRB&0b11111110;//fe


    while(1){
        if((PIND & 0b00000010)||(PINB & 0b0000001)==1){//02 & 01
            PORTD = PORTD&0b10111111;//bf
        }
        else{
            PORTD = PORTD|0b01000000;//40
        }
    }

}
