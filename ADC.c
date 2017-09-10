#include "ADC.h"
#include <pic18f4550.h>


void Configuracion_ADC(const char AD0, const char AD1, const char AD2)
{
    ADCON0 = AD0;   // #define ADC0 0x00          0x00;
    ADCON1 = AD1;   // #define ADC1 0x0E          0x0E;
    ADCON2 = AD2;   // #define ADC2 0x95          0x95;
    
    ADCON0bits.ADON = 1;
}

long ADC_A(void)
{
    long Medicion;
    
    while(ADCON0bits.GO) 
    {
        /*Toma el dato y realiza la conversion*/
        Medicion =(ADRESH<<8) + ADRESL;     //La obtencion de datos
    }
    
    return Medicion;
}
