#include <stdio.h>
#include "nuban.h"




// USAGE / IMPLEMENTATION
int main()
{
	// variable declaration
	char accessCode[4];
	char serialNo[10];
	int checkDigit;
	int len;
	char joinedNumber[NUBAN_LEN] = {'\0'};

	// collect input from user
	printf("Enter the Bank Access Code\n");
	scanf("%3s", accessCode);

	printf("Enter the NUBAN Serial number\n");
	scanf("%9s", serialNo);

	printf("Enter the Check digit\n");
	scanf("%i", &checkDigit);

	len = snprintf(joinedNumber, sizeof(joinedNumber), "%s%s", accessCode, serialNo);

	// Perform validation
	if (is_valid_nuban(joinedNumber, len, checkDigit))
	{
		// passed the test,
		printf("Checked digit is correct\n");
	}
	else
	{
		// failed test
		printf("Checked digit is not correct\n");
	}

	return 0;
}
