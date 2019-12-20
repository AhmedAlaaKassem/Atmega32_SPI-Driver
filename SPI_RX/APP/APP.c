/*
 * APP.c
 *
 * Created: 12/18/2019 12:42:35 PM
 *  Author: ahmed
 */ 

 #include "APP.h"

 void LED1 (void)
 {
	 PORTB ^= 1<<1;
 }

 void LED2 (void)
 {
	 PORTB ^= 1<<2;
 }

 void LED3 (void)
 {
	 PORTB ^= 1<<3;
 }
 void LED4 (void)
 {
	 PORTB ^= 1<<4;
 }