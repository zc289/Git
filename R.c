#include <stdio.h>
int main()
{
    int n1, n2, Sum;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    Sum = n1 + n2;

    // display output     
    printf("%d + %d = %d", n1, n2, Sum);

    return 0;
}