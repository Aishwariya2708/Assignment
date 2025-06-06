//3. Accpet N number from user and accept One Another  Number  As No ,return index last occurence of that No

#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iLength ,int iNo)
{
    int i=0;
for ( i =iLength -1; i>=0; i--)
    {
        if (Arr[i] == iNo)
        {
            return i;
        }
    }
    return -1;

}

int main()
{
 int iSize=0,iRet=0,iCnt=0,iValue=0;
 int * p=NULL;
 

 printf("Enter number of elements:\n");
 scanf("%d",&iSize);

 printf("Enter the number:\n");
 scanf("%d",&iValue);

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

 iRet=LastOcc(p,iSize,iValue);

 if(iRet == -1)
 {
    printf("There is no such number");

 }
 else
 {
    printf("Last occurence of number is %d",iRet);
 }
 free(p);

 return 0;

}
