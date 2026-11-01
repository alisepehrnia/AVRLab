/*******************************************************
This program was created by the
CodeWizardAVR V3.12 Advanced
Automatic Program Generator
© Copyright 1998-2014 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : Session6-Exercise 
Version : 
Date    : 10/29/2020
Author  : Ali Sepehrnia (96121038) 
Company : 
Comments: 


Chip type               : ATmega16
Program type            : Application
AVR Core Clock frequency: 1.000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 256
*******************************************************/

#include <mega16.h>
#include <delay.h>

// Alphanumeric LCD functions
#include <alcd.h>

// Declare your global variables here
char str[]="Hello";
int offset,exitCount,roffset=16-(5-1); 
int i,c;
int irr=-1; //No of Activated Interrupt 

// External Interrupt 0 service routine
interrupt [EXT_INT0] void ext_int0_isr(void)
{
    if(irr!=0) //If This Interrput Is NOT Activated, Activate It, Reset Animation Counter & Clear LCD
    {
        if(irr==-1) i=0;
        else i=-1;
        irr=0;
        lcd_clear();
    }
    
    offset=i-4;
    exitCount=i-16;
        
    if(offset<=0) //Word Is Going to Enter Screen
    {
        lcd_gotoxy(0,0);
        lcd_puts(str+4-i); //Print (i+1) Last Character(s) of "Hello" => {"o","lo","llo","ello","Hello"}
    }
    else if(offset>0 && offset<roffset) //Word Has Compeletly Entered To Screen And Not Yet Goint to Exit
    {
        //Clear Remainded Character
        lcd_gotoxy(offset-1,0);
        lcd_puts(" ");
        //Put String In +offset Column
        lcd_puts(str);
    }
    else //if(offset>=roffset) - Word Is Going to Exit the Screen
    {
        //Clear first remainded char
        lcd_gotoxy(roffset-1+exitCount,0);
        lcd_putchar(' ');
                
        for(c=0;c<=4-exitCount-1;c++) // Print First (c+1) Charachter of "Hello"
        {
            lcd_gotoxy(roffset+exitCount+c,0);
            lcd_putchar(str[c]);
        }
    }
       
   i++;
   if(i>=16+5) i=0; //Reset Animation If Its Ended   
}

// External Interrupt 2 service routine
interrupt [EXT_INT2] void ext_int2_isr(void)
{
    if(irr!=2) //If This Interrput Is NOT Activated, Activate It, Reset Animation Counter & Clear LCD
    {
        if(irr==-1) i=0;
        else i=-1;
        irr=2;
        lcd_clear();
    }
    
    if(irr==2) //Show Animation If INT2 Is Activated
    {
        offset=i-4;
        exitCount=i-16;
        
        if(offset<=0)
        {
            //Enter "Hello" To LCD From Right
            for(c=0;c<=i;c++)
            {
                lcd_gotoxy(15-i+c,0);
                lcd_putchar(str[c]);
            }
        }
        
        else if(offset>0 && offset<roffset) //Word Has Compeletly Entered To Screen And Not Yet Goint to Exit
        {   
            //Put String In +offset Column From Right
            lcd_gotoxy(11-(offset-1)-1,0);
            lcd_puts(str);
            //Clear Remainded Character
            lcd_puts(" ");
        }
        
        else //if(offset>=roffset) - Word Is Going to Exit the Screen
        {
            lcd_gotoxy(0,0);
            lcd_puts(str+exitCount+1);
            //Clear Remainded Character
            lcd_puts(" ");
        }
        
        i++;
        if(i>=16+5) i=0; //Reset Animation If Its Ended
    }
}

void main(void)
{
// Declare your local variables here

// Input/Output Ports initialization
// Port A initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRA=(0<<DDA7) | (0<<DDA6) | (0<<DDA5) | (0<<DDA4) | (0<<DDA3) | (0<<DDA2) | (0<<DDA1) | (0<<DDA0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTA=(0<<PORTA7) | (0<<PORTA6) | (0<<PORTA5) | (0<<PORTA4) | (0<<PORTA3) | (0<<PORTA2) | (0<<PORTA1) | (0<<PORTA0);

// Port B initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRB=(0<<DDB7) | (0<<DDB6) | (0<<DDB5) | (0<<DDB4) | (0<<DDB3) | (0<<DDB2) | (0<<DDB1) | (0<<DDB0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTB=(0<<PORTB7) | (0<<PORTB6) | (0<<PORTB5) | (0<<PORTB4) | (0<<PORTB3) | (0<<PORTB2) | (0<<PORTB1) | (0<<PORTB0);

// Port C initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRC=(0<<DDC7) | (0<<DDC6) | (0<<DDC5) | (0<<DDC4) | (0<<DDC3) | (0<<DDC2) | (0<<DDC1) | (0<<DDC0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTC=(0<<PORTC7) | (0<<PORTC6) | (0<<PORTC5) | (0<<PORTC4) | (0<<PORTC3) | (0<<PORTC2) | (0<<PORTC1) | (0<<PORTC0);
DDRC=0xff;
// Port D initialization
// Function: Bit7=In Bit6=In Bit5=In Bit4=In Bit3=In Bit2=In Bit1=In Bit0=In 
DDRD=(0<<DDD7) | (0<<DDD6) | (0<<DDD5) | (0<<DDD4) | (0<<DDD3) | (0<<DDD2) | (0<<DDD1) | (0<<DDD0);
// State: Bit7=T Bit6=T Bit5=T Bit4=T Bit3=T Bit2=T Bit1=T Bit0=T 
PORTD=(0<<PORTD7) | (0<<PORTD6) | (0<<PORTD5) | (0<<PORTD4) | (0<<PORTD3) | (0<<PORTD2) | (0<<PORTD1) | (0<<PORTD0);

// External Interrupt(s) initialization
// INT0: On
// INT0 Mode: Falling Edge
// INT1: Off
// INT2: On
// INT2 Mode: Rising Edge
GICR|=(0<<INT1) | (1<<INT0) | (1<<INT2);
MCUCR=(0<<ISC11) | (0<<ISC10) | (1<<ISC01) | (0<<ISC00);
MCUCSR=(1<<ISC2);
GIFR=(0<<INTF1) | (1<<INTF0) | (1<<INTF2);

// Alphanumeric LCD initialization
// Connections are specified in the
// Project|Configure|C Compiler|Libraries|Alphanumeric LCD menu:
// RS - PORTA Bit 0
// RD - PORTA Bit 1
// EN - PORTA Bit 2
// D4 - PORTA Bit 4
// D5 - PORTA Bit 5
// D6 - PORTA Bit 6
// D7 - PORTA Bit 7
// Characters/line: 16
lcd_init(16);

// Global enable interrupts
#asm("sei")

while (1)
      {
      // Place your code here
      }
}
