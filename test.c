#include <stdio.h>
int main()
{
    printf("Hello World");
    int size;
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("%d", i * 5);
        if (i == 9)
        {
            printf("Hey");
        }
    }
    if (true)
        printf("Hello");
    return 0;
}