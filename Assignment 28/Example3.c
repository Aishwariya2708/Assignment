//3. write application which accept file name from user and read all data from that file and display contents on screen.


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

    int main()
    {
        char Fname[20]={'\0'};
        int fd=0;
        int iRet=0;
        char Buffer[1024]={'\0'};

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

            while ((iRet=read(fd,Buffer,sizeof(Buffer)))!=0)
            {
                //printf("%s",Buffer);
                write(1,Buffer,iRet);
                memset(Buffer,'\0',sizeof(Buffer));
            }

            close(fd);
        }

        return 0;
    }
