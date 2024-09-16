#include <stdio.h>
#include <math.h>
int main(void)
{int x=0;
int y=0;
int sum=0;//각 y의 100,10,1의 자릿수*x 한 값을 저장하는 변수
int print_y[3];//각 y의 자릿수를 넣을 배열
scanf_s("%d%d", &x, &y);

for (int i = 2; i >= 0; i--)
{int div = (int)pow(10, i);//10의 거듭제곱 함수
print_y[i] = y / div;//100,10,1의 자릿수의 수들만 추출하여 배열에 저장
y = y % div;}//나머지로 초기화함으로써 100,10,1의 자릿수들만 남게 됨

for (int i = 0; i < 3; i++)
{printf("%d\n", print_y[i] * x);
sum = sum + (print_y[i] * x * (int)pow(10, i));}

printf("%d", sum);
}