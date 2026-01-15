#include <stdio.h>  /*Standard Input/Output library (표준입출력 라이브러리) => Header file*/ 
#include <math.h> /*여러 수학함수를 포함하는 library => Header file*/ 
#pragma warning (disable : 4996) /*경고번호 4996인 error를 해결하기 위함*/ 
int main() { /*main 함수*/ 
	int a, b, c; //사용자가 입력하는 숫자의 변수 선언 
	printf("Input 3 positive integers : "); //'3개의 양의 정수를 입력하시오'라는 문장출력 
	scanf("%d%d%d", &a, &b, &c); //3개의 양의 정수를 입력받음 
	if (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) || pow(b, 2) + pow(c, 2) == pow(a, 2)) /*pow함수와 ||(논리합연산자) 이용 각 식 3개 중 하나라도 참이면 다음 문장실행*/ 
		printf("The 3 positive integers are the sides of a right triangle\n");  //조건 충족 시 실행 
	else printf("The 3 positive integers are not the sides of a right triangle\n");  //조건 불충족 시 실행 
	system("pause");  //'계속하려면 아무 키나 누르십시오...'라는 문장 출력과 동시에 일시정지 기능이 있는 함수 
	return 0; //정상적인 종료(exit code) 혹은 0(실행 성공)을 의미함 } 