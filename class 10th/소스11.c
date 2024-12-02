#include <stdio.h>
#include <stdlib.h>
int hp = 10;
int count;
void sum(int value)
{
	hp += value;
}


void Increase()
{
	static int score = 0;

	score++;

	printf("score : %d\n", score);
}

void main()
{
#pragma region 메모리
#pragma region CODE 영역
	// 프로세스가 실행할 코드와 매크로 상수가
	// 기계어 형태로 저장되는 공간입니다.


#pragma endregion

#pragma region DATA 영역
	//전역 변수와 정적 변수가 저장되는 공간입니다.
#pragma endregion

#pragma region Bss 영역
	// 초기화 되지 않은 변수가
	// 저장되는 공간입니다.

#pragma endregion

#pragma region STACK 영역
	// 함수의 호출과 관계되는 지역 변수와
	// 매개 변수가 저장되는 영역입니다.

#pragma endregion

#pragma region HEAP 영역
	// 사용자가 직접 할당하는 메모리 공간입니다.
#pragma endregion

#pragma region 지역변수
	// 함수 내부에 선언된 변수로, 함수 내부에서만 사용 가능하며,
	// {} 를 벗어나는 시점에 메모리가 해제디는 특징을 가지고있는 변수입니다.

	//	int x = 10;
	//	
	//	{
	//		int x = 20;
	//		printf("%d", x);
	//	}
	//	printf("%d", x);
	//	
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 접근이 가능하며, 프로그램이 실행될 때
	// 메모리에서 생성되고, 프로그램이 종료되어야만 메모리에서
	// 사라지는 특징을 가지고있는 변수입니다.
	//sum(20);
	//printf("%d\n", hp);
	//printf("%d\n", count);
#pragma endregion

#pragma region 정적 변수
	// 지역 변수와 전역변수의 특성을 가지고 있으며, 프로그램이 실행될 때 단 한번만 초기화가
	// 이루어지며, 프로그램이 실행될 때 메모리에 생성되고 프로그램이 종료
	// 되어야만 메모리에서 해제되는 특징을 가지고 있는 변수입니다.

	//Increase();
	//Increase();
	//Increase();
#pragma endregion

#pragma region 동적할당
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는
	// 작업입니다.
	
	//동적 할당은 실행 시간에 가변적으로 메모리의 크기를
	// 변경시킬 수 있으며, 동적으로 메모리의 크기를 할당할 때
	// 바이트 단위로 지정합니다.

	//	int* reference = (int *)malloc(sizeof(int));
	//	*reference = 100;
	//	printf("레퍼런스 값 :%d", *reference);	
	//	
	//	free(reference);

	//동적으로 할당한 메모리는 힙 영역에 보관되어 있으므로
	// 사용이 끝나면 직접 해제를 해주어야합니다.
#pragma endregion

#pragma region 허상 포인터
	// 이미 해제된 메모리 영역을 가리키는 포인터입니다.

	//	float * pointer = malloc(sizeof(float));
	//	
	//	*pointer = 37.5f;
	//	
	//	printf("pointer 가 가르키는 값 : %f\n", *pointer);
	//	
	//	free(pointer);
	//	
	//	pointer = NULL; //접근 못하게 NULL을 넣어야함.
	//	printf("pointer 가 가르키는 값 : %f\n", *pointer);

	

#pragma endregion

#pragma region 동적 배열
	//int* pointer = calloc(3,sizeof(int));
	//printf("pointer = %d\n", pointer);
	//
	//for (int i = 0; i < 3; i++)
	//{
	//	pointer[i] = (i + 1) * 10;
	//	printf("pointer[%d] = %d\n", i,pointer[i]);
	//	
	//}
	//
	//free(pointer);
	//pointer = NULL;//굳이 필요해 보이진 않음.
	//pointer = calloc(5, sizeof(int));
	//printf("새로운 포인터 :%d\n", pointer);
	//
	//for (int i = 0; i < 5; i++)
	//{
	//	printf("%d\n", pointer[i]);
	//}
	//free(pointer);



#pragma endregion


#pragma endregion

}