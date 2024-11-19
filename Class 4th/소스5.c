#include <stdio.h>

#pragma region 전처리기
// 프로그램이 컴파일되기 이전에 프로그램에 대한
// 사전 처리하는 과정입니다.
// 전 처리기는 컴파일러가 아닌 선행처리기에 의해
// 처리되는 문장이기 때문에 명령문 끊게 ; 을 사용하지 않습니다.
#pragma endregion


void main()
{
#pragma region 실수를 저장하는 방법
	
	#pragma region 고정 소수점
	// 소수점의 위치를 고정하여 소수점의 위치를 
	// 나타내는 방법이다.

	// 고정 소수점은 정수부와 소수부의 크기가 작으므로
	// 표현할 수 있는 범위가 한정되어 있습니다.


	#pragma endregion

	#pragma region 부동 소수점
	// 소수점의 위치를 고정하지 않고 솟수점의 위치를 
	// 나타내는 방법입니다.

	//가수부에 있느 비트중에서 가장 왼쪽에 있는 수는 
	// 표현하지 않습니다.

	#pragma endregion

	#pragma region 실수 형태의 [10]진수를 [2]진수로 변환하는 과정
	// 10진수 실수 부분을 1.0이 될 때까지 계속 2로 곱한
	// 다음 곱한 결과의 정수 부분을 위에서 아래로 순서대로
	// 정렬합니다.

	//float packet = 3.125f;
	//float pi = 3.14159265f;
	
	//printf("packet 변수의 값: %f\n", packet);
	//printf("pi 변수의 값 : %.8f\n", pi); 

	// 표준 출력 함수로 소수를 출력할 때 4byte 크기의
	// 실수형 자료형은 소수점 이하 6자리까지만 표기하며,
	// 8 byte 크기의 실수형 자료형은 소수점 이하 15자리까지만 표기됩니다.


	#pragma endregion


#pragma endregion

#pragma region 조건문
	//어떤 조건이 주어질 때 해당 조건에 따라
	// 동작을 수행하도록 실행하는 명령문입니다.

	#pragma region 관계연산자
	// 두 개의 피연산자으 값을 비교하여 그 결과를
	// 0 또는 1이라는 값으로 나타내는 연산자입니다.

	 //int data[6];
	 //
	 //data[0] = 10 > 5;
	 //data[1] = 10 < 5;
	 //data[2] = 10 >= 5;
	 //data[3] = 10 <= 5;
	 //data[4] = 10 == 5;
	 //data[5] = 10 != 5;
	 //
	 //for (int i = 0; i < 6; i++)
	 //{
	 //	 printf("data%d의 값: %d\n",i+1, data[i]);
	 //}

	 // 관계 연산자는 조건이 맞을 때 1 이라는 값으로 반환되며,
	 // 조건이 틀릴 때는 0ㅇ라는 값으로 반환됩니다.

	#pragma endregion

	#pragma region if문
	// 어떤 특정한 조건을 비교하여 조건이 맞다면
	//실행되는 명령입니다.
	//int Hp = 10;

	//if (Hp <= 0)
	//{
	//	printf("Hp : %d\n", Hp);
	//	printf("HP가 %d가되어 죽었습니다.\n",Hp);
	//
	//}
	

	#pragma endregion

	#pragma region else if 문
	// if 문의 주건이 틀릴 때 else if문의 조건이 
	// 맞다면 실행되는 명령문입니다.

	//else if문은 여러개를 생성하는 것이 가능하며,
	//if문이 존재하지 않으면 else if 문은 작동안합니다.

	//char grade = 60;
	//
	//if (grade >= 60 )
	//{
	//	printf("당신의 등급은 A등급입니다.");
	//}
	//else if (grade >= 50)
	//{
	//	printf("당신의 등급은 B등급입니다.");
	//}
	


	#pragma endregion

	#pragma region else문
		//if 문과 else if문의 조건이 다 틀리면
		//실행되는 명령문입니다.

		//if문에 연결된 모든 조건문의 조건이 맞을 때
		//가장 위에 있는 조건문만 실행됩니다.
		//int a = 1;
		//
		//if (a >= 2)
		//{
		//	printf("a가 2보다 크거나 같다.");
		//}
		//else
		//{
		//	printf("a는 2보다 작음");
		//}


	#pragma endregion

	#pragma region switch문
		//어던 결과에 따라 그 결과부터 실행되는 명령문입니다.


	#pragma region break 문
		//특정한 지점에서 분기를 탈출하는 제어문입니다.


	#pragma endregion

		//char key = 'W';
		//
		//switch (key)
		//{
		//	// switch문은 해당 조건이 완료되었을 때, break
		//	// 문이 없으면 나머지 밑에 있는 case 문까지
		//	// 계속 실행시키다가 종료합니다.
		//	case 'W':
		//		printf("↑\n");
		//		break;
		//	case 'A':
		//		printf("←\n");
		//		break;
		//	case 'S':
		//		printf("↓\n");
		//		break;
		//	case 'D':
		//		printf("→\n");
		//		break;
		//	default :
		//		printf("다른 키를 입력해 주세요.");
		//		break;
		//}
		// switch문의 경우 해당하는 값에 따라 조건의
		// 위치로 이동합니다.
	#pragma endregion

	#pragma region 논리 연산자
	
	#pragma region AND연산자
	//	int level = 99;
	//	int exp = 10000;
	//	
	//	if (level >= 99 && exp >= 5000)
	//	{
	//		printf("전직을 할 수 있습니다.");
	//	}

	#pragma endregion

	#pragma region OR연산자

		//	int LEVEL = 1;
		//	int EXP = 10;
		//	
		//	if (LEVEL >= 5 || EXP >= 10)
		//	{
		//		printf("LEVEL이 5이상이거나 EXP가 10이상입니다.\n");
		//	}

	
	#pragma endregion

	#pragma region NOT 연산자
	
		//int state = 0;
		//
		//if (!state)
		//{
		//	printf("gmae start");
		//}

	#pragma endregion

	
	

	#pragma endregion


#pragma endregion


}