/** Electricity Bill Calculator**/

#include<stdlib.h>
#include<stdio.h>

int main()
{
	int prev_reading, present_reading, billed_units;
	float SR1=5.58, SR2=5.81, SR3=6.05, SR4=6.65, SR5=8.75, SR6=9.75, charge=0.0, fc=10.0, cc=25.0, edc; 
	// system("cls");
	printf("Enter the Previous Reading value from the bill:");
	scanf("%d", &prev_reading);
	printf("Enter the Present Reading from the Electric Meter:");
	scanf("%d", &present_reading);
	// system("cls");
	printf("\tBill Details\n");
	printf("_______________________________\n");
	printf("|Present Reading \t:%d", present_reading);
	printf("\n|Previous Reading \t:%d", prev_reading);
	billed_units=present_reading-prev_reading;
	printf("\n|Billed Units \t\t:%d", billed_units);
	if (billed_units>400)
	{
		charge +=(billed_units-400)*SR6;
		billed_units=400;
	}
	if (billed_units>225)
	{
		charge +=(billed_units-225)*SR5;
		billed_units=225;
	}
	if (billed_units>125)
	{
		charge +=(billed_units-125)*SR4;
		billed_units=125;
	}
	if (billed_units>75)
	{
		charge +=(billed_units-75)*SR3;
		billed_units=75;
	}
	if (billed_units>30)
	{
		charge +=(billed_units-30)*SR2;
		billed_units=30;
	}
	if (billed_units>0)
	{
		charge +=(billed_units)*SR1;
	}
	if (billed_units==0)
	{ 
		charge +=charge;
	}
	charge +=charge+fc+cc+edc;
	edc=(charge)*(3.16/100);
	printf("\n|Fixed Charges: \t:%.2f", fc);
	printf("\n|Customer Charges \t:%.2f", cc);
	printf("\n|ED Charges \t\t:%.2f", edc);
	printf("\n|Total Charge \t\t:%.2f", charge);
	printf("\n_______________________________");

	return 0;
}
