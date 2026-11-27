#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[100], copy[200];
    char ch;
    int choice, result;

    printf("Enter first string : ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    do
    {
        printf("1. Find length \n");
        printf("2. Copy String \n");
        printf("3. Concatenate Strings \n");
        printf("4. Compare Strings \n");
        printf("5. Search Character \n");
        printf("6. Search Substring \n");
        printf("7. Exit \n");

        printf("Enter your choice : ");
        scanf("%d", &choice);
        getchar();

        switch(choice)
        {
            case 1:
                printf("Length = %zu \n", strlen(str1));
                break;

            case 2:
                strcpy(copy, str1);
                printf("Copied String : %s \n", copy);
                break;

            case 3:
                printf("Enter second string : ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strlen(str1) + strlen(str2) < sizeof(str1))
                {
                    strcat(str1, str2);
                    printf("Concatenated String : %s \n", str1);
                }
                else
                {
                    printf("Strings are too long to concatenate");
                }
                break;

            case 4:
                result = strcmp(str1, str2);
                if(result == 0)
                    printf("Strings are equal \n");
                else
                    printf("Strings are not equal \n");
                break;

            case 5:
                printf("Enter character to search : ");
                scanf("%c", &ch);
                getchar();

                if(strchr(str1, ch) != NULL)
                    printf("Character found. \n");
                else
                    printf("Character not found. \n");
                break;

            case 6:
                printf("Enter substring to search : ");
                fgets(str2, sizeof(str2), stdin);
                str2[strcspn(str2, "\n")] = '\0';

                if(strstr(str1, str2) != NULL)
                    printf("Substring found. \n");
                else
                    printf("Substring not found. \n");
                break;

            case 7:
                printf("Exiting the program. \n");
                break;

            default:
                printf("Invalid choice ! \n");
        }
    }
    while(choice != 7);

    return 0;
}
