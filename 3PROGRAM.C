#include <stdio.h>
int main()
{
	char name[30];
	int age, dist;
	float price;
	printf("Enter Name: ");
	scanf("%s", name);
	printf("Enter Age: ");
	scanf("%d", &age);
	printf("Enter Travel Distance (km): ");
	scanf("%d", &dist);
	price = dist * 3;

	if (age < 5)
	{
		price = 0;
	}
	else if (age > 60)
	{
		price = price * 0.5;
	}
	printf("\n----- TICKET SLIP -----\n");
	printf("Passenger : %s\n", name);
	printf("Age       : %d\n", age);
	printf("Distance  : %d km\n", dist);
	printf("Ticket Price : %.2f\n", price);
	return 0;
}

