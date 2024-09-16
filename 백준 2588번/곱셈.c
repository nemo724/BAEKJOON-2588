#include <stdio.h>
#include <math.h>
int main(void)
{int x=0;
int y=0;
int sum=0;
int print_y[3];
scanf_s("%d%d", &x, &y);

for (int i = 2; i >= 0; i--)
{int div = (int)pow(10, i);
print_y[i] = y / div;
y = y % div;}

for (int i = 0; i < 3; i++)
{printf("%d\n", print_y[i] * x);
sum = sum + (print_y[i] * x * (int)pow(10, i));}

printf("%d", sum);
}