#include "PWM.h"

void Delay_P(unsigned char unit)
{
    //  C.M    Periodo  Ciclo   Frec    Uso
    //  50      10us     1%     1KHz    PWM
    //  500     100us    10%    1KHz    PWM
    do
    {
        _delay(50);        //500 ciclos maquina
    } while(--unit != 0);
}

void PWM(unsigned const char Giro, unsigned char Duty_Cicle)
{
    //Tiempo Bajo
    PORTB = 0x00;
    Delay_P(100-Duty_Cicle);
    //Tiempo Alto
    PORTB = Giro;
    Delay_P(Duty_Cicle);
}
