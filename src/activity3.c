#include <avr/io.h>
#include <util/delay.h>
#include "activity1.h"
#include "activity2.h"
#include "activity4.h"

int temperature = 0;

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
                temperature = 20;
                frthactivity();
                OCR1A=102;
                _delay_ms(200);
            }
            else if(ADC <= 500)
            {
                temperature = 25;
                frthactivity();
                OCR1A=204;
                _delay_ms(200);
            }
            else if(ADC <= 700)
            {
                temperature = 29;
                frthactivity();
                OCR1A=358;
                _delay_ms(200);
            }
            else if(ADC <= 1023)
            {
                temperature = 33;
                frthactivity();
                OCR1A=484;
                _delay_ms(200);
            }

	    fstactivity();
        }
}
