#include <stdio.h>

void main()
{
#pragma region 변수

	//데이터를 저장할 수 있는 메모리 공간을 생성하는 것
	
	#pragma region 자료형
		//데이터를 저장하기 위해 데이터의 형태를 정해주는 것 입니다.

		//char alphabet = 'A';
		//int integer = 100;
		//float decimal = 15.5f; //f를 넣어야됨 굳이 안넣어도 되지만 넣어야 편함 형변환 때문
		//alphabet = 'B';
		//integer = 95;
		//decimal = 10.85;


		//자료형은 각각의 자료형마다 크기가 정해져있으며, 자료형의
		//크기는 바이트 단위로 이루어져 있고, 자료형의 경우 자료형에
		//따라 저장할 수 있는 값의 종류와 범위가 결정됩니다.
	#pragma endregion

	#pragma region 서식 지정자
			// 출력하기 위한 자료형의 정보를 명시적으로 지정해주는 것입니다.

			// %c : 문자를 출력하기 위한 서식 지정자
			// %d : 정수를 출력하기 위한 서식 지정자
			// %f : 실수를 출력하기 위한 서식 지정자
			
			//printf("alphabet 변수의 값 : %c\n\ninteger 변수의 값 : % d\n\ndecimal 변수의 값 : % f\n\n", alphabet, integer , decimal );
	#pragma endregion

	#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 숫자로 시작할 수 없다. 
	//ex) int 5day; : 에러남 숫자가 앞에 있어서.

	//2. 변수의 이름은 대 소문자를 구분한다.
	//int Data;
	//int data;
	//서로 다른 변수다.

	// 3. 변수의 이름으로 예약어를 사용할 수 없다.
	// 예약어 : int, printf 등등 이미 있는 함수 이름 혹은 그외 등등

	// 4. 변수의 이름으로 공백이 포함될 수 없다.
	//ex) int count down; <- 변수 이름 띄워쓰기 안됨.

	// 5. 변수의 이름으로 특수 기호는 _와 $만 허용됨 
	//ex) int Gmae_Academy; 
	//ex) int Dash$Speed;
	

#pragma endregion



	//변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며, 
	//원래 저장되어 있는 값은 새로 저장되는 값에 의해 지워진다.

#pragma endregion

#pragma region 상수
	// 프로그램이 실행되는 동안 더 이상 변경할 수없는 메모리 공간

	const int value = 99;

	//value = 45; : 에러남

	//상수의 경우 메모리 공간을 가지고 있지 않은 상수를
	//리터럴 상수라고 하며, 메모리 공간을 가지고 있는 상수를
	//심볼릭 상수라고 한다.

	//상수는 메모리 공간을 생성하는 동시에 초기화해야 하며,
	//한 번 저장된 값은 더 이상 변경할 수 없습니다.



#pragma endregion


}
