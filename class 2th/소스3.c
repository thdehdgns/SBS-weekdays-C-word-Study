#include <stdio.h>

void main()
{
	#pragma region BIT
	//데이터를 나타내는 최소의 단위이며, 0 또는 1의
	//조합으로 논리 계산을 하는 단위입니다.

	char alphabet = 15; //[0][0][0][0][1][1][1][1]

	#pragma region (10)진수를 (2)진수로 변환하는 과정
	//10진수를 1이 될 떄까지 계속 2로 나누어 준 다음
	//나눈 위치의 나머지 값을 아래에서 위로 순서대로
	//정렬합니다.


#pragma endregion

	#pragma region (2)진수를 (10)진수로 변환하는 과정
	
	//1byte에 2진수로 저장된 값을 2의 제곱으로 
	//표현하며, 각각의 비트에 1이 있다면 1과 2의 
	//제곱의 위치를 계산한 다음 각각의 비트를 모두
	//더하여 10진수로 나타낸다. 

#pragma endregion



	//메모리는 비트 단위로 데이터를 저장할 수 있으며
	//1개의 비트에는 0 또는 1의 값만 저장할 수 있습니다.
#pragma endregion

	#pragma region 비트 연산자
		//비트 단위로 논리 연산을 수행하기 위해
		//사용하는 연산자입니다.

	#pragma region AND
		//두개의 연산자가 1이면 1을 반환 그 외는 0
		
	//char x1 = 9;  //[0][0][0][0][1][0][0][1]
	//char y1 = 13; //[0][0][0][0][1][1][0][1]
	//
	////AND 사용하면   [0][0][0][0][1][0][0][1] = [9]
	//printf("x1과 y1을 AND연산한 결과 : %d\n", x1 & y1); //CHAR에서 숫자로 계산하면 비트로 계산되는게 신기함

	#pragma endregion

	#pragma region OR
		//둘중 하나의 연산자라도 1이 들어가면 1 그 외 0

	//int x2 = 5; //[0][0][0][0][0][1][0][1]
	//int y2 = 17;//[0][0][0][1][0][0][0][1]
	//            //[0][0][0][1][0][1][0][1] 21
	//
	//printf("x2와 y2의 or 연산값 : %d", x2 | y2);

	#pragma endregion

	#pragma region XOR
		//연산자의 서로의 값이 같으면 0 아니면 1
		//ex) [1] [1] = 0
		//    [0] [1] = 1

	int x3 = 14; //[1][1][1][0]
	int y3 = 7;  //[0][1][1][1]
				 //[1][0][0][1] = [9]

	printf("x3와 y3의 XOR 연산값 : %d", x3 ^ y3);


	#pragma endregion

	#pragma region NOT
	//반전시키는 연산자

	//char flag = 16;  
	//printf("FLAG를 NOT 연산값 :  %d", ~flag);
#pragma endregion

	// 첫 번째 비트는 부호를 나타내며, 첫 번째 비트에
	// 1이 있다면 값은 음수가 됩니다.




#pragma endregion

}