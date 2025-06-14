/* 1. Write a program which accepts file name from user and count number of capital characters from that file*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountCapital(char *FName)
{
        int fd=0,iRet=0,iCnt=0,iCapCount=0;
        char Buffer[BUFFER_SIZE]={'\0'};


    fd=open(FName, O_RDONLY);  
        if(fd==-1)
        {
            printf("Unable to open file\n");
             return -1;
        }
            printf("file is succesfully opend with fd:%d\n",fd);

            while ((iRet=read(fd,Buffer,BUFFER_SIZE))>0)
            {
                for(iCnt=0;iCnt<iRet;iCnt++)
                {
                    if((Buffer[iCnt]>='A')&&(Buffer[iCnt]<='Z'))
                    {
                        iCapCount++;
                    }
}
}
 close(fd);
 

    return iCapCount;

}

int main()
{
    char FName[30];
    int iRet=0;

    printf("Enter file name:\n");
    scanf("%s",FName);

    iRet=CountCapital(FName);

    if (iRet != -1)
    {
    printf("Number of Capital Characters Are:%d\n",iRet);

   }
    return 0;

}