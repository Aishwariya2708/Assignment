//4. Accpet N number from user and accept Raange, Display all elements from that range 

#include<stdio.h>
#include<stdlib.h>


void Range (int Arr[],int iLength ,int iStart,int iEnd)
{
    int i=0;
printf("Elements in range [%d, %d] are:\n", iStart, iEnd);
    for (int i = 0; i < iLength; i++)
    {
        if (Arr[i] >= iStart && Arr[i] <= iEnd)
        {
            printf("%d ", Arr[i]);
        }
    }
    printf("\n");
}

int main()
{
 int iSize=0,iRet=0,iCnt=0,iValue1=0,iValue2=0;
 int * p=NULL;
 

 printf("Enter number of elements:\n");
 scanf("%d",&iSize);

 printf("Enter the number:\n");
 scanf("%d",&iValue1);

 p=(int *)malloc (iSize * sizeof(int));

 if(p==NULL)
 {
    printf("Unable to allocate the memory ");
    return -1;
 }

 printf("Enter %d elements\n",iSize);
 
 for(iCnt=0;iCnt<iSize;iCnt++)
 {
    printf("Enter element :%d",iCnt+1);
    scanf("%d",&p[iCnt]);
 }

  Range(p,iSize,iValue1,iValue2);


 free(p);

 return 0;

}
