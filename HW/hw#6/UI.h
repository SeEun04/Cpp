#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;

class UI {
    static int n; // ���� ����� ���� �Է� ���� ����
public:
    static void start(); // ù�ٿ� ������ �׷��� ������ �Դϴ� ���
    static int menu(); // ���� ���� ��κ��� ����
    static int insert(); // ���� ����
    static int del(); // ���� ����
};

#endif

