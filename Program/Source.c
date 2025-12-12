#include <stdio.h>

void main()
{
#pragma region 산술 연산자
	//int X;
	//int a = 10;
	//int b = 3;
	//const int c = 5;
	//
	//// 1. 변수 = 변수 + 변수
	//X = a + b; // 13
	//printf("%d\n", X);
	//// 2. 변수 = 변수 - 리터럴 상수
	//X = b - 1; // 2
	//printf("%d\n", X);
	//// 3. 변수 = 변수 * 심볼릭 상수
	//X = X * c; // 10
	//printf("%d\n", X);
	//// 4. 변수 = 리터럴 상수 / 리터럴 상수
	//X = 20 / 5; // 4
	//printf("%d\n", X);
	//// 5. 변수 = 심볼릭 상수 % 리터럴 상수
	//X = c % 3; // 2
	//printf("%d\n", X);

#pragma endregion

#pragma region 비트
	// 데이터를 나타내는 최소의 단위이며, 0 또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.
#pragma region (10)진수를 (2)진수로 변환하는 과정
	// 10진수를 1이 될 때까지 계속 2로 나누어 준 다음
	// 나눈 위치의 나머지 값을 아래에서 위로 순서대로 정렬합니다.

	// 23/2=11, 1
	// 11/2=5, 1
	// 5/2=2, 1
	// 2/2=1, 0
	// 10111

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정
	// 1 byte에 2진수로 저장된 값을 2의 제곱으로 나타냅니다

	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한
	// 다음 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion

#pragma endregion

}