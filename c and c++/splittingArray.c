/*
// using basics and loops 
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100];
    char newString[10][10]; 
    int i,j,ctr;
       printf("\n\n Split string by space into words :\n");
       printf("---------------------------------------\n");    
 
    printf(" Input  a string : ");
    fgets(str1, sizeof str1, stdin);	
 
    j=0; ctr=0;
    for(i=0;i<=(strlen(str1));i++)
    {
        // if space or NULL found, assign NULL into newString[ctr]
        if(str1[i]==' '||str1[i]=='\0')
        {
            newString[ctr][j]='\0';
            ctr++;  //for next word
            j=0;    //for next word, init index to 0
        }
        else
        {
            newString[ctr][j]=str1[i];
            j++;
        }
    }
    printf("\n Strings or words after split by space are :\n");
    for(i=0;i < ctr;i++)
        printf(" %s\n",newString[i]);
    return 0;
}



*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    int len = strlen(s);
    char str[50][15];
    int j = 0, ctr = 0;
    for (int i = 0; i<= len; i++)
    {	
    	if (s[i]==' '|| s[i]=='\0')
    	{
    		str[ctr][j] = '\0';
            ctr++;
            j = 0; 
    	}else {
            str[ctr][j] = s[i];
            j++;
        }
    }
    for (int i = 0; i < ctr; i++ ){
        printf("%s\n", str[i]);
    }
    return 0;
}