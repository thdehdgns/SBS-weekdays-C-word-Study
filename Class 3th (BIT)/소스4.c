#include <stdio.h>

void main()
{
	#pragma region 오버플로우
	//특정한 잘형이 표현할 수 있는 최댓값의 범위를
	// 넘어서 연산을 수행하는 과정입니다.

	//char character = 129;
	//printf("캐릭터의 값 :%d", character);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때, 오버플로우가 발생하면 infinity라는 값이 출력됨
#pragma endregion

	#pragma region 언더플로우
	//특정한 자료형이 표현할 수 있는 최솟값의 범위
	//를 넘어서 연산을 수행하는 과정입니다.

	//char alphabet = -130;
	//
	//printf("알파벳의 값: %d\n", alphabet);

	// 언더플로우는 부호없는 자료형에서도 똑같이 발생
	//하며, 실수일 대 언더플로우가 발생하면 0이라는 값이 출력됩니다.


#pragma endregion

	#pragma region 시프트 연산자
	//비트의 위치를 오른쪾 도는 왼쪽으로 특정한 수만큼
	//이동시키는 연산자 입니다.

	//int x = 10;
	//int y = 12;
	//
	//printf("x의 값을 두번 왼쪽으로 이동한 결과: %d\n", x << 2);
	//printf("y의 값을 두번 오른쪽으로 이동한 결과: %d\n", y >> 2);

#pragma endregion

	#pragma region 산술 연산자
	// 변수 + 변수
	// int result1 <- 변수 + 변수
	// int result2 <- 리터럴 상수 - 변수
	// int result3 <- 심볼릭 상수 * 러터럴 상수
	// int result4 <- 리터럴 상수 / 리터럴 상수
	// int result5 <- 심볼릭 상수 % 심볼릭 상수

	//int result[5];
	//
	//int a, b;
	//a = 5;
	//b = 6;
	//const int C = 12;
	//const int D = 4;
	//int A = 5;
	//const int B = 12;
	//
	//result[0] = a + b;
	//result[1] = A - b;
	//result[2] = B * A;
	//result[3] = A / A;
	//result[4] = C % D;
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("result%d : %d\n", i+1, result[i]);
	//}

#pragma endregion

	#pragma region 부호 없는 자료형
	unsigned short mineral = 65535 + 1; //오버플로우 발생 > 최소값됨
	unsigned int gas = -1;

	printf("mineral : %u\n", mineral);

	printf("gas 변수의 값: %u\n", gas);//언더플로 > 최댓값됨

	printf("gas 변수의 값: %d\n", gas);//%d라서 -1나옴
#pragma endregion


}