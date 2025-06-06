//3.Accept N number from user and return the difference between largest  number and smallest number . 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;
int Difference(int Arr[],int iLength)
{
int iCnt=0;
  int iMax=0;
  int iMin=0;
  int iDiff = 0;

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
iMax=Arr[0];

  for(iCnt=0;iCnt<iLength;iCnt++)
  {
    if(Arr[iCnt]>iMax)
    {
        iMax=Arr[iCnt]; 
    }
}
  printf("Maximum element is :%d\n",iMax);
  printf("Minimum element is :%d\n",iMin);
  
  iDiff = iMax - iMin;

  return iDiff;
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
    iRet= Difference(p,iSize);

    printf("Difference Number is %d",iRet);

    free(p);
    return 0;
}