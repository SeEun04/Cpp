#include "UI.h"

int UI::n = 0;

void UI::start() {
    cout << "�׷��� �������Դϴ�." << endl;
}

int UI::menu() { // �޴� ��� �� �Է�
    cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
    cin >> n;
    return n;
}

int UI::insert() { // ���� ���Կ� ���� �޴� ��� �� �Է�
    cout << "��:1, ��:2, �簢��:3 >> ";
    cin >> n;
    return n;
}

int UI::del() { // ���� ������ ���� �޴� ��� �� �Է�
    cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
    cin >> n;
    return n;
}
