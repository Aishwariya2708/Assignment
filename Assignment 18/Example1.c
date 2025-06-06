//1 Accept the N  Number from user and return diffrence between summation of even elements and summantion of odd element



#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)

{
int iCnt=0;
    int iDiff=0;
    int iEven=0,iodd=0;
printf(" elements of the array are:\n");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]%2==0))
        {
            iEven = iEven+Arr[iCnt];
     
        }
        if ((Arr[iCnt]%2!=0))
        {
            iodd = iodd+Arr[iCnt];
        }

        iDiff = (iodd - iEven);

      
    }
      return iDiff;
}
int main()
{

    int iLength=0,iRet=0,iCnt=0;
    int *p=NULL;

    printf("Enter  number of elements :\n");
    scanf("%d",&iLength);

    p=(int *)malloc(iLength*sizeof(int));

    if(p==NULL)
    {
        printf("Unable ton allocate memory");
        return -1;
    }
    printf("Enter %d elements :",iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        printf("Enter elements:%d\n ",iCnt+1);
        scanf("%d",&p[iCnt]);

    }
    iRet= Difference(p,iLength);
    printf("Result is %d",iRet);
    free (p);

    return 0;

}