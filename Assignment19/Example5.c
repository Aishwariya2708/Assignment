//5. Accept N numbers from user and acceptt one another number as no ,return freqeuncy of  No from  it 

#include<stdio.h>
#include<stdlib.h>



int Frequency(int Arr[],int iLength,int iNo)
{
  int iCnt=0;
  int iFreq=0;

  for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            printf("%d",iFreq++);
        }

    }    
    return iFreq;
}



int main()
{
int *p=NULL;
    int iSize=0,iCnt=0,iValue=0;
     int iRet=0;


printf("Enter number of elements:\n");
scanf("%d",&iSize);

printf("Enter the number to No for frequency: ");
    scanf("%d", &iValue);

p=(int*)malloc(iSize*sizeof(int));

if(NULL==p)
{
 printf("unable to allocate the memory\n");
 return -1;
}
printf("Enter %d elements",iSize);



for(iCnt=0;iCnt<iSize;iCnt++)
{
    printf("Enter the number %d:",iCnt+1);
    scanf("%d",&p[iCnt]);
}

iRet=Frequency(p,iSize,iValue);
printf(" %d",iRet);

free(p);

    return 0;
}
