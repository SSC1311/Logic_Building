#include<stdio.h>
#include<stdlib.h>

int main()
{
    int ret = 0;
    int no = 0;

    printf("Enter number : \n");
    ret = scanf("%d",&no);

    printf("Return value is : %d\n",ret);

    return EXIT_SUCCESS;
}

// Command to compile and run the program
// gcc program10.c -o Myexe 
// ./Myexe