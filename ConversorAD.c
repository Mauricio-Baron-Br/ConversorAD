/****************************************************************/
#include<16f877.h>
#use delay(clock=4000000)
#use fast_io(B)
#fuses NOWDT, XT, PUT, NOPROTECT, NOBROWNOUT, NOLVP, NOCPD, NOWRT

/********************************************************/
void main()
{
   setup_adc_ports(RA0_ANALOG);//configura o AD como entrada no canal RA0
   setup_adc(ADC_CLOCK_DIV_32);//configura clock do AD como principal/32
   set_tris_b(0);//PORTB como saida
   output_b(0);//zera a porta
   while(1)
   {
      output_b(read_adc());//leitura do valor AD
      delay_ms(50);
   }
   
}
