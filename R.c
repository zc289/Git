#include <stdio.h>
int main()
{
    int n1, n2, sumOfTwoNums;
    
    printf("Enter two integers: ");

    // two integers entered by user are stored using scanf()
    scanf("%d %d", &n1, &n2);

    // store sum in variable Sum
    sumOfTwoNums = n1 + n2;

    // display output     
    printf("%d + %d = %d\n", n1, n2, sumOfTwoNums);
    
    // check if the sum is even or odd, 
    // and print result to screen
    if(sumOfTwoNums % 2 == 0) printf("%d is even\n", sumOfTwoNums);
    else printf("%d is odd\n", sumOfTwoNums);

    return 0;
}