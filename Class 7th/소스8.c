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
#pragma endregion

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
	//	int a;
	//	printf("숫자를 입력해 주세요\n");
	//	scanf_s("%d", &a);
	//	for (int i= 0; i < a; i++)
	//	{
	//		printf("\n");
	//		for (int j = 0; j <= i; j++)
	//		{
	//			printf("*");
	//		}
	//		
	//	}

	
#pragma endregion

#pragma region 포인터
	// 메모리 주소 값을 저장할 수 있는 변수입니다.

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 주소를 저장하게 되면 해당
	// 변수의 시작 주소를 가르키게 됩니다.

	//	int x[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	
	//	int * pointer;
	//	pointer = &x[3];
	//	*pointer = 99;
	//	
	//	printf("x3의 주소값 :%p\n", &x[3]);
	//	printf("x3의 값 : %d\n", x[3]);
	//	printf("pointer의 변수값 : %p\n", pointer);
	//	printf("pointer의 고유 주소값: %p\n", &pointer );
	//	
	//	float health = 100.0f;
	//	 pointer = &health;
	//	*pointer = 15.5f; // 포인터와 변수의 자료형이 다름 ;
	//	printf("health의 변수의 값 : %f\n", health);
	//	
	//	//포인터 변수를 저장하기 위해 주소 값을 저장할 변수의 
	//	// 자료형과 포인터 변수의 자료형이 일치해야 한다
	//	
	//	printf("포인트 변수의 크기 : %d \n", sizeof(pointer));

	// 포인터 변수으 ㅣ크기는 중앙 처리장치가 한 번에 처리할 수 
	// 있는 크기로 정해지며, 한 번에 처리할 수 있는 크기는
	// 운영 체제에 따라 크기가 결정됩니다.

	
#pragma endregion

#pragma region 범용 포인터
	// 자료형이 정해지지 않은 상태로 모든 자료형을
	// 저장할 수 있는 포인터입니다.

	// 범용 포인터는 메모리 주소에 접근해서 값을/
	// 변경할 수 없습니다.

	//범용 포인터로 변수의 메모리에 접근하려면
	//범용 포인터가 가르키는 변수의 자료형으로
	// 형 변환을 해주어야 합니다.
	//	void* p =NULL;
	//	int integer = 2;
	//	char c = 'A';
	//	float decimal = 5.5f;
	//	
	//	p = &c;
	//	*(char*)p = 'B';
	//	
	//	p = &integer;
	//	*(int*)p = 15;
	//	
	//	p = &decimal;
	//	*(float*)p = 0.5f;
	//	printf("%d\n",integer);
	//	printf("%c\n", c);
	//	printf("%f\n", decimal);

#pragma endregion

#pragma region 상수 지시 포인터
//	const int* ptr;
//	int x = 10;
//	int y = 20;
//	
//	//상수 지시 포인터를 선언하게 되면 포인터 변수가
//	// 가리키고 있는 주소에 존재하는 값을 변경할 수 
//	//없도록 설정할 수 있습니다.
//	//*ptr = 10; <- 이게 안된다는 소리
//	ptr = &x;
//	printf("ptr 변수가 가르키는 값: %d\n", *ptr);
//	ptr = &y;
//	printf("ptr 변수가 가르키는 값: %d\n",*ptr);
//	
//	
//	
//	char a[100] = "안녕하세요 저는 문자열입니다";
//	printf("\n%s", a);
#pragma endregion

#pragma region 포인터 상수 
// 상수 지시 포인터의 반대. 포인터에 접근해서 메모리 변경은 가능
//	int positionX = 5;
//	int positionY = 0;
//	int * const cptr = positionX;
//	
//	
//	*cptr = 20;

//포인터 상수는 해당 변수의 값을 변경할 수 있지만,
// 다른 메모리 주소를 저장할 수 없습니다.
#pragma endregion



}