#include <stdio.h>  /*Standard Input/Output library (표준입출력 라이브러리) => Header file*/ 
#include <math.h> /*여러 수학함수를 포함하는 library => Header file*/ 
#pragma warning (disable : 4996) /*경고번호 4996인 error를 해결하기 위함*/ 
int main() { /*main함수*/ 
	/*i, j, k : 누적변수이자 (i, j : side1, side2이며, k는 hypotenuse), user : 사용자가 입력한 수*/ 
	unsigned int i, j, k, user; printf("Enter the maximum hypotenuse: "); //"빗변의 최대 길이를 입력하시오: "가 출력됨 
	scanf("%d", &user); //사용자가 입력한 빗변의 최대 길이 값을 받음 
	printf("side1, side2, hypotenuse: \n"); //"변1, 변2, 빗변: "이 출력됨 
	for (i = 1; i <= user; i++) { //i는 1부터 사용자가 입력한 수까지 1씩 증가함 
		for (j = 1; j <= user; j++) { //j는 1부터 사용자가 입력한 수까지 1씩 증가함 
			for (k = 1; k <= user; k++) { //k는 1부터 사용자가 입력한 수까지 1씩 증가함 
				if (pow(i, 2) + pow(j, 2) == pow(k, 2)) {  //제곱함수 pow(밑, 승)을 이용한 조건 
					printf("%u, %u, %u\n", i, j, k); //unsigned int형이므로 %u로 설정 
				} 
			}
		} 
	} 
	system("pause");  //'계속하려면 아무 키나 누르십시오...'라는 문장 출력과 동시에 일시정지 기능이 있는 함수 
	return 0; //정상적인 종료(exit code) 혹은 0(실행 성공)을 의미함 
} 