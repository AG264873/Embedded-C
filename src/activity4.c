#include <avr/io.h>
#include <util/delay.h>

int temperature;
void USARTInit(uint16_t ubrr_value)
{

    //set baudrate

    UBRR0L = ubrr_value;
    UBRR0H = (ubrr_value>>8)&0x00ff;
    UCSR0C =(1<<UMSEL00)|(1<<UCSZ01)|(1<<UCSZ00);

    //

    UCSR0B=(1<<RXEN0)|(1<<TXEN0)|(1<<RXCIE0)|(1<<TXCIE0);

}

char USARTReadChar()
{

    while(!(UCSR0A & (1<<RXC0)))
    {
        //DO NOTHING
    }


    return UDR0;
}

char USARTWriteChar(char data)
{
    while(!(UCSR0A & (1<<UDRE0)))
    {
        //DO NOTHING
    }

    UDR0 = data;
}

void frthactivity()
{
    DDRB|=(1<<PB1);
    USARTInit(103);
    {
        USARTWriteChar(temperature);
        _delay_ms(100);
    }

}
