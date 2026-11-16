/*
    Step 1 : Understand the Problem Statement
    Step 2 : Write the algorithm
    Step 3 : Decide the Programming Language
    Step 4 : Write the Program
    Step 5 : Test the Program
*/

//////////////////////////////////////////////////////////////
//
// Step 1 : Understand the Problem Statement
//          User is going to enter any 2 integers 
//          And we have to perform addition
//
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
// Step 2 : Write the algorithm
/*
    START
        Accept first number as No1
        Accept second number as No2
        Create variable as Ans to store the result
        Perform the Addition and store into Ans
        Display the result from Ans
    END
*/
//////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////
//
// Step 3 : Decide the Programming Language
//          We select C Programming
//  
//////////////////////////////////////////////////////////////  

//////////////////////////////////////////////////////////////
//
// Step 4 : Write the Program
//
//////////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;
    
    iAns = iNo1 + iNo2;     // Business Logic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = Addition(iValue1, iValue2);               

    printf("Addition is : %d\n",iResult);
    
    return 0;
}

// Command to compile and run the program
// gcc program6.c -o Myexe 
// ./Myexe