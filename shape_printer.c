#include <stdio.h>

int main()
{
    int choice, i, j, n;

    printf("\n===== SHAPE PRINTER =====\n");
    printf("1. Heart\n");
    printf("2. Star\n");
    printf("3. Circle\n");
    printf("4. Square\n");
    printf("5. Rectangle\n");
    printf("6. Triangle\n");
    printf("7. Inverted Triangle\n");
    printf("8. Diamond\n");
    printf("9. Pyramid\n");
    printf("10. Hollow Square\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    printf("Enter size: ");
    scanf("%d", &n);

    if(n < 1)
    {
        printf("Please enter a positive size!");
        return 0;
    }

    switch(choice)
    {
        case 1:
            // Heart
            for(i = n/2; i <= n; i += 2)
            {
                for(j = 1; j < n-i; j += 2)
                    printf(" ");

                for(j = 1; j <= i; j++)
                    printf("*");

                for(j = 1; j <= n-i; j++)
                    printf(" ");

                for(j = 1; j <= i; j++)
                    printf("*");

                printf("\n");
            }

            for(i = n; i >= 1; i--)
            {
                for(j = i; j < n; j++)
                    printf(" ");

                for(j = 1; j <= (i*2)-1; j++)
                    printf("*");

                printf("\n");
            }
            break;

        case 2:
            // Star
            for(i = 1; i <= 9; i++)
            {
                for(j = 1; j <= 9; j++)
                {
                    if(i == 5 || j == 5 ||
                       i == j || i+j == 10)
                        printf("* ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        case 3:
            // Circle
            for(i = -n; i <= n; i++)
            {
                for(j = -n; j <= n; j++)
                {
                    if(i*i + j*j <= n*n)
                        printf("* ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        case 4:
            // Square
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= n; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 5:
            // Rectangle
            for(i = 1; i <= n/2+2; i++)
            {
                for(j = 1; j <= n; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 6:
            // Triangle
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 7:
            // Inverted Triangle
            for(i = n; i >= 1; i--)
            {
                for(j = 1; j <= i; j++)
                    printf("* ");
                printf("\n");
            }
            break;

        case 8:
            // Diamond
            for(i = 1; i <= n; i++)
            {
                for(j = i; j < n; j++)
                    printf(" ");

                for(j = 1; j <= 2*i-1; j++)
                    printf("*");

                printf("\n");
            }

            for(i = n-1; i >= 1; i--)
            {
                for(j = n; j > i; j--)
                    printf(" ");

                for(j = 1; j <= 2*i-1; j++)
                    printf("*");

                printf("\n");
            }
            break;

        case 9:
            // Pyramid
            for(i = 1; i <= n; i++)
            {
                for(j = i; j < n; j++)
                    printf(" ");

                for(j = 1; j <= 2*i-1; j++)
                    printf("*");

                printf("\n");
            }
            break;

        case 10:
            // Hollow Square
            for(i = 1; i <= n; i++)
            {
                for(j = 1; j <= n; j++)
                {
                    if(i == 1 || i == n ||
                       j == 1 || j == n)
                        printf("* ");
                    else
                        printf("  ");
                }
                printf("\n");
            }
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}
