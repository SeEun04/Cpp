#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;

class UI {
    static int n; // 무슨 기능을 할지 입력 받은 숫자
public:
    static void start(); // 첫줄에 나오는 그래픽 에디터 입니다 출력
    static int menu(); // 삽입 삭제 모두보기 종료
    static int insert(); // 도형 삽입
    static int del(); // 도형 삭제
};

#endif

