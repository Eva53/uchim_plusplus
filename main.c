#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

void solution(int a,int b,int c)
{
  double D,x1,x2;
  D=b*b-4*a*c;
  if (D<0)
  {
      printf("Вещественных корней нет\n");
  }
  if (D>0)
  {
      x1=(-b+sqrt(D))/(2*a);
      x2=(-b-sqrt(D))/(2*a);
      printf("x1 = %f\n",x1);
      printf("x2 = %f\n",x2);
  }
  if (D==0)
  {
      x1=(-b+sqrt(D))/(2*a);
      printf("x1 = x2 = %f\n", x1);
  }
}
 
int main()
{
    setlocale(LC_ALL,"Rus");
    int a, b, c;
    printf("Введите коэффициенты уравнения:\n");
    scanf("%i %i %i", &a, &b, &c);
    solution(a,b,c);
    return 0;
}
