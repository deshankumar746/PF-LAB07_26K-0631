//Scenario 2: Student Marks Entry and Grade Report
//Concepts covered: float arrays, input loops, validation, conditional remarks, in-place update of all
//elements
//A teaching assistant at a university needs to process quiz marks for a section of 10 students,
//and doing this by hand with ten separate variables would be tedious and error-prone. Write a
//program that declares a float array of size 10 and uses a loop to prompt the user to enter the
//marks for each student (out of 20), displaying the prompt as &quot;Enter marks for student 1:&quot; and
//so on. Make the program reject invalid input: if a mark is below 0 or above 20, ask the user
//to re-enter it for that same student before moving on.
//After all marks are stored, use a second loop to display each student&#39;s marks next to a
//remark: &quot;Excellent&quot; for 18 and above, &quot;Good&quot; for 14 to 17.99, &quot;Average&quot; for 10 to 13.99, and
//&quot;Needs Improvement&quot; below 10. Then calculate the class average and use another loop to
//count how many students scored above that average. The instructor realizes that the
//question 4 marking scheme was wrong and every student needs 1.5 bonus marks, capped
//at a maximum of 20. Write a loop that updates every element of the array in place, ensuring
//no value goes above 20, and display the revised report. Your submission should show
//clearly how a single array and loops replaced what would otherwise have required dozens of
//repeated lines of code.

#include <stdio.h>
#include <ctype.h>
int main()
{
	float marks[10];
	int i=0;
	float sum1=0;
	
	while(i<10)
	{
		printf("Enter The Marks of Student %d: ",i+1);
		scanf("%f",&marks[i]);
		
		if(isaplha(marks[i])==0)
		{
			printf("Enter marks in numbers.\n");
			continue;
		}	
				
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
