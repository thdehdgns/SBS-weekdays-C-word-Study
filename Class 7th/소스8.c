#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소값을 반환하는 연산자입니다.
	
	// 데이터의 주소값은 해당 데이터가 저장된 메모리
	// 의 시작 주소를 으미하며, 메모리의 공간은 1byte
	// 의 크기로 나누어 표현합니다.

	//int data = 10;
	//printf("%p",& data);

#pragma region scanf 함수
	// 표준 입력 함수로, 여러 종류의 데이터를 다양한
	// 서식에 맞추어 입력해주는 함수입니다.

	//표준 입력함수로 데이터를 입력하게 되면
	// 버퍼에 데이터를 보관하였다가 입력하는 순간.
	// 버퍼 안의 내용을 프로그램에 전송합니다.
	//int a = 0;
	//printf("a의 값을 입력해 주세요\n");
	//scanf_s("%d", &a);
	//printf("a의 값은: %d\n", a);

	//표준 입력함수는 입력을 수행할 떄까지 다음 
	//작업으로 넘어갈 수 없습니다.

	//버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	//서식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다
#pragma endregion

#pragma region STAR
	int a;
	printf("숫자를 입력해 주세요\n");
	scanf_s("%d", &a);
	for (int i= 0; i < a; i++)
	{
		printf("\n");
		for (int j = 0; j <= i; j++)
		{
			printf("*");
		}
		
	}
#pragma endregion


#pragma endregion



}