#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
    if((iNo % 2) == 0)
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
    bool bRet = false;
    // Explaination of above two lines:
    // int iValue = 0; --> This line declares an integer variable named 'i
    // Value' and initializes it to 0. It will be used to store the number entered by the user.
    // bool bRet = false; --> This line declares a boolean variable named 'bRet' and initializes it to false. 
    // It will be used to store the result of the CheckEven function, indicating whether the number is even or odd.

    printf("Enter number : \n");
    scanf("%d",&iValue);

    bRet = CheckEven(iValue);

    if(bRet == true)
    {
        printf("It is Even\n");
    }
    else
    {
        printf("It is Odd\n");
    }

    return EXIT_SUCCESS;
}