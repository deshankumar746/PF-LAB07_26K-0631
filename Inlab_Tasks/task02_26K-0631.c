#include <stdio.h>
int main()
{
	float marks[10];
	int i=0;
	float sum1=0;
	
	while(i<10)
	{
		printf("Enter The Marks of Student %d: ",i+1);
		scanf("%f",&marks[i]);
				
		if(marks[i]<0 || marks[i]>20)
		{
			printf("Invalid input for marks. Enter Again \n");
			continue;
		}
			
		i++;	
	}
	
		for(i=0; i<10; i++)
		{
			if(marks[i]>=18)
			{
				printf("marks Of Student %d: %.2f - Excellent\n",i+1,marks[i]);
			}
			
			else if(marks[i]>=14)
			{
				printf("marks Of Student %d: %.2f - Good\n",i+1,marks[i]);
			}
			
			else if(marks[i]>=10)
			{
				printf("marks Of Student %d: %.2f - Average\n",i+1,marks[i]);
			}
			
			else
			{
				printf("marks Of Student %d: %.2f - Needs Improvement\n",i+1,marks[i]);
			}
			
			sum1=sum1+marks[i];
		}
	
			float avg1=sum1/10;
			
			int count1=0;
	
			for(i=0; i<10; i++)
			{
				if(marks[i]>avg1)
				{
					count1++;
				}
			}
			
			printf("Sum: %.2f\n",sum1);
			printf("Average: %.2f\n",avg1);
			
			printf("No of students above average: %d\n",count1);
			
			printf("After correcting the q4 marking scheme . Bonus marks =1.5\n");
			
			for(i=0; i<10; i++)
			{
				marks[i]=marks[i]+1.5;
				
				if(marks[i]>20)
				{
					marks[i]=20;
				}
				
			}
			
				printf("\t Revised Report\t\n");
				
			float sum2=0;
			float avg2;
				
				
				
		for(i=0; i<10; i++)
		{
			if(marks[i]>=18)
			{
				printf("marks Of Student %d: %.2f - Excellent\n",i+1,marks[i]);
			}
			
			else if(marks[i]>=14)
			{
				printf("marks Of Student %d: %.2f - Good\n",i+1,marks[i]);
			}
			
				else if(marks[i]>=10)
			{
				printf("marks Of Student %d: %.2f - Average\n",i+1,marks[i]);
			}
			
			else
			{
				printf("marks Of Student %d: %.2f-Needs Improvement\n",i+1,marks[i]);
			}
			
			sum2=sum2+marks[i];
		}
	
			avg2=sum2/10;
			
			int count2=0;
	
			for(i=0; i<10; i++)
			{
				if(marks[i]>avg2)
				{
					count2++;
				}
			}		printf("Sum: %.2f\n",sum2);
					printf("Average: %.2f\n",avg2);
					printf("No of students above average: %d\n",count2);
				
}
