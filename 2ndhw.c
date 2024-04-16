#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

#define _CRT_SECURE_NO_WARNINGS


/*
1. 최대 공약수/최소 공배수.

최대 공약수(GCD), 최소 공배수(LCM)를 구하는 프로그램을 작성하시오.
최대 공약수(GCD)는 두 수의 공통된 약수 중 가장 큰 수를 의미하며, 최소 공배수(LCM)는 두 수의 공통된 배수 중 가장 작은 수를 의미한다.
두 수를 입력받아 최대 공약수(GCD)와 최소 공배수(LCM)를 출력하는 프로그램을 작성하시오.
단, 함수를 이용하여 작성하시오.

HINT : GCD는 재귀함수를 이용하여 작성할 수 있고, LCM은 GCD를 이용하여 계산할 수 있다.

입력
두 수가 입력된다. (1 <= a, b <= 1000)

출력
최대 공약수(GCD)와 최소 공배수(LCM)를 출력한다.
*/

/*
* 2. 피보나치 수열 / 재귀함수
피보나치 수열을 재귀함수로 구현하고, n번째 피보나치 수를 출력하는 프로그램을 작성하시오.

ex)
input: 10
output: 55
*/

/*
3. 45분 일찍 알람 설정하기.

알람을 45분 일찍 설정하려고 한다. 예를 들어 현재 시간이 23시 58분이라면
알람을 설정한 시간은 23시 13분이 된다. 24시간 표시를 사용한다.(0 <= H <= 23, 0 <= M <= 59)

입력
첫째 줄에 두 정수 H와 M이 주어진다. (0 <= H <= 23, 0 <= M <= 59)

출력
첫째 줄에 설정한 알람 시간을 출력한다.

예제 입력
0 30
예제 출력
23 45

예제 입력
23 40
예제 출력
22 55
*/


/// 계산기용 함수

int scannum()
{
	int x;
	printf("정수를 입력하시오 : ");
	scanf("%d", &x);
	return x;
}

char op()
{
	char x;
	printf("연산을 선택하시오. ! 입력시 프로그램이 종료됩니다. (+, -, *, /): ");
	scanf(" %c", &x);
	return x;
}

int add (int a, int b)
{
	return a + b;
}
int minus(int a, int b)
{
	return a - b;
}
float division(float a, float b)
{
	return a / b;
}
int multi(int a, int b)
{
	return a * b;
}

///// 팩토리얼 계산기용 함수

int fac(int i)
{
	if (i==1)
	{
		return 1;
	}
	else
	{
		return i* fac(i - 1);
	}
}

// 피보나치 수열 출력용 함수

int fibbo(int i)
{
	if (i==1 || i == 0)
	{
		return 1;
	}
	else
	{
		return ( fibbo(i - 1) + fibbo(i - 2));
	}
}

// 최대공약수 (GCD), 최소공배수 (LCM) 출력용 함수

int GCD (int i, int j)
{
	if ( j == 0 )
	{
		return i;
	}
	else if ( i == 0 )
	{
		return j;
	}
	else
	{
		return GCD (j, (j % i));
	}
}

int LCM(int i, int j)
{
	return (i * j / GCD(i, j));
}

int main(void)

{
	//hw 1-1 함수로 표현된 계산기 프로그램

	printf("1 - 1 계산기 프로그램\n");

	do
	{
		int a = scannum();
		int b = scannum();
	   index:
		{
			char a_b = op();

			if (a_b == '!') break;

			if (a_b == '+')
			{
				printf("결과 : %d\n", add(a, b));
			}

			else if (a_b == '-')
			{
				printf("결과 : %d\n", minus(a, b));
			}

			else if (a_b == '*')
			{
				printf("결과 : %d\n", multi(a, b));
			}

			else if (a_b == '/')
			{
				if (b == 0) { printf("0으로 나눌 수 없습니다.\n"); }
				else { printf("결과 : %f\n", division(a, b)); }
			}

			else
			{
				printf("잘못된 연산자입니다.\n");
				goto index;
			}
		}

	} while (1);


	//hw 1-2 로또 번호 생성기
	
	printf("\n1 - 2 로또 번호 100set 출력\n");

	int set_number, random_number, n1, n2, n3, n4, n5, n6;
	srand((unsigned)time(NULL));

	for (set_number = 1; set_number < 101; set_number++)
	{
		printf("set %d : ", set_number);

			
		n1 = rand() % 45 + 1;

			do
			{
				n2 = rand() % 45 + 1;
			} while (n2 == ~n1);

			do
			{
				n3 = rand() % 45 + 1;
			} while (n3 == ~n1 && n3 == ~n2);

			do
			{
				n4 = rand() % 45 + 1;
			} while (n4 == ~n1 && n4 == ~n2 && n4 == ~n3);

			do
			{
				n5 = rand() % 45 + 1;
			} while (n5 == ~n1 && n5 ==~n2 && n5 ==~n3 && n5 ==~n4);

			do
			{
				n6 = rand() % 45 + 1;
			} while (n6 == ~n1 && n6==~n2 && n6 == ~n3 && n6 ==~n4 && n6 == ~n5);

			printf("%d %d %d %d %d %d", n1, n2, n3, n4, n5, n6);

		printf("\n");
	}

	// hw 1-3 재귀함수를 이용한 팩토리얼 계산기

	int input1_3;
	printf("\n1 - 3 팩토리얼 계산기\ninput : ");
	scanf("%d", &input1_3);
	printf("output : %d\n", fac(input1_3));

	// hw 2-1 최대공약수 / 최소공배수 출력 프로그램
	
	int a1, a2;
	printf("\n2 - 1 최대 공약수/최소 공배수 출력\n");
	printf("1 이상 1000 이하의 두 수를 입력하시오. : ");
	scanf("%d %d", &a1, &a2);
	printf("두 수의 최대 공약수 : %d\n두 수의 최소 공배수 : %d\n", GCD(a1, a2), LCM(a1, a2));

	// hw 2-2 피보나치 수열

	int input2_2;
	printf("\n2 - 2 피보나치 수열\ninput : ");
	scanf("%d", &input2_2);
	printf("output : %d\n", fibbo(input2_2 - 1));

	// hw 2-3 알람시계

	int h1, h2, m1, m2;
	h2 = m2 = 0;
	printf("\n2 - 3 알람시계\n 45분 일찍 알람이 설정되는 프로그램입니다.\n현재 시간을 입력하시오.: ");
	scanf("%d %d", &h1, &m1);


	if (m1 > 45)
	{
		h2 = h1;
		m2 = m1 - 45;
	}

	else
	{
		switch (h1)
		{
		case 00:
			h2 = 23;
			break;
		default:
			h2 = h1 - 1;
			break;
		}

		m2 = 60 - (45 - m1);

		switch (m2)
		{
		case 60:
			m2 = 0;
		default:
			m2 += 0;
		}

	}
	printf("알람이 설정된 시각입니다: %02d %02d\n", h2, m2);

	return 0;

}

