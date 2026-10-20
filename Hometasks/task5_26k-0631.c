#include<stdio.h>
int main(){
    char phone[30],cleaned[30];
    int i=0,j=0;

    printf("Enter phone number: ");
    scanf(" %29[^\n]",phone);

    while(phone[i]!='\0'){
        if(phone[i]>='0'&&phone[i]<='9'){
            cleaned[j]=phone[i];
            j++;
        }
        i++;
    }

    cleaned[j]='\0';

    printf("Original input: %s\n",phone);
    printf("Cleaned number: %s\n",cleaned);
    printf("Number of digits: %d\n",j);

    if(j==11)
        printf("Valid local number\n");
    else
        printf("Invalid length - please re-enter\n");

    return 0;
}

