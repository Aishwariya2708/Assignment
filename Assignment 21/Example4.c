//4.Accept N number from user and display all such numbers which contains 3 digits in it. 

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iLength)
{
int iCnt=0;


for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        int num = Arr[iCnt];
        if(num < 0)
        {
            num = -num;
        }
        if(num >= 100 && num <= 999)
        {
            printf("%d ", Arr[iCnt]);
        }
    }
    printf("\n");
}

int main()
{
    int iSize=0,iRet=0, iCnt=0;
    int * p=NULL;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

   

    p=(int *)malloc(iSize * sizeof(int));

    if(NULL ==p)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("\nEnter %d elements:",iSize);
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("\nEnter elements %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digits (p,iSize);
    free(p);
    return 0;
}