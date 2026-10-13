#include <stdio.h>
int main()
{
	int arr[7]={31,33,35,34,38,36,32};
	int i,highest1,lowest1,sum1=0;
	float avg1;
	
	int arrlength = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<arrlength; i++)
	{
		printf("Day %d: %d\n",i+1,arr[i]);
	}
	
	highest1=arr[0];
	lowest1=arr[0];
	
	for(i=0; i<arrlength; i++)
	{
		if(arr[i]>highest1)
		{
			highest1=arr[i];
		}
		
		if(arr[i]<lowest1)
		{
			lowest1=arr[i];
		}
		
		sum1=sum1+arr[i];
	}
	
	avg1=(float)sum1/arrlength;
	
	printf("maximum Temperature: %d\n",highest1);
	printf("minimum Temperature: %d\n",lowest1);
	printf("average Temperature: %.2f\n",avg1);
	
	
	printf("Sensor fault. The reading for the third day should be 37 instead of 35\n");
	printf("After correcting the third day's reading \n");
	
	arr[2]=37;
	int sum2=0;
		
	for(i=0; i<arrlength; i++)
	{
		printf("Day %d: %d\n",i+1,arr[i]);
	}
	
 int highest2=arr[0];
 int lowest2=arr[0];
	
	for(i=0; i<arrlength; i++)
	{
		if(arr[i]>highest2)
		{
			highest2=arr[i];
		}
		
		if(arr[i]<lowest2)
		{
			lowest2=arr[i];
		}
		
		sum2=sum2+arr[i];
	}
	
	float avg2=(float)sum2/arrlength;
	
	printf("maximum Temperature: %d\n",highest2);
	printf("minimum Temperature: %d\n",lowest2);
	printf("average Temperature: %.2f\n",avg2);
	
	for(i=0; i<arrlength; i++)
	{
		printf("\nAddress of element %d: %p ",i+1,(void *)&arr[i]);
		
	}
	
	// Consecutive addresses differ by sizeof(int), showing that array elements
	// are stored contiguously in memory.
}
