#include <stdio.h>
int main()
{
    int num1 = 0;
    long int num2 = 0;
    long long int num3 = 0;
    double d = 0.0;
    float f = 0.0f;
    printf("%d %d %d %d %d,", (int)sizeof(num1), (int)sizeof(num2), (int)sizeof(num3), (int)sizeof(d), (int)sizeof(f));
   
}
