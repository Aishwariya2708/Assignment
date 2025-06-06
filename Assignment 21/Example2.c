//2. Accept N number from user and return the Smallest number 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;
int Minimum(int Arr[],int iLength)
{
     int iCnt=0;
  int iMin=0;

   if((Arr==NULL )||(iLength<=0))
  {
    printf("Invalid input\n");
    return -1;
  }
   iMin=Arr[0];

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]<iMin)
    {
        iMin=Arr[iCnt]; 
    }
}
  return iMin;
}
int main()
{
    int iSize=0,iRet=0, iCnt=0, iValue=0;
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
    iRet=Minimum(p,iSize);

    printf("Smallest Number is %d",iRet);

    free(p);
    return 0;
}