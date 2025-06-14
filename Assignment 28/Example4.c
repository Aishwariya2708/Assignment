//4. write application which accept file name from user and display size of file. 


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#define BUFFER_SIZE 1024
    int main()
    {
        char Fname[20]={'\0'};
        int fd=0;
        int iRet=0;
        int iSize=0;
          char Buffer[BUFFER_SIZE]={'\0'};

        printf("Enter the file name that we want to open:\n");
        scanf("%s",Fname);

        fd=open(Fname, O_RDONLY);  
        if(fd==-1)
        {
            printf("Unable to open file\n");
        }
        else
        {
            printf("file is succesfully opend with fd:%d\n",fd);

            while ((iRet=read(fd,Buffer,BUFFER_SIZE))>0)
            {

               iSize= iSize+iRet;

                memset(Buffer,'\0',BUFFER_SIZE);
            }
            printf("Size of the file '%s' is: %d bytes\n", Fname,iSize);

            close(fd);
        }

        return 0;
    }
