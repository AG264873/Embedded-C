//#include "activity3.h"

#include <avr/io.h>
#include <util/delay.h>
#include "activity2.h"

void trdactivity()
{
    InitADC();
    uint8_t temp;

    TCCR1A=(1<<COM1A1)|(1<<WGM11)|(WGM10);
    TCCR1B=(1<<WGM12)|(1<<CS11)|(1<<CS10);
    DDRD|=(1<<PD1);

    PORTB |= (1<<PB1);
        while(1)
        {
            temp = ReadADC(0);
            _delay_ms(1000);

            if(ADC <=200)
            {
             OCR1A=102;
            _delay_ms(200);
            }
            else if(ADC <= 500)
            {
            OCR1A=204;
            _delay_ms(200);
            }
            else if(ADC <= 700)
            {
            OCR1A=358;
            _delay_ms(200);
            }
            else if(ADC <= 1023)
            {
            OCR1A=484;
            _delay_ms(200);
            }
        }
}
