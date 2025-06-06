/*  5. Accept division of student from user and depends on the division display exam timing. there are 4 division
 in school as A,B,C,B. Exam of division A at 7AM, B at 8:30 AM,C at 9:20 and D at 10:30 AM*/

 #include<stdio.h>

void  DisplaySchedule(char ch )
{
     if (ch >= 'a' && ch <= 'z') 
     {
        ch = ch - 32;
    }

    switch (ch)
    {
        case 'A':
            printf("Your exam is at 7:00 AM\n");
            break;
        case 'B':
            printf("Your exam is at 8:30 AM\n");
            break;
        case 'C':
            printf("Your exam is at 9:20 AM\n");
            break;
        case 'D':
            printf("Your exam is at 10:30 AM\n");
            break;

        default:
            printf("Invalid Division \n");
            break;
    }
}
 int main()
 {
    char cValue='\0';

    printf("Enter your division: \n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
 }