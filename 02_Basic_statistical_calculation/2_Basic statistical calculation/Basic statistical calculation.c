#include <stdio.h>  /*Standard Input/Output library (표준입출력 라이브러리) => Header file*/ 
#pragma warning (disable : 4996) /*경고번호 4996인 error를 해결하기 위함*/ 
int main() { /*main함수*/ 
	int a, b, c; // 사용자가 입력하는 숫자의 변수 선언 
	int sum, mul, max, min, avg; ; // 덧셈(합계), 곱셈(multiply), 최댓값(maximum), 최솟값(minimum), 평균값(average)의  변수 선언 
	printf("Enter 3 different integers (1-9) : ");  //'3개의 다른 정수를 입력하시오(1-9)'라는 문장출력  
	scanf("%d%d%d", &a, &b, &c); //3개의 정수 입력받음 
	//덧셈, + 연산자 이용 
	sum = a + b + c; 
	//곱셈, * 연산자 이용 
	mul = a * b *c; 
	//평균, / (나누기) 연산자 이용 
	avg = sum / 3; 
	//최댓값 (if/else if문 이용) 
	max = a; /*임의로 변수 max(최댓값)에 변수 a값 저장*/ 
	if (max <= b) /*조건 : 최댓값(=이 때는 a값)이 b값보다 작으면*/ 
		max = b; /*max(최댓값)에 b값 저장*/ 
	else if (max <= c) /*조건 : 최댓값(= max값)이 c값보다 작으면*/ 
		max = c; /*max(최댓값)에 c값 저장*/ //최솟값 (삼항연산자 이용) min = a; /*변수 min(최솟값)에 변수 a값 저장*/ 
	min = (min >= b ? b : min);  /*min(최솟값, a값)이 b값보다 크면 min(최솟값)에 b값 저장, 아니라면 그대로 유지*/ 
	min = (min >= c ? c : min);  /*min(최솟값)이 c값보다 크면 min(최솟값)에 c값 저장, 아니라면 그대로 유지*/ 
	printf("Sum is %d\n", sum); //합계값 출력 
	printf("Product is %d\n", mul); //곱셈값 출력 
	printf("Average is %d\n", avg); //평균값 출력 
	printf("Largest is %d\n", max); //최댓값 출력 
	printf("Smallest is %d\n", min); //최솟값 출력 system("pause");  //'계속하려면 아무 키나 누르십시오...'라는 문장 출력과 동시에 일시정지 기능이 있는 함수 
return 0; //정상적인 종료(exit code) 혹은 0(실행 성공)을 의미함 } 