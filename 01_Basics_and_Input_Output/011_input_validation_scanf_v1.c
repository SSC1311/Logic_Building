#include<stdio.h>
#include<stdlib.h>

int main()
{

    int no = 0;

    printf("Enter number : \n");
    if(scanf("%d",&no) != 1)
    {
        printf("Invalid Input\n");

        return EXIT_FAILURE;
    }

    printf("Input is valid\n");


    return EXIT_SUCCESS;
}

// Command to compile and run the program
// gcc program11.c -o Myexe 
// ./Myexe