#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c, d, e, f, ch;

    printf("Enter 1st number: \n");
    scanf("%d", &a);

    printf("Enter 2nd number: \n");
    scanf("%d", &b);

    while(1)
    {
        printf("\n1. Addition \n");
        printf("\n2. Subtraction \n");
        printf("\n3. Multiplication \n");
        printf("\n4. Division \n");
        printf("\n5. Exit \n");

        printf("Enter your choice : ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                c = a + b;
                printf("Addition : %d", c);
                break;

            case 2:
                d = a - b;
                printf("Subtraction : %d", d);
                break;

            case 3:
                e = a * b;
                printf("Multiplication : %d", e);
                break;

            case 4:
                f = a / b;
                printf("Division : %d", f);
                break;

            case 5:
                printf("Exit \n");
                exit(0);

            default:
                printf("Invalid choice \n");
        }
    }
}
