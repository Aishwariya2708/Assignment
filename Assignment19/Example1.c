//1. Accept N numbers from user and reurn frequency of even number 

#include<stdio.h>
#include <stdlib.h>


int CountEven(int Arr[],int iLength)
{
  int iCnt=0;
  int iCount=0;
 
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
int *p=NULL;
    int iSize=0,iCnt=0,i;
     int iRet=0;

printf("Enter number of elements:\n");
scanf("%d",&iSize);

p=(int*)malloc(iSize*sizeof(int));
if(NULL==p)
{
 printf("unable to allocate the memory\n");
 return -1;
}

printf("Enter the elements :\n",iSize);
for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("\nEnter the number %d:",iCnt+1);
    scanf("%d",&p[iCnt]);
}

iRet=CountEven(p,iSize);

    printf(" Result is %d \n",iRet);

free(p);

    return 0;
}
