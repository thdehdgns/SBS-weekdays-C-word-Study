#include <stdio.h>
#include <windows.h>
void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	// 배열의 경우 첫 번째 원소는 0부터 시작합니다.

	//배열은 원하는 원소에 원하는 값을 저장할 수 있으며,
	// 배열의 크기는 컴파일이 되는시점부터 고정된 메모리
	// 결과를 가지게됩니다.
	//	printf("flaot 자료형의 크기 : %d\n", sizeof(float));
	//	
	//	int array[10] = { 1,3,5,7,9,11,13,15,17,19};
	//	for (int i = 0; i < sizeof(array)/sizeof(int); i++)
	//	{
	//		printf("array[%d]:%d\n",i, array[i]);
	//	}
	//	printf("array의 배열 갯수: %d\n", sizeof(array) / sizeof(int));

	//	float List [ ] = { 1.25f,2.6f,4.5f,4.521f };
	//	
	//	for (int i = 0; i < sizeof(List)/sizeof(float); i++)
	//	{
	//		printf("array[%d] = %f\n", i, List[i]);
	//	}

	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서
	// 설정한 요소에 따라 배열의 크기가 결정됩니다.
	
	// 배열은 연속적인 메모리 공간을 가지며, 배열의 이름음
	// 배열의 시작주소를 가리킵니다.

	//	float* p = List;
	//	p += 2;
	//	*p  = 7.875f;
	//	printf("%f\n", List[2]);
	//	printf("%p", &List[2]);
	//	printf("\n % p", p);


	
	
#pragma endregion

#pragma region 문자열 
	// 연속적인 메모리 공간에 저장된 문자 변수의
	// 집합니다.

	// 문자열의 경우 포인터를 이용하여 문자열 상수를 
	// 가리키도록 할 수 있으며, 문자열 상수는 데이터
	// 영역의 읽기 전용 공간에 저장되기 때문에
	// 문자열의 값을 변경할 수 없습니다.

	//	const char * string = "오늘은 화요일";
	//	
	//	printf("string 변수의 값: %s\n", string);
	//	
	//	string = "Stack";
	//	
	//	printf("string 변수의 값: %s\n", string);
	//	
	//	
	//	printf("string 변수의 크기: %d\n", sizeof("오늘은 화요일"));

	//문자열은 공백도 함께 메모리 공간에 포함하여 크기가
	// 결정되며, 마지막에 문자열의 끝을 아렬주는 제어
	// 문자가 추가됩니다.
	//char word[] = { "darkness" };
	//char content[] = { "GitHub" };
	//printf("%d", sizeof(word));

	// 문자열의 경우 서로 연속적인 메모리 공간으로 연결되어
	// 있지만, 문자 배열 사이에 무효의 문자를 넣게 되면
	// 무효의 문자까지만 출력합니다.

	//word[4] = '\0';
	//printf("%s\n",word);


#pragma endregion

#pragma region ASCII코드
	// 미국 ANSI에서 표준화한 정보 교환용 7bit 부호 체계입니다.

	//	char alphabet = 65;
	//	for (int i = 0; i < 26; i++)
	//	{
	//		printf("%c\n", alphabet + i);
	//	}
	
#pragma endregion



}