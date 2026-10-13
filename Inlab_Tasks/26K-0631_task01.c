//A small weather station in Karachi records the temperature in degrees Celsius once every
//day for a week, and the meteorological office wants a simple C program to summarize those
//readings. Write a program that declares an integer array of 7 elements and initializes it at
//declaration with the values 31, 33, 35, 34, 38, 36, and 32. Compute the array length using
//sizeof(array_name) / sizeof(array_name[0]) rather than hard-coding 7, so the program still
//works if the office later adds more days. Using a for loop, print each reading in the format
//&quot;Day 1: 31 C&quot;, remembering that the array index starts at 0 while the day numbers shown to
//the user start at 1.
//In the same or a second loop, calculate and display the highest temperature, the lowest
//temperature, and the average temperature for the week. A sensor fault is then discovered:
//the reading for the third day was wrongly logged and should be 37 instead of 35. Modify only
//that element directly by its index, then reprint the whole array and recompute the statistics to
//show how the change affects the results. Finally, print the memory address of each element
//using &amp;array[i] and explain, in a short comment, what the gaps between consecutive
//addresses reveal about contiguous memory storage.
#include <stdio.h>
int main()
{
	int arr[7]={31,33,35,34,38,36,32};
	int i,highest1,lowest1,sum1=0;
	float avg1;
	
	int arrlength = sizeof(arr)/sizeof(arr[0]);
	
	for(i=0; i<7; i++)
	{
		printf("Day %d: %d\n",i+1,arr[i]);
	}
	
	highest1=arr[0];
	lowest1=arr[0];
	
	for(i=0; i<7; i++)
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
	printf("After \n");
	
	arr[2]=37;
	int sum2=0;
		
	for(i=0; i<7; i++)
	{
		printf("Day %d: %d\n",i+1,arr[i]);
	}
	
 int highest2=arr[0];
 int lowest2=arr[0];
	
	for(i=0; i<7; i++)
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
		printf("\nSize of element %d: %d ",i+1,&arr[i]);
		
	}
	
	
}
