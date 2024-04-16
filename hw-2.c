#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

double get(double integer);
char get_1(char c);
double plus(double x, double y);
double minus(double x, double y);
double multi(double x, double y);
double division(double x, double y);
double re(double x, double y, char c);


int all(void)
{

	printf("정수를 입력하시오: ");
	double x = get(x);
	double y = get(y);
	printf("연산을 선택하시오: ");
	char z = get_1(z);
	double result = re(x, y,z);
	printf("결과: %lf", result);

	return 0;
}


double get()
{
	double integer;
	scanf(" %lf", &integer);
	return integer;
}

char get_1()
{
	char c;
	scanf(" %c", &c);
	return c;
}


double re(double x, double y, char c)
{
	double re;
	switch (c)
	{case '+':
		re = plus(x,y);
		break;
	case'-':
		re = minus(x, y);
		break;
	case'*':
		re = multi(x, y);
		break;
	case'/':
		re = division(x, y);
		break;
	default:
		printf("잘못된 입력입니다. 연산을 다시 선택해 주세요.");

	}
	return re;
}

double plus(double x, double y)
{
	return x + y;
}

double minus(double x, double y)
{
	return x - y;
}

double multi(double x, double y)
{
	return x * y;
}

double division(double x, double y)
{
	if (y=0)
	{
		printf("0으로 나눌 수 없습니다.");
		printf("\n연산을 선택하시오(+, -, *, / ) : ");
		
	}
	return x / y;
}

