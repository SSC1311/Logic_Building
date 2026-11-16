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

int main()
{
    int iValue1, iValue2, iResult;

    printf("Enter first number : \n");
    scanf("%d", &iValue1);

    printf("Enter second number : \n");
    scanf("%d", &iValue2);

    iResult = iValue1 + iValue2;                // Business Logic

    printf("%d\n",iResult);
    
    return 0;
}

// Command to compile and run the program
// gcc program4.c -o Myexe 
// ./Myexe