/**********************************************************************************************************************************
**********************************REGISTER SUMMARY FOR ATTINY MICROCONTROLLER******************************************************
***********************************************************************************************************************************/

                                    // {   NAME   }      {BITS}  { FUNCITON }

#define SREG	(unint_8*)0x3FU     // [STATUS REGISTER] [0-7] result of the most recently executed arithmetic instruction
#define SPH		(unint_8*)0x3EU		// [STACK POINTER]   [0-1] storing temporary data, used after SPL is full
#define SPL		(unint_8*)0x3DU		// [STACK POINTER]	 [0-7] storing temporary data
// 						  0x3CU		    RESERVED
#define GIMSK	(unint_8*)0x3BU		// [GENERAL INTERRUPT MASK] [5-6]
#define GIFR	(unint_8*)0x3AU		// [GENERAL INTERRUPT FLAG] [5-6]
#define TIMSK	(unint_8*)0x39U		// [TIMER/COUNTER INTERRUPT MASK] [1-6]
#define TIFR	(unint_8*)0x38U		// [TIMER/COUNTER INTERRUPT FLAG] [1-6]
#define SPMCSR	(unint_8*)0x37U		// [STORE PROGRAM MEMORY CONTROL AND STATUS] [0-5] control bits needed to control the Program memory operations
// 						  0x36U		    RESERVED
#define MCUCR	(unint_8*)0x35U		// [MCU CONTROL] [0-7] control bits for power management
#define MCUSR	(unint_8*)0x34U		// [MCU STATUS] [0-3] information on which reset source caused an MCU Reset
#define TCCR0B	(unint_8*)0x33U		// [TIMER/COUNTER CONTROL B] [0-3, 6-7] information on which reset source caused an MCU Reset
#define TCNT0	(unint_8*)0x32U		// [TIMER/COUNTER 0] [0-7] gives direct access, read and write operations, to the Timer/Counter unit 8-bit counter
#define OSCCAL	(unint_8*)0x31U		// [OSCILLATOR CALIBRATION] [0-7] trim the Calibrated Internal RC Oscillator to remove process variations
#define TCCR1	(unint_8*)0x30U		// [TIMER/COUNTER1 CONTROL] [0-7]


#define TCNT1	(unint_8*)0x2FU		// [TIMER/COUNTER1] [0-7]
#define OCR1A	(unint_8*)0x2EU		// [TIMER/COUNTER1 OUTPUT COMPARE A] [0-7] data to be continuously compared with Timer/Counter1
#define OCR1C	(unint_8*)0x2DU		// [TIMER/COUNTER1 OUTPUT COMPARE C] [0-7] data to be continuously compared with Timer/Counter1
#define GTCCR	(unint_8*)0x2CU		// [GENERAL TIMER/COUNTER CONTROL] [0-7]
#define OCR1B	(unint_8*)0x2BU		// [TIMER/COUNTER1 OUTPUT COMPARE B] [0-7] data to be continuously compared with Timer/Counter1
#define TCCR0A	(unint_8*)0x2AU		// [TIMER/COUNTER CONTROL A] [0-1, 4-7]
#define OCR0A	(unint_8*)0x29U		// [TIMER/COUNTER0 OUTPUT COMPARE A] [0-7] value to be continuously compared with the counter value(TCNT0)
#define OCR0B	(unint_8*)0x28U		// [TIMER/COUNTER0 OUTPUT COMPARE B] [0-7] value to be continuously compared with the counter value(TCNT0)
#define PLLCSR	(unint_8*)0x27U		// [PLL CONTROL AND STATUS] [0-2, 7]
#define CLKPR	(unint_8*)0x26U		// [CLOCK PRESCALE] [0-3, 7]
#define DT1A	(unint_8*)0x25U		// [TIMER/COUNTER1 DEAD TIME A] [0-7] dead time delay is adjusted by DT1A
#define DT1B	(unint_8*)0x24U		// [TIMER/COUNTER1 DEAD TIME B] [0-7] dead time delay is adjusted by DT1B
#define DTPS1	(unint_8*)0x23U		// [TIMER/COUNTER1 DEAD TIME PRESCALE] [0-1]
#define DWDR	(unint_8*)0x22U		// [DEBUG WIRE DATA] [0-7] provides a communication channel from the running program in the MCU to the debugger
#define WDTCR	(unint_8*)0x21U		// [WATCHDOG TIMER CONTROL] [0-7]
#define PRR 	(unint_8*)0x20U		// [POWER REDUCTION] [0-3] provides a method toreduce power consumption by stopping the clock to individual peripherals


#define EEARH 	(unint_8*)0x1FU		// [EEPROM ADDRESS] [0] initial value of EEAR is undefined and a proper value must be written before EEPROM is accessed
#define EEARL 	(unint_8*)0x1EU		// [EEPROM ADDRESS] [0-7] initial value of EEAR is undefined and a proper value must be written before EEPROM is accessed
#define EEDR 	(unint_8*)0x1DU		// [EEPROM DATA] [0-7]
#define EECR 	(unint_8*)0x1CU		// [EEPROM CONTROL] [0-5]
// 						  0x1BU		    RESERVED
// 						  0x1AU		    RESERVED
// 						  0x19U		    RESERVED
#define PORTB  	(unint_8*)0x18U		// [PORT B DATA] [0-5]
#define DDRB   	(unint_8*)0x17U		// [PORT B DATA DIRECTION] [0-5]
#define PINB   	(unint_8*)0x16U		// [PORT B INPUT PINS ADDRESS] [0-5]
#define PCMSK  	(unint_8*)0x15U		// [PIN CHANGE MASK] [0-5]
#define DIDR0  	(unint_8*)0x14U		// [DIGITAL INPUT DISABLE 0] [0-5]
#define GPIOR2 	(unint_8*)0x13U		// [GENERAL PURPOSE I/0 2] [0-7]
#define GPIOR1 	(unint_8*)0x12U		// [GENERAL PURPOSE I/0 1] [0-7]
#define GPIOR0 	(unint_8*)0x11U		// [GENERAL PURPOSE I/0 0] [0-7]
#define USIBR  	(unint_8*)0x10U		// [USI BUFFER] [0-7] content of the USI Data Register is loaded to the USI Buffer Register when the transfer has been completed


#define USIDR  	(unint_8*)0x0FU		// [USI DATA] [0-7] content of the USI Data Register is loaded to the USI Buffer Register when the transfer has been completed
#define USISR  	(unint_8*)0x0EU		// [USI STATUS] [0-7] contains interrupt flags, line status flags and the counter value
#define USICR  	(unint_8*)0x0DU		// [USI CONTROL] [0-7] includes bits for interrupt enable, setting the wire mode, selecting the clock and clockstrobe
// 						  0x0CU		    RESERVED
// 						  0x0BU		    RESERVED
// 						  0x0AU		    RESERVED
// 						  0x09U		    RESERVED
#define ACSR   	(unint_8*)0x08U		// [ANALOG COMPARATOR CONTROL AND STATUS] [0-7]
#define ADMUX  	(unint_8*)0x07U		// [ADC MULTIPLEXER SELECTION] [0-7]
#define ADCSRA 	(unint_8*)0x06U		// [ADC CONTROL AND STATUS A] [0-7]
#define ADCH 	(unint_8*)0x05U		// [ADC DATA H] [0-1] store result of ADC conversion
#define ADCL 	(unint_8*)0x04U		// [ADC DATA L] [0-7] store result of ADC conversion
#define ADCSRB	(unint_8*)0x03U		// [ADC CONTROL AND STATUS B] [0-7] store result of ADC conversion
// 						  0x02U		    RESERVED
// 						  0x01U		    RESERVED
// 						  0x00U		    RESERVED
