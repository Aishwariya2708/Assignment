/* 5 . Write a program which accepts file name and one count from user and read that number of 
 characters  from starting position */


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

#define BUFFER_SIZE 1024
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

void DisplayN(char FName[], int iSize)
{
    int fd = 0, iRet = 0;
    char Buffer[BUFFER_SIZE] = {'\0'};

    fd = open(FName, O_RDONLY);
    if (fd == -1)
    {
        printf("Unable to open file\n");
        return;
    }

    printf("File is successfully opened with fd: %d\n", fd);

    iRet = read(fd, Buffer, iSize);
    if (iRet < 0)
    {
        printf("Error reading file\n");
        close(fd);
        return;
    }

    printf("Data read from file:\n");
    printf("%.*s\n", iRet, Buffer);

    close(fd);
}

int main()
{
    char FName[30];
    int iValue = 0;

    printf("Enter file name:\n");
    scanf("%s", FName);

    printf("Enter number of characters to read:\n");
    scanf("%d", &iValue);  

    DisplayN(FName, iValue);

    return 0;
}
