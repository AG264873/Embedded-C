#include <avr/io.h>

/**
 * @brief In This activity we are we have two inputs as switches. And LED as Output.
 * @brief If both switches are on, the LED must be on, otherwise the LED must be off.
 *
 */

int fstactivity(void){
    DDRD = DDRD&0b11111101;//fd
    DDRD = DDRD|0b01000000;//40
    DDRB = DDRB&0b11111110;//fe


    if((PIND & 0b00000010)||(PINB & 0b0000001)==1){//02 & 01
        PORTD = PORTD&0b10111111;//bf
    }
    else{
        PORTD = PORTD|0b01000000;//40
    }
}
