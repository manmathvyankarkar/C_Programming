#include<stdio.h>

bool CheckEvenOdd(int iNo)
{
    int iRemainder = 0;

    iRemainder = iNo % 2;

    if(iRemainder == 0)
    {
       return true; 
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    int iRet = false;

    printf("Enter number to check whether it is Even or Odd : ");
    scanf("%d",&iValue);

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is Even\n",iValue);
    }
    else
    {
        printf("%d is Odd\n",iValue);
    }

    return 0;
}