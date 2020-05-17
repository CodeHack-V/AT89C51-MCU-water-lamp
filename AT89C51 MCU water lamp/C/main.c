#include <reg52.h>
void delay(unsigned int x) 
{
unsigned int i,j;
for(i=x;i>0;i--)
for(j=110;j>0;j--);
}
void main()         
{
	int P51;
	while(1){
		if(P51 == 0){
			P2=0xfe;
			P51++;
		}
		else if(P51 == 1){
			P2=0xfc;
			P51++;
		}
		else if(P51 == 2){
			P2=0xf8;
			P51++;
		}
		else if(P51 == 3){
			P2=0xf0;
			P51++;
		}
		else if(P51 == 4){
			P2=0xe0;
			P51++;
		}
		else if(P51 == 5){
			P2=0xc0;
			P51++;
		}
		else if(P51 == 6){
			P2=0x80;
			P51++;
		}
		else if(P51 == 7){
			P2=0;
			P51=10;
		}
		else if(P51 == 10){
			//if P51==10 reset P2
			P2=~P2;
			P51=0;
		}
		delay(100);
	}
}