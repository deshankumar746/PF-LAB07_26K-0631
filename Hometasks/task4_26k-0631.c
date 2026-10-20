#include<stdio.h>
int main(){
    char name[20];
    int i=0,count=0;

    printf("Enter username: ");
    scanf("%19[A-Za-z]",name);

    while(name[i]!='\0'){
        printf("Character at index %d: %c\n",i,name[i]);
        count++;
        i++;
    }

    if(count==0){
        printf("No alphabetic username entered.\n");
        return 0;
    }

    printf("Total characters: %d\n",count);

    if(name[0]>='a'&&name[0]<='z')
        name[0]=name[0]-('a'-'A');

    printf("Final username: %s\n",name);

    return 0;
}

