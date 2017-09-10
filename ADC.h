#ifndef ADC_H
#define	ADC_H

#ifdef	__cplusplus
extern "C" {
#endif

void Configuracion_ADC(const char AD0, const char AD1, const char AD2);
long ADC_A(void);


#ifdef	__cplusplus
}
#endif

#endif	/* ADC_H */

