 #include <stdio.h>
int main()
{
	int q[5], i, valid = 1;
	float price[5] = {50, 30, 40, 60, 20};
	float total = 0, discount = 0, gst = 0, net = 0;
	printf("Enter quantity of 5 items:\n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &q[i]);
		if (q[i] < 0)
		{
			valid = 0;
		}
		total += q[i] * price[i];
	}
	if (!valid)
	{
		printf("\nError: Invalid Quantity Input!\n");
		return 0;
	}
	if (total > 1000)
		discount = total * 0.10;
	else if (total >= 500)
		discount = total * 0.05;
	else
		discount = 0;
	if (total == 0)
	{
		gst = 0;
		net = 0;
	} else
	{
		gst = (total - discount) * 0.05;
		net = total - discount + gst;
	}
	printf("\n----- BILL INVOICE -----\n");
	printf("Total Amount  : %.2f\n", total);
	printf("Discount      : %.2f\n", discount);
	printf("GST (5%%)      : %.2f\n", gst);
	printf("Net Payable   : %.2f\n", net);

	return 0;
}
