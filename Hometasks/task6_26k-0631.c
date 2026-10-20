#include<stdio.h>
int main(){
    int queue[15],count=0,token,i,choice;

    while(count<15){
        printf("Enter patient token (-1 to stop): ");
        scanf("%d",&token);

        if(token==-1)
            break;

        queue[count]=token;
        count++;
    }

    printf("\nPatient Queue:\n");
    for(i=0;i<count;i++)
        printf("Position %d -> Token %d\n",i+1,queue[i]);

    while(count>0){
        printf("\n1. Call next patient\n");
        printf("2. Insert emergency token\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        if(choice==1){
            printf("Calling patient with token %d\n",queue[0]);

            for(i=0;i<count-1;i++)
                queue[i]=queue[i+1];

            count--;
        }
        else if(choice==2){
            if(count==15){
                printf("Queue is full!\n");
            }
            else{
                printf("Enter emergency token: ");
                scanf("%d",&token);

                for(i=count;i>0;i--)
                    queue[i]=queue[i-1];

                queue[0]=token;
                count++;
            }
        }
        else if(choice==3){
            printf("Exiting program.\n");
            return 0;
        }
        else{
            printf("Invalid choice!\n");
        }

        printf("\nCurrent Queue:\n");
        if(count==0)
            printf("Queue is empty.\n");

        for(i=0;i<count;i++)
            printf("Position %d -> Token %d\n",i+1,queue[i]);
    }

    printf("\nAll patients have been called.\n");

    return 0;
}
