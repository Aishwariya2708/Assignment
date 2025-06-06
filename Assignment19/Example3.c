//3. Accept N numbers from user and check whether that numbers contains 11 in  it or not 

#include<stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0

typedef int bool;


bool Check(int Arr[],int iLength)
{
  int iCnt=0;
  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE;
        }
    }
    return FALSE;
}


int main()
{
int *p=NULL;
    int iSize=0,iCnt=0;
     
bool bRet=FALSE;

printf("Enter number of elements:\n");
scanf("%d",&iSize);

p=(int*)malloc(iSize*sizeof(int));
if(NULL==p)
{
 printf("unable to allocate the memory\n");
 return -1;
}
for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("\nEnter the number %d:",iCnt+1);
    scanf("%d",&p[iCnt]);
}

bRet=Check(p,iSize);

if(bRet== TRUE)
{
    printf("11 is present");
}
else
{
    printf("11 is absent");
}


free(p);

    return 0;
}
