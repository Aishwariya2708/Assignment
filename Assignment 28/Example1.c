//1. write application which accept file name from user and open that file in read mode.


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

    int main()
    {
        char Fname[20]={'\0'};
        int fd=0;
    
       
        printf("Enter the file name that we want to open:\n");
        scanf("%s",Fname);

        fd=open(Fname,O_RDWR);
        if(fd==-1)
        {
            printf("Unable to open file\n");
        }
        else
        {
            printf("file is succesfully opend with fd:%d\n",fd);
            close(fd);
        }

        return 0;
    }
