import java.util.Scanner;

class program58
{   
    public static void main(String A[])
    {
        Scanner scanner = new Scanner(System.in);
        int iValue = 0;
        
        Iteration iteration = new Iteration();

        System.out.println("Enter the frequency : ");
        iValue = scanner.nextInt();

        iteration.Display(iValue);
    }
}

class Iteration
{
    public void Display(int iNo)
    {
        int iCnt = 0;

        // Input Filter
        // An input filter is a validation check written at the beginning of a method that rejects invalid input 
        // before the main logic runs. If the input is invalid, the method shows an error or message and exits early, 
        // usually with return. Only valid input reaches the main logic.
        // It is also called a guard clause or input validation. The idea is: validate first, work later.
        // NOTE : Remember to write the Input Filter before the loop(logic).
        if(iNo <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        for(iCnt = 1; iCnt <= iNo; iCnt++)
        {
            System.out.println("Jay Ganesh...");
        }
    }
}