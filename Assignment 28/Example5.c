//5. write application which accept file name from user and one string from user .write that string at the end of file. 


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
        
          char Buffer[BUFFER_SIZE]={'\0'};

        printf("Enter the file name that we want to open:\n");
        scanf("%s",Fname);

       fd = open(Fname, O_WRONLY | O_APPEND | O_CREAT, 0644);
    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File is successfully opened with fd: %d\n", fd);

        printf("Enter the string you want to write at the end of the file:\n");

        while (getchar() != '\n');

        fgets(Buffer, BUFFER_SIZE, stdin);

        int len = strlen(Buffer);
        if (Buffer[len - 1] == '\n')
         {
            Buffer[len - 1] = '\0';
        }
        iRet = write(fd, Buffer, strlen(Buffer));
        if(iRet == -1)
        {
            printf("Unable to write to the file\n");
        }
        else
        {
            printf("Data successfully written to the file.\n");
        }

        close(fd);
    }

    return 0;
}