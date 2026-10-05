#include <stdio.h>

int main ()
{
	float h1,h2,h3,avg;
	printf("Enter three known heights");
	scanf("%f %f %f", &h1,&h2,&h3);
	printf("Enter the average height");
	scanf("%f", &avg);
        float missing_height_sum = avg*5 - (h1+h2+h3);
	float missing;
	missing = missing_height_sum / 2;
        printf("The missing heights %.2f \n", missing);
	return 0;
}


