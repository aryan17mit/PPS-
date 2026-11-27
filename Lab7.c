#include <stdio.h>

struct Student
{
    int roll;
    int m1, m2, m3;
    char name[30];
    int total;
    float per;
};

int main()
{
    int i, n;

    printf("--------- Student Information ---------");
    printf("\nEnter the no of records:");
    scanf("%d", &n);

    struct Student starr[n];

    for(i = 0; i < n; i++)
    {
        printf("Enter roll number:");
        scanf("%d", &starr[i].roll);

        printf("Enter the marks of 3 subjects:");
        scanf("%d %d %d", &starr[i].m1, &starr[i].m2, &starr[i].m3);

        printf("Enter the name of student:");
        scanf("%s", starr[i].name);

        starr[i].total = starr[i].m1 + starr[i].m2 + starr[i].m3;

        starr[i].per = starr[i].total / 3.0;
    }

    printf("\nRoll No\tName\tMarks\tTotal\tPercentage");

    for(i = 0; i < n; i++)
    {
        printf("\n%d", starr[i].roll);
        printf("\t%s", starr[i].name);
        printf("\t%d %d %d", starr[i].m1, starr[i].m2, starr[i].m3);
        printf("\t%d", starr[i].total);
        printf("\t%.2f", starr[i].per);

        if(starr[i].per < 20)
        {
            printf("\tFail");
        }
        else
        {
            printf("\tPass");
        }
    }

    return 0;
}
