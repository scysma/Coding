#include <stdio.h>

int sumTwo(int a, int b) 
{
    return a + b;
}

int main() 
{
    int num1;
    int num2;
    int result;
	
    num1 = 7;
    num2 = 27;
    result = sumTwo(num1, num2);
    printf("%d\n", result);
    return 0;
}
