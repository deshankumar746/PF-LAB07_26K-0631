#include<stdio.h>
int main(){
    int stock[]={25,12,8,40,5,18,3,22};
    int size=sizeof(stock)/sizeof(stock[0]);
    int i,item,sold,total=0,min=0;

    printf("Initial Stock:\n");
    for(i=0;i<size;i++){
        printf("Item %d: %d units\n",i+1,stock[i]);
        if(stock[i]<10)
            printf("Item %d is LOW on stock - reorder required\n",i+1);
    }

    while(1){
        printf("\nEnter item number(0 to stop): ");
        scanf("%d",&item);
        if(item==0)
            break;
        if(item<1||item>size){
            printf("Invalid item number!\n");
            continue;
        }

        printf("Enter quantity sold: ");
        scanf("%d",&sold);

        if(sold<0)
            printf("Invalid quantity!\n");
        else if(sold>stock[item-1])
            printf("Not enough stock!\n");
        else{
            stock[item-1]-=sold;
            printf("Stock updated.\n");
        }
    }

    printf("\nFinal Stock:\n");
    for(i=0;i<size;i++){
        printf("Item %d: %d units\n",i+1,stock[i]);
        total+=stock[i];
        if(stock[i]<stock[min])
            min=i;
    }

    printf("Total units remaining: %d\n",total);
    printf("Item with least stock: Item %d (%d units)\n",min+1,stock[min]);

    return 0;
}

