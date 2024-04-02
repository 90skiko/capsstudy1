/*#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a;
	printf("숫자 하나를 입력하세요 : ");
	scanf("%d", &a);

	printf("입력한 숫자는 %d입니다.\n", a);

	return 0;

}*/

/* 

2주차

%d 정수형   %c 문자형   %lf double   %s 문자열 서식문자
(2 -> 정수 / 2.0 -> 실수)

<변수 선언 방법>
int number = 0;
int number;
number = 0;

<연산자>
+ - * / 덧셈, 뺼셈, 곱셈, 나눗셈 연산자
나누기 연산자 ----> 0으로 나누지 않도록 주의
% 나머지 연산자 ex, 4%3=1 

<형 변환 방법>
1. 자동 형변환 (x)
2. 수동 형변환
int a, b;
scanf("%d %d", &a, &b);
printf("%lf", a/b);  
형 변환 ----> 앞에 (변환형) 붙이기

<증감 연산자>
a=5d일 때
1. a=a+1; ---> a=6이 됨 (=: 대입 연산자, 왼쪽 값에 오른쪽 값을 대입)
2. a += 1;
3. a++; a를 사용한 후 6이 됨
4. ++a; a가 즉시 6이 됨

<관계 연산자>
참이면 true, 거짓이면 false(0)를 리턴하는 연산자

a>b a가 b보다 크다 ---> 참이면 1, 거짓이면 0
a>=b 크거나 같다
a<b 작다
a==b 같다
a!=b !=not

<논리 연산자>
and : a&&b 모두 참이어야 1 리턴
or : a||b 참이 하나라도 있으면 1 리턴
not : !a 참이면 거짓, 거짓이면 참 리턴





3주차 - 제어문

<조건문>
조건의 참, 거짓 여부에 따라 실행을 하거나 하지 않음.

1. if else
if(condition){ }
else { }  ----> else 필수적이지 않음.

2. else if 
if(c1){ }
else if(c2) { }
else { }
if , else ---> 하나만 존재해야 함.
else if ---> 여러 개 존재해도 되지만 코드가 길어지고 가독성 X

3. switch
switch(condition){
case (1): _____
break;
case (2): _____
break;
case (3): _____
break;

break : 해당 조건문에서 탈출할 수 있게 해 줌.
continue : 루프를 탈출하고 처음으로 돌아가게 해 줌.



<반복문>

1. while : 조건이 참일 때까지만 반복함. (실행 전 컨디션 체크
int i = 0;
while(i<10) {
printf("%d", ++i);

/ do while : 실행 후 컨디션 체크.

2. for 
for(초기문; 조건문; 증감문){   }

for (int i=0; <10; i++){ printf ( ); }

3. Go to
-> 순서를 무시하고 원하는 곳으로 넘어갈 수 있음
코드가 복잡해져서 비추. . .


*/