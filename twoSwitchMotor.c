/*
MCU: ATMEGA328P-PN
Driver: VNH7070BASTR
*/

#include <xc.h>
#include <avr/io.h>
#include <avr/interrupt.h>
#include <stdint.h>

#define IN_A PORTB |= (1 << PB6)
#define IN_B PORTB |= (1 << PB7)
#define SEL0 PORTD |= (1 << PD5)
#define CS PORTD |= (1 << PD6)
#define PWM PORTD |= (1 << PD7)



int main(void){

  while(1){

    
  }

  
}


void motorControl(){

  
}
