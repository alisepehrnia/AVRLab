#include <delay.h>
#include <mega16.h>
#include <stdlib.h>

#define Columns PORTC
#define Rows PORTA
#define Delay 5

//void DrawColumn(int col, int value);

void main(void)
{
int col;
//int rowData[]={0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff};

DDRA=0xff;
DDRC=0xff;

while (1)
      {
          for(col=0;col<8;col++)
          {
            Columns=(1<<col);   //Turn on col'th column
            Rows=rand()%256;    //Random data (0x00 to 0xff for each column);
            delay_ms(Delay);    
          }
      }
}