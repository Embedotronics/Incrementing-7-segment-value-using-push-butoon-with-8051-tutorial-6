#include <reg51.h>
sbit switch_1=P3^2;

void digi_out(unsigned int current_num);
void calc_vote();
unsigned int i;
void main()
{
while(1)
{
calc_vote();
}
}

void calc_vote()
{
   unsigned int digi_val[]={0x40,0xF9,0x24,0x30,0x19,0x12,0x02,0xF8,0x00,0x10};
	 unsigned int vote_1=0;
	 switch_1=1;
while(1)
{
if (switch_1==0)
{
while (switch_1 == 0)
{
P2=digi_val[vote_1];	
}
switch_1=1;
vote_1++;
if(vote_1==10)
vote_1=0;
}
}
}
