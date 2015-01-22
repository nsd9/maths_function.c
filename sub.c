#include<stdio.h>
int main ()

{
	int number;
	printf("Enter a number between 1 and 7\n");
	scanf("%i",&number);
	
	switch(number)
	{
	case 1: printf("Red\n");
		break;
	case 2: printf("Orange\n");
		break;
	case 3: printf("Yellow\n");
		break;
	case 4: printf("Green\n");
		break;
	case 5: printf("Blue\n");
		break;
	case 6: printf("Indigo\n");
		break;
	case 7: printf("Violet\n");
		break;
	
	default: printf("Colour not recognised\n");
	}
return 0;
}
//subtraction funtion
