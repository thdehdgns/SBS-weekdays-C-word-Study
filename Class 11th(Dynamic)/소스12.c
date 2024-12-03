#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct GameObject
	{
		char grade;
		double Atk; // 애가 8바이트라서 패딩도 7바이트가된거같음
		int Hp;
		
		// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리의
		// 크기가 다르게 설정될 수 있으며, 구조체 크기를 결정하는
		// 형태는 기본 자료형으로만 구성되어 있습니다.
	};


struct Cha {
	float x;
	float y;
};

struct Monster
{
	float x;
	float y;

};

int main()
{
	
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.
	//	struct GameObject gameobject;
	//	
	//	gameobject.Hp = 75;
	//	gameobject.Atk = 5.5f;
	//	gameobject.grade = 'A';
	//	
	//	printf("%d\n", gameobject.Hp);
	//	printf("%f\n", gameobject.Atk);
	//	printf("%c\n", gameobject.grade);
 	// 구조체를 선언하기 전에 구조체는 메모리 공간이
	// 생성되지 않으므로, 구조체 내부에 있는 데이터를
	// 초기화할 수 없습니다.

#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 cpu로 읽을 때 한번에
	// 읽을 수 있도록 컴파일러가 레지스터의 블록에 맞춰
	// 바이트를 패딩해주는 최적화 작업입니다.

	//struct GameObject gameobject = {'A',70,5.5f};
	//printf("%d",sizeof(gameobject));//CPU가 한번에 4byte씩 읽어서 이렇게됨;
	
	
	

	// 구조체의 크기는 구조체를 구성하는 멤버 중에 크기가 
	// 가장 큰 자료형의 배수가 되도록 정렬합니다.
#pragma endregion

#pragma region 두 점 사이의 거리
	//printf("100의 제곱근 : %lf\n", sqrt(100));

	//printf("10² : %lf\n", pow(10, 2));
	struct Cha cha;
	struct Monster mon;

	cha.x = 1.0f;
	cha.y = 2.0f;

	mon.x = 4.0f;
	mon.y = 1.0f;

	float Value = 0.0f;

	Value = sqrt(pow(cha.x - mon.x, 2) + pow(cha.y - mon.y, 2));

	if (Value <= 3.0f)
	{
		printf("공격");
	}
	else if (Value >= 3.0f)
	{
		printf("이동");
	}

#pragma endregion


	return 0;
}