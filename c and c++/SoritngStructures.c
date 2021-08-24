//Create n structures
//Get the input of n structures
//sort and display the mobile details based on RAM size
#include<stdio.h>
#include <limits.h>

struct mobile {
    char name[20];
    char color[10];
    int ram;
    int price;
};


int main(){
    struct mobile mob[3],temp;
    printf("\nEnter the details of three mobiles\n");
    printf("Name color ram price\n");
    for (int i=0;i<3;i++){
        
        scanf("%s\n",mob[i].name);
        scanf("%s\n",mob[i].color);
        scanf("%d\n",&mob[i].ram);
        scanf("%d\n",&mob[i].price);
        
    }
    printf("\n Mobile details before sorting: ");
    for (int i=0;i<3;i++){
        printf("%s  ",mob[i].name);
        printf("%s  ",mob[i].color);
        printf("%d  ",mob[i].ram);
        printf("%d  ",mob[i].price);
        printf("\n");
    }
    
    for (int i=0; i<3-1; i++){
      for (int j=i+1; j<3; j++){
         if (mob[i].ram > mob[j].ram){
            temp = mob[i];
            mob[i] = mob[j];
            mob[j] = temp;
         }
      }
    }
      printf("\n\n Mobile details after sorting \n");
      for (int i=0;i<3;i++){
        printf("%s  ",mob[i].name);
        printf("%s  ",mob[i].color);
        printf("%d  ",mob[i].ram);
        printf("%d  ",mob[i].price);
        printf("\n");
    }
}
