
//3. write a program which accept number from user and print even factor of that number.

// Input : 36
// Output : 2	 6	12	18

#include<stdio.h>

void DisplayEvenFactors(int iNo)

{
    int  i=0;
    if (iNo <=0)
    {
        iNo= -iNo;
    }
    
    for(i=1; i<=iNo; i++)
    {
        if((i && iNo)==0)
        {

         printf("%d\t",i);
        }
    }
    
}
int main()
{
    int iValue=0;


    printf("Enter number\n");
    scanf("%d",&iValue);

     DisplayEvenFactors(iValue);

     return 0;
}
   


