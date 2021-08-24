#include<stdio.h>
#include <limits.h>

struct mobile {
    char name[20];
    char color[10];
    int ram;
    int price;
};


int main(){
    struct mobile mob[3];
    printf("\nEnter the details of three mobiles\n");
    printf("Name color ram price\n");
    for (int i=0;i<3;i++){
        
        scanf("%s\n",mob[i].name);
        scanf("%s\n",mob[i].color);
        scanf("%d\n",&mob[i].ram);
        scanf("%d\n",&mob[i].price);
        
    }
    for (int i=0;i<3;i++){
        printf("%s  ",mob[i].name);
        printf("%s  ",mob[i].color);
        printf("%d  ",mob[i].ram);
        printf("%d  ",mob[i].price);
        printf("\n");
    }
    int MIN = INT_MAX;
    struct mobile *MAXptr;
    MAXptr = NULL;
    for (int i=0;i<3;i++){
        if (mob[i].price < MIN){
            MIN = mob[i].price;
            MAXptr = &mob[i];
        }
    }

    printf("\nMobile with max price is: ");
    printf("%s  ",MAXptr->name);
    printf("%s  ",MAXptr->color);
    printf("%d  ",MAXptr->ram);
    printf("%d  ",MAXptr->price);
    printf("\n");
}









/*
int main(){
    struct mobile m1, m2, m3; 
    printf("Enter the details of mobile - 1");
    printf("name\ncolor\nram\nprice");
    scanf("%s",&m1.name);
    scanf("%s",&m1.color);
    scanf("%d",&m1.ram);
    scanf("%d",&m1.price);
    printf("Enter the details of mobile - 2");
    printf("name\ncolor\nram\nprice");
    scanf("%s",&m2.name);
    scanf("%s",&m2.color);
    scanf("%d",&m2.ram);
    scanf("%d",&m2.price);

     printf("Enter the details of mobile - 3");
    printf("name\ncolor\nram\nprice");
    scanf("%s",&m3.name);
    scanf("%s",&m3.color);
    scanf("%d",&m3.ram);
    scanf("%d",&m3.price);

    Printf("\nDetails of mobile - 1: \n");
    printf("%s  ",m1.name);
    printf("%s  ",m1.color);
    printf("%d  ",m1.ram);
    printf("%d  ",m1.price);

    Printf("\nDetails of mobile - 2: \n");
    printf("%s  ",m2.name);
    printf("%s  ",m2.color);
    printf("%d  ",m2.ram);
    printf("%d  ",m2.price);

    Printf("\nDetails of mobile - 3: \n");
    printf("%s  ",m3.name);
    printf("%s  ",m3.color);
    printf("%d  ",m3.ram);
    printf("%d  ",m3.price);
}
*/
