﻿// F5074.Cpp.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//
#include "pch.h"
#include <iostream>
using namespace std;


int add(int x, int y); //4
int main()
{
	//// 1
	//Complex1 c1(1, 2);
	//Complex1 c2(2, 3);
	//Complex1 c3 = c1.add(c2);
	//c1.display();
	//cout << "+";
	//c2.display();
	//cout << "=";
	//c3.display();
	//cout << endl;

	//c3 = c1.mul(10.0);
	//c1.display();
	//cout << "*10=";
	//c3.display();
	//cout << endl;

	//return 0;

	////2
	//std::cout << "Hello C++" << std::endl;
	//return 0;

	////3
	//int score;
	//cout << "점수를 입력";
	//cin >> score;
	//if (score >= 90)
	//	cout << "A" << endl;
	//else if (score >= 80)
	//	cout << "B" << endl;
	//else if (score >= 70)
	//	cout << "C" << endl;
	//else if (score >= 60)
	//	cout << "D" << endl;
	//else
	//	cout << "F" << endl;

	// 4
	int a, b;
	cout << "두개의 정수를 입력";
	cin >> a >> b;
	cout << "두개의 정수의 합" << add(a, b) << endl;

}

int add(int x, int y) {
	return x + y;
}
#include "pch.h"
#include <iostream>

//int main()
//{
//    std::cout << "Hello World!\n";
//	system("pause");
//	return 0;
//}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
