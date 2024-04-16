#include <stdio.h>
#include <time.h> 
#include <stdlib.h> 

#define _CRT_SECURE_NO_WARNINGS


/*
1. �ִ� �����/�ּ� �����.

�ִ� �����(GCD), �ּ� �����(LCM)�� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.
�ִ� �����(GCD)�� �� ���� ����� ��� �� ���� ū ���� �ǹ��ϸ�, �ּ� �����(LCM)�� �� ���� ����� ��� �� ���� ���� ���� �ǹ��Ѵ�.
�� ���� �Է¹޾� �ִ� �����(GCD)�� �ּ� �����(LCM)�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
��, �Լ��� �̿��Ͽ� �ۼ��Ͻÿ�.

HINT : GCD�� ����Լ��� �̿��Ͽ� �ۼ��� �� �ְ�, LCM�� GCD�� �̿��Ͽ� ����� �� �ִ�.

�Է�
�� ���� �Էµȴ�. (1 <= a, b <= 1000)

���
�ִ� �����(GCD)�� �ּ� �����(LCM)�� ����Ѵ�.
*/

/*
* 2. �Ǻ���ġ ���� / ����Լ�
�Ǻ���ġ ������ ����Լ��� �����ϰ�, n��° �Ǻ���ġ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

ex)
input: 10
output: 55
*/

/*
3. 45�� ���� �˶� �����ϱ�.

�˶��� 45�� ���� �����Ϸ��� �Ѵ�. ���� ��� ���� �ð��� 23�� 58���̶��
�˶��� ������ �ð��� 23�� 13���� �ȴ�. 24�ð� ǥ�ø� ����Ѵ�.(0 <= H <= 23, 0 <= M <= 59)

�Է�
ù° �ٿ� �� ���� H�� M�� �־�����. (0 <= H <= 23, 0 <= M <= 59)

���
ù° �ٿ� ������ �˶� �ð��� ����Ѵ�.

���� �Է�
0 30
���� ���
23 45

���� �Է�
23 40
���� ���
22 55
*/


/// ����� �Լ�

int scannum()
{
	int x;
	printf("������ �Է��Ͻÿ� : ");
	scanf("%d", &x);
	return x;
}

char op()
{
	char x;
	printf("������ �����Ͻÿ�. ! �Է½� ���α׷��� ����˴ϴ�. (+, -, *, /): ");
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

///// ���丮�� ����� �Լ�

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

// �Ǻ���ġ ���� ��¿� �Լ�

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

// �ִ����� (GCD), �ּҰ���� (LCM) ��¿� �Լ�

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
	//hw 1-1 �Լ��� ǥ���� ���� ���α׷�

	printf("1 - 1 ���� ���α׷�\n");

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
				printf("��� : %d\n", add(a, b));
			}

			else if (a_b == '-')
			{
				printf("��� : %d\n", minus(a, b));
			}

			else if (a_b == '*')
			{
				printf("��� : %d\n", multi(a, b));
			}

			else if (a_b == '/')
			{
				if (b == 0) { printf("0���� ���� �� �����ϴ�.\n"); }
				else { printf("��� : %f\n", division(a, b)); }
			}

			else
			{
				printf("�߸��� �������Դϴ�.\n");
				goto index;
			}
		}

	} while (1);


	//hw 1-2 �ζ� ��ȣ ������
	
	printf("\n1 - 2 �ζ� ��ȣ 100set ���\n");

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

	// hw 1-3 ����Լ��� �̿��� ���丮�� ����

	int input1_3;
	printf("\n1 - 3 ���丮�� ����\ninput : ");
	scanf("%d", &input1_3);
	printf("output : %d\n", fac(input1_3));

	// hw 2-1 �ִ����� / �ּҰ���� ��� ���α׷�
	
	int a1, a2;
	printf("\n2 - 1 �ִ� �����/�ּ� ����� ���\n");
	printf("1 �̻� 1000 ������ �� ���� �Է��Ͻÿ�. : ");
	scanf("%d %d", &a1, &a2);
	printf("�� ���� �ִ� ����� : %d\n�� ���� �ּ� ����� : %d\n", GCD(a1, a2), LCM(a1, a2));

	// hw 2-2 �Ǻ���ġ ����

	int input2_2;
	printf("\n2 - 2 �Ǻ���ġ ����\ninput : ");
	scanf("%d", &input2_2);
	printf("output : %d\n", fibbo(input2_2 - 1));

	// hw 2-3 �˶��ð�

	int h1, h2, m1, m2;
	h2 = m2 = 0;
	printf("\n2 - 3 �˶��ð�\n 45�� ���� �˶��� �����Ǵ� ���α׷��Դϴ�.\n���� �ð��� �Է��Ͻÿ�.: ");
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
	printf("�˶��� ������ �ð��Դϴ�: %02d %02d\n", h2, m2);

	return 0;

}

