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

	printf("������ �Է��Ͻÿ�: ");
	double x = get(x);
	double y = get(y);
	printf("������ �����Ͻÿ�: ");
	char z = get_1(z);
	double result = re(x, y,z);
	printf("���: %lf", result);

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
		printf("�߸��� �Է��Դϴ�. ������ �ٽ� ������ �ּ���.");

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
		printf("0���� ���� �� �����ϴ�.");
		printf("\n������ �����Ͻÿ�(+, -, *, / ) : ");
		
	}
	return x / y;
}

