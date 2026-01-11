#include <stdio.h> 
/*Standard Input/Output library (표준입출력 라이브러리) => Header file*/
#pragma warning (disable : 4996) /*경고번호 4996인 error를 해결하기 위함*/

int main() { /*main함수*/

    int a, b; //사용자가 입력하는 숫자(정수)의 변수 선언
    int quot, remain; //몫(quotient), 나머지(remainder)의 변수 선언

    printf("Input two positive integers : "); //'두 개의 양의 정수를 입력하시오'라는 문장 출력
    scanf("%d%d", &a, &b); //두 개의 양의 정수를 입력받음

    quot = a / b; //몫 연산자 / 사용
    remain = a % b; //나머지 연산자 % 사용

    printf("The quotient is %d\n", quot);
    //""안에 있는 문장을 출력함, %d에는 변수 quot값으로 출력됨
    printf("The remainder is %d\n", remain);
    //""안에 있는 문장을 출력함, %d에는 변수 remain값으로 출력됨

    if (remain == 0) //조건(나머지값이 0과 같을 경우) 충족 시 바로 다음 문장 실행
        printf("%d is a multiple of %d by a factor of %d\n", a, b, quot);
    //나머지가 0인 경우 출력함
    else //조건 불충족시 else 다음 문장 실행
        printf("%d is not a multiple of %d\n", a, b); //나머지가 0이 아닌 경우 출력함

    system("pause");
    //'계속하려면 아무 키나 누르십시오...'라는 문장 출력과 동시에 일시정지 기능이 있는 함수
    return 0; //정상적인 종료(exit code) 혹은 0(실행 성공)을 의미함
}