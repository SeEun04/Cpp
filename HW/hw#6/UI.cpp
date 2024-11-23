#include "UI.h"

int UI::n = 0;

void UI::start() {
    cout << "그래픽 에디터입니다." << endl;
}

int UI::menu() { // 메뉴 출력 및 입력
    cout << "삽입:1, 삭제:2, 모두보기:3, 종료:4 >> ";
    cin >> n;
    return n;
}

int UI::insert() { // 도형 삽입에 대한 메뉴 출력 및 입력
    cout << "선:1, 원:2, 사각형:3 >> ";
    cin >> n;
    return n;
}

int UI::del() { // 도형 삭제에 대한 메뉴 출력 및 입력
    cout << "삭제하고자 하는 도형의 인덱스 >> ";
    cin >> n;
    return n;
}
