#include "GraphicEditor.h"
#include "Line.h"
#include "Circle.h"
#include "Rectangle.h"

void GraphicEditor::insert() {
    int n = UI::insert();
    if (n == 1) // 라인
        v.push_back(new Line());
    else if (n == 2) // 원
        v.push_back(new Circle());
    else if (n == 3) // 사각형
        v.push_back(new Rectangle());
    else cout << "입력 에러" << endl;
}

void GraphicEditor::deleteShape() {
    int n = UI::del();
    Shape* del;
    it = v.begin();
    for (int i = 0; i < n; ++i)
        ++it;
    del = *it;
    it = v.erase(it);
    delete del;
}

void GraphicEditor::showAll() {
    for (int i = 0; i < v.size(); ++i) {
        cout << i << ": ";
        v[i]->paint();
    }
}

void GraphicEditor::start() {
    UI::start();
    for (;;) {
        int m = UI::menu();
        if (m == 1) // 삽입
            insert();
        else if (m == 2) // 삭제
            deleteShape();
        else if (m == 3) // 전체 보기
            showAll();
        else if (m == 4) break;
        else cout << "입력 에러 " << endl;
    }
}
