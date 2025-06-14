/* 3. Write a program which accepts file name from user and count number of white space from that file*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountWhite(char *FName)
{
        int fd=0,iRet=0,iCnt=0,iWhiteCount=0;
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
                    if( (Buffer[iCnt]))
                    {
                        iWhiteCount++;
                    }
}
}
 close(fd);
 

    return iWhiteCount;

}

int main()
{
    char FName[30];
    int iRet=0;

    printf("Enter file name:\n");
    scanf("%s",FName);

    iRet=CountWhite(FName);

    if (iRet != -1)
    {
    printf("Number of White Characters Are:%d\n",iRet);

   }
    return 0;

}