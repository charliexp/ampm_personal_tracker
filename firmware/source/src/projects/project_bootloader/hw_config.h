

#ifndef __HW_CONFIG_H__
#define __HW_CONFIG_H__
#include "MKL25Z4.h"

#define PWR_KEY_PIN			5
#define PWR_KEY_INIT		PORTC_PCR5 |= PORT_PCR_MUX(1); \
												GPIOC_PDDR &= ~(1 << PWR_KEY_PIN)
#define PWR_KEY_IN			((GPIOC_PDIR & (1 << PWR_KEY_PIN)) >> PWR_KEY_PIN)

#define SOS_KEY_PIN			6
#define SOS_KEY_INIT		PORTC_PCR6 = PORT_PCR_MUX(1); \
												GPIOC_PDDR &= ~(1 << SOS_KEY_PIN)
#define SOS_KEY_IN			((GPIOC_PDIR & (1 << SOS_KEY_PIN)) >> SOS_KEY_PIN)

#define CHGB_STATUS_PIN			1
#define CHGB_STATUS_INIT		PORTD_PCR1 = PORT_PCR_MUX(1); \
														GPIOD_PDDR &= ~(1 << CHGB_STATUS_PIN)
#define CHGB_STATUS_IN			(GPIOD_PDIR & (1 << CHGB_STATUS_PIN))

#define CHG_EN_PIN		0
#define CHG_EN_PIN_SET_OUTPUT		PORTB_PCR0 = PORT_PCR_MUX(1);GPIOB_PDDR |= (1 << CHG_EN_PIN)
#define CHG_EN_PIN_SET_INPUT		PORTB_PCR0 = PORT_PCR_MUX(1);GPIOB_PDDR &= ~(1 << CHG_EN_PIN)
#define CHG_EN_IN								(GPIOB_PDIR & (1 << CHG_EN_PIN))
#define CHG_EN_SET							(GPIOB_PSOR = (1 << CHG_EN_PIN))
#define CHG_EN_CLR							(GPIOB_PCOR = (1 << CHG_EN_PIN))


#define PWR_EN_PIN		29
#define PWR_EN_SET		(GPIOE_PSOR = (1 << PWR_EN_PIN))
#define PWR_EN_CLR		(GPIOE_PCOR = (1 << PWR_EN_PIN))
#define PWR_EN_INIT		PORTE_PCR29 = PORT_PCR_MUX(1); \
											GPIOE_PDDR |= (1 << PWR_EN_PIN); \
											PWR_EN_CLR
											
#define GPS_EN_PIN		3
#define GPS_EN_SET		(GPIOD_PSOR = (1 << GPS_EN_PIN))
#define GPS_EN_CLR		(GPIOD_PCOR = (1 << GPS_EN_PIN))
#define GPS_EN_IN			(GPIOD_PDIR & (1 << GPS_EN_PIN))
#define GPS_EN_INIT		PORTD_PCR3 = PORT_PCR_MUX(1); \
											GPIOD_PDDR |= (1 << GPS_EN_PIN); \
											GPS_EN_CLR				

#define AUDIO_EN_PIN		0
#define AUDIO_EN_SET		(GPIOD_PSOR = (1 << AUDIO_EN_PIN))
#define AUDIO_EN_CLR		(GPIOD_PCOR = (1 << AUDIO_EN_PIN))
#define AUDIO_EN_IN		(GPIOD_PDIR & (1 << AUDIO_EN_PIN))
#define AUDIO_EN_INIT		PORTD_PCR0 = PORT_PCR_MUX(1); \
											GPIOD_PDDR |= (1 << AUDIO_EN_PIN); \
											AUDIO_EN_CLR			


#define GSM_POWER_PIN	3
#define GSM_POWER_PIN_SET_OUTPUT	PORTB_PCR3 = PORT_PCR_MUX(1);GPIOB_PDDR |= (1 << GSM_POWER_PIN)
#define GSM_POWER_PIN_SET_INPUT		PORTB_PCR3 = PORT_PCR_MUX(1);GPIOB_PDDR &= ~(1 << GSM_POWER_PIN)
#define GSM_POWER_PIN_SET					GPIOB_PSOR = (1 << GSM_POWER_PIN)
#define GSM_POWER_PIN_CLR					GPIOB_PCOR = (1 << GSM_POWER_PIN)


#define GSM_RESET_PIN	0
#define GSM_RESET_PIN_SET_OUTPUT	PORTC_PCR0 = PORT_PCR_MUX(1);GPIOC_PDDR |= (1 << GSM_RESET_PIN)
#define GSM_RESET_PIN_SET_INPUT		PORTC_PCR0 = PORT_PCR_MUX(1);GPIOC_PDDR &= ~(1 << GSM_RESET_PIN)
#define GSM_RESET_PIN_SET					GPIOC_PSOR = (1 << GSM_RESET_PIN)
#define GSM_RESET_PIN_CLR					GPIOC_PCOR = (1 << GSM_RESET_PIN)

#define GSM_RTS_PIN	2
#define GSM_RTS_PIN_SET_OUTPUT	PORTC_PCR2 = PORT_PCR_MUX(1);GPIOC_PDDR |= (1 << GSM_RTS_PIN)
#define GSM_RTS_PIN_SET_INPUT		PORTC_PCR2 = PORT_PCR_MUX(1);GPIOC_PDDR &= ~(1 << GSM_RTS_PIN)
#define GSM_RTS_PIN_IN					GPIOC_PDIR = (1 << GSM_RTS_PIN)
#define GSM_RTS_PIN_SET					GPIOC_PSOR = (1 << GSM_RTS_PIN)
#define GSM_RTS_PIN_CLR					GPIOC_PCOR = (1 << GSM_RTS_PIN)

#define GSM_DTR_PIN 21
#define GSM_DTR_PIN_SET_OUTPUT	PORTE_PCR21 = PORT_PCR_MUX(1); GPIOE_PDDR |= (1 << GSM_DTR_PIN)
#define GSM_DTR_PIN_SET_INPUT		PORTE_PCR21 = PORT_PCR_MUX(1); GPIOE_PDDR &= ~(1 << GSM_DTR_PIN)
#define GSM_DTR_PIN_SET					GPIOE_PSOR 	= (1 << GSM_DTR_PIN)
#define GSM_DTR_PIN_CLR					GPIOE_PCOR 	= (1 << GSM_DTR_PIN)


#define LED_BLUE_PIN	1
#define LED_RED_PIN		0
#define LED_GREEN_PIN	1


#define LED_BLUE_PIN_SET_OUTPUT		PORTA_PCR1 = PORT_PCR_MUX(1);GPIOA_PDDR |= (1 << LED_BLUE_PIN)
#define LED_BLUE_PIN_SET_INPUT		PORTA_PCR1 = PORT_PCR_MUX(1);GPIOA_PDDR &= ~(1 << LED_BLUE_PIN)
#define LED_BLUE_PIN_SET					GPIOA_PSOR = (1 << LED_BLUE_PIN)
#define LED_BLUE_PIN_CLR					GPIOA_PCOR = (1 << LED_BLUE_PIN)

#define LED_RED_PIN_SET_OUTPUT	PORTB_PCR0 = PORT_PCR_MUX(1);GPIOB_PDDR |= (1 << LED_RED_PIN)
#define LED_RED_PIN_SET_INPUT		PORTB_PCR0 = PORT_PCR_MUX(1);GPIOB_PDDR &= ~(1 << LED_RED_PIN)
#define LED_RED_PIN_SET					GPIOB_PSOR = (1 << LED_RED_PIN)
#define LED_RED_PIN_CLR					GPIOB_PCOR = (1 << LED_RED_PIN)

#define LED_GREEN_PIN_SET_OUTPUT	PORTB_PCR1 = PORT_PCR_MUX(1);GPIOB_PDDR |= (1 << LED_GREEN_PIN)
#define LED_GREEN_PIN_SET_INPUT		PORTB_PCR1 = PORT_PCR_MUX(1);GPIOB_PDDR &= ~(1 << LED_GREEN_PIN)
#define LED_GREEN_PIN_SET					GPIOB_PSOR = (1 << LED_GREEN_PIN)
#define LED_GREEN_PIN_CLR					GPIOB_PCOR = (1 << LED_GREEN_PIN)




#endif