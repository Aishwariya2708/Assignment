/* 4 . Write a program which accepts file name and one character from user and count number of 
occurrences of that characters  from that file*/


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024

int CountChar(char FName[],char ch)
{
        int fd=0,iRet=0,iCnt=0,iCharCount=0;
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
                    if( (Buffer[iCnt])==ch)
                    {
                        iCharCount++;
                    }
}
}
 close(fd);
 

    return iCharCount;

}

int main()
{
    char FName[30];
    int iRet = 0;
    char cValue;

    printf("Enter file name:\n");
    scanf("%s", FName);

    printf("Enter the character:\n");
    scanf(" %c", &cValue); 

    iRet = CountChar(FName, cValue);

    if (iRet != -1)
    {
        printf("Frequency of '%c' is: %d\n", cValue, iRet);
    }

    return 0;
}