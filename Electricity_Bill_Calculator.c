/** Electricity Bill Calculator**/

#include<stdlib.h>

main()
{
	int prev_reading, present_reading, unit=41, billed_units;
	system("cls");
	printf("Enter the Previous Reading value from the bill:");
	scanf("%d", &prev_reading);
	printf("Enter the Present Reading from the Electric Meter:");
	scanf("%d", &present_reading);
	system("cls");
	printf("\tBill Details\n");
	printf("_______________________________\n");
	printf("|Present Reading \t:%d", present_reading);
	printf("\n|Previous Reading \t:%d", prev_reading);
	billed_units=present_reading-prev_reading;
	printf("\n|Billed Units \t\t:%d", billed_units);
	printf("\n|Total Charge \t\t:%d", billed_units*unit);
	printf("\n_______________________________");
}
