//2. write application which accept file name from user and create that file.


#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

    int main()
    {
        char Fname[20]={'\0'};
        int fd=0;
    
       
        printf("Enter the name of file:\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);
    if(fd==-1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    printf("file is succesfully created with FD %d\n",fd); 

    return 0;
}