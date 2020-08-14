#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input;
    double number1,number2,result;

    printf("Choose an operation for the list by entering a character from the list below:\n");
    printf("- a: addition.\n- s: subtraction.\n- m: multiplication.\n- d: division.\n- q: quit\n");

    while((input = getchar()) != 'q')
    {
        if (input == '\n')
            continue;
        else
        {
            switch(input)
            {
            case'a':
                printf("\nYou chose addition opertion:\n");
                printf("\nEnter your first number:\n");

                while(scanf("%lf", &number1) == 0)
                {
                    printf("Please enter a valid number:\n");
                    scanf("%*s");
                }
                printf("Enter the second number:\n");

                while(scanf("%lf", &number2) == 0)
                {
                    printf("Please enter a valid number:\n");
                    scanf("%*s");
                }

                result = number1 + number2;
                printf("The result is: %lf + %lf = %lf\n", number1, number2, result);
                break;

            case 's':
                printf("\nYou chose subtraction operation:\n");
                 printf("Enter your first number:\n");

                while(scanf("%lf", &number1) == 0)
                {
                    printf("Please enter a valid number:\n");
                    scanf("%*s");
                }
                printf("Enter the second number:\n");

                while(scanf("%lf", &number2) == 0)
                {
                    printf("Please enter a valid number:\n");
                    scanf("%*s");
                }

                result = number1 - number2;
                printf("The result is: %lf - %lf = %lf\n", number1, number2, result);
                break;

            case 'm':
                printf("\nYou chose multiplication operation:\n");
                printf("Enter your first number: ");
                while(scanf("%lf", &number1) == 0)
                {
                    printf("Please enter a valid number\n");
                    scanf("%*s");
                }

                printf("Enter your second number: ");
                while(scanf("%lf", &number2) == 0)
                {
                    printf("Please enter a valid number\n");
                    scanf("%*s");
                }

                result = number1 * number2;
                printf("The result is: %lf x %lf = %lf", number1, number2, result);
                break;

            case 'd':
                printf("\nYou chose division operation:\n");
                printf("Enter your first number: \n");
                while(scanf("%lf", &number1) == 0)
                {
                    printf("Please enter a valid number\n");
                    scanf("%*s");
                }

                printf("Enter your second number: \n");
                printf("Remember, dividing by zero is not possible!\n");
                while(scanf("%lf", &number2) == 0)
                {
                    printf("Please enter a valid number\n");
                    scanf("%*s");
                }
                while(number2 == 0.0)
                {
                    printf("Dividing by zero is not possible, please enter any number you want, except for zero:");
                    while(scanf("&lf", &number2) == 0);
                    {
                        printf("Please enter a valid number:");
                        scanf("%*s");
                    }

                }

                result = number1 / number2;
                printf("The result is: %lf : &lf = %lf", number1, number2, result);
                break;

            default:
                printf("The input is invalid. Please enter a character from the following option list\n");
                break;
            }
        }
    printf("\nChoose an operation for the list by entering a character from the list below:\n");
    printf("\na: addition.\ns: subtraction.\nm: multiplication.\nd: division.\nq:quit\n");
    }
    printf("See you next time :D \n");
    return 0;
}

