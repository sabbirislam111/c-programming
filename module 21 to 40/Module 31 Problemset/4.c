#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    char str[n][100];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (strcmp(str[i], "Tetrahedron") == 0)
        {
            count += 4;
        }
        else if (strcmp(str[i], "Cube") == 0)
        {
            count += 6;
        }
        else if (strcmp(str[i], "Octahedron") == 0)
        {
            count += 8;
        }
        else if (strcmp(str[i], "Dodecahedron") == 0)
        {
            count += 12;
        }
        else if (strcmp(str[i], "Icosahedron") == 0)
        {
            count += 20;
        }
    }
    printf("%d", count);
    return 0;
}
