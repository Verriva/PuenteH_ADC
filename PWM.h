#ifndef PWM_H
#define	PWM_H

#include <xc.h> // include processor files - each processor file is guarded.  

#ifdef	__cplusplus
extern "C" {
#endif 
    
void PWM(unsigned const char Giro, unsigned char Duty_Cicle);
void Delay_P(unsigned char unit);

#ifdef	__cplusplus
}
#endif 

#endif	

