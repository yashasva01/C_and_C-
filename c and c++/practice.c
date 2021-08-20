/*

#include <stdio.h>
#include<stdlib.h>


void update(int *a,int *b) {
    // Complete this function
    int sum, diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}



#include <stdarg.h>
#include <stdio.h>
 
// Variadic function to add numbers
int AddNumbers(int n, ...)
{
    int Sum = 0;
 
    // Declaring pointer to the
    // argument list
    va_list ptr;
 
    // Initializing argument to the
    // list pointer
    va_start(ptr, n);
 
    for (int i = 0; i < n; i++)
 
        // Accessing current variable
        // and pointing to next one
        Sum += va_arg(ptr, int);
    // Ending argument list traversal
    va_end(ptr);
 
    return Sum;
}

void goingThruList(int n, ...){
    va_list number;
    va_start (number, n);
    for (int i = 0; i < n; i++){
        int a = va_arg(number, int);
        printf("%d\n", a);
    }
}
 
// Driver Code
int main()
{
    printf("\n\n Variadic functions: \n");
 
    // Variable number of arguments
    printf("\n 1 + 2 = %d ",
           AddNumbers(2, 1, 2));
 
    printf("\n 3 + 4 + 5 = %d ",
           AddNumbers(3, 3, 4, 5));
 
    printf("\n 6 + 7 + 8 + 9 = %d ",
           AddNumbers(4, 6, 7, 8, 9));
 
    printf("\n");
    
    goingThruList(4, 1,2,3,4,5);
    return 0;
}

*/

#include<stdio.h>
 int main(){
     int n, count = 0;
     printf("Enter the length of array");
     scanf("%d", &n);
     int arr[n], copy[n];
     for (int i = 0; i < n; i++){
         scanf("%d",&arr[i]);
         count = count + arr[i];
     }

     for (int i =0; i < n; i++){
         copy[i] = arr[i];
     }
     for (int i =0; i < n; i++){
         printf("%d  ",copy[i]);
     }
    
 }