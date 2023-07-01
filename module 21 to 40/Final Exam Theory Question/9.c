#include<stdio.h>
struct Student
{
    int roll;
    int clas;
    int marks;
    int total;

};

int main()
{
    int sum = 0;

    int n;
    scanf("%d", &n);
    struct Student stu[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &stu[i].roll, &stu[i].clas, &stu[i].marks);

    }

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < i; j++)
        {
            if(stu[i].roll == stu[j].roll)
            {
                sum += stu[j].marks;
            }
        }
        int new_sum = stu[i].marks+sum;
        stu[i].total = new_sum;
    }

    printf("\n\n");

    for(int i = 0; i < n; i++)
    {
        printf("%d %d %d %d\n", stu[i].roll, stu[i].clas, stu[i].marks, stu[i].total);
    }

    return 0;
}
