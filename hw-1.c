#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	/* hw (1)
	중간고사와 기말고사 성적을 입력받아 평균을 내고, 이에 따라 학점을 출력하는 프로그램을 작성하시오.
	단, 학점은 다음과 같이 부여한다.
	평균 90점 이상: A
	평균 80점 이상: B
	평균 70점 이상: C
	평균 60점 이상: D
	평균 60점 미만: E
	입력: 중간고사와 기말고사 성적이 공백으로 구분되어 주어진다.
	출력: 평균과 학점을 공백으로 구분하여 출력한다.
	*/

	int x, y;
	//x=중간고사 성적, y=기말고사 성적
	printf("1번 문제\n중간고사, 기말고사 성적을 입력하시오 : ");
	scanf("%d %d", &x, &y);

	int z;
	//z=중간고사, 기말고사의 평균값
	z = (x + y) / 2;

	printf("평균, 학점 : %d", z);

	if (z >= 90)
	{
		printf(" A");
	}

	else if (z >= 80)
	{
		printf(" B");
	}

	else if (z >= 70)
	{
		printf(" C");
	}

	else if (z >= 60)
	{
		printf(" D");
	}

	else
	{
		printf(" E");
	}


	/* hw (2)
	1부터 100까지의 숫자 중에서 3의 배수만 출력하는 프로그램을 작성하시오.
	입력: 없음
	출력: 3의 배수룰 공백으로 구분하여 출력한다.
	*/

	int i = 1;
	printf("\n\n2번 문제\n1부터 100까지의 숫자 중 3의 배수\n ");
	do
	{
		if (i % 3 == 0) { printf("%d ", i); }
		i++;

	} while (i < 101);

	/* hw(3)
	계산기 프로그램을 작성하시오.
	사용자로부터 두 개의 정수를 입력받아 덧셈, 뺄셈, 곱셈, 나눗셈을 수행하는 프로그램을 작성하시오.
	두 개의 정수를 입력받은 후에는 사용자로부터 수행할 연산을 입력받아 해당 연산을 수행하고 그 결과를 출력한다.
	*/

	float a, b;
	char a_b;
	printf("\n\n3번 문제\n두 개의 정수를 입력하시오 : ");
	scanf("%f %f", &a, &b);

	printf("연산을 선택하시오 (+, -, *, /): ");
	scanf(" %c", &a_b);

	while (1)
	{
		if (a_b == '!')	break;

		switch (a_b)
		{
		case '+':
		{ printf("\n결과 : %f\n\n연산을 선택하시오. (+, -, *, /)\n'!' 입력시 프로그램이 종료됩니다. : ", a + b); }
		break;

		case '-':
		{ printf("\n결과 : %f\n\n연산을 선택하시오 (+, -, *, /)\n'!' 입력시 프로그램이 종료됩니다. : ", a - b);  }
		break;

		case '*':
		{ printf("\n결과 : %f\n\n연산을 선택하시오 (+, -, *, /)\n'!' 입력시 프로그램이 종료됩니다. : ", a * b); }
		break;

		case '/':
			if (b == 0)
			{
				printf("값을 나타낼 수 없습니다.\n\n연산을 선택하시오 (+, -, *, /)\n '!'입력시 프로그램이 종료됩니다. : ");
			}
			else
			{
				printf("\n계산 결과 : %f\n\n연산을 선택하시오 (+, -, *, /)\n '!' 입력시 프로그램이 종료됩니다. : ", a / b);
			}
			break;

		default: { printf("\n잘못된 연산자입니다.\n\n연산을 선택하시오 (+, -, *, /)\n '!' 입력시 프로그램이 종료됩니다. : "); }
			   break;
		}

		a_b == 0;
		scanf(" %c", &a_b);


	}

	/* hw(4)
	피라미드를 출력하는 프로그램을 작성하시오.
	단, 사용자로부터 입력받은 숫자만큼의 높이를 가지는 피라미드를 출력해야 한다.
	사용자로부터 높이를 입력받은 후에는, 정피라미드, 역피라미드를 선택할 수 있도록 한다.
	(정피라미드일 경우 1, 역피라미드일 경우 2를 입력)
	*/

	printf("\n\n4번 문제\n");

	int num ,line, direction;
	printf("원하는 피라미드의 높이를 자연수로 입력하시오. : ");
	scanf(" %d", &num);

	printf("\n정피라미드 출력을 원할 경우 1, 역피라미드 출력을 원할 경우 2를 입력하시오. : ");
	scanf(" %d", &direction);

	int pyramid;

	if (direction == 1)
	{
		printf("\n결과\n");

		for (line = 0; line < num; line++)
		{
			for (pyramid = 0; pyramid <= (num - line); pyramid++)
			{
				printf(" ");
			}
			for (pyramid = 0; pyramid <= (line * 2); pyramid++)
			{
				printf("*");
			}
			printf("\n");
		}
	}

	else if (direction == 2)
	{
		printf("\n결과\n");
		for (line = 0; line <= num; line++)
		{
			
			for (pyramid = 0; pyramid <= line+1; pyramid++)
			{
				printf(" ");
			}
			for (pyramid = (2*num) - 1; pyramid>line*2; pyramid--)
			{
				printf("*");
			}

			printf("\n");

		}
	}


	return 0;
}