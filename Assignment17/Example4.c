//4. Accept numebr of rows and number of columns from user and display below pattern



#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0 ,j=0;
 for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
        if(i == 1 || i == iRow || j == 1 || j == iCol)
            {
                printf("*\t");
            }
            else if(i == 2 && (j >= 2 && j <= 4))
            {
                printf("#\t");
            }
           else if(i == 2 && (j == 6))
            {
                printf("$\t");
            }
           else if(i == 3 && j == 2)
            {
                printf("#\t");
            }
            else if(i == 3 && (j == 4 || j == 5))
            {
                printf("$\t");
            }
             else if (i == 4 && (j == 3 || j == 4 || j == 5))
            {
                printf("$\t");
            }
            else
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
}


    

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}