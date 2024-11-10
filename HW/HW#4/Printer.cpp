#include "Printer.h"

// Printer 클래스의 소멸자
Printer::~Printer() {}

// 모델 설정
void Printer::setModel(string m) {
    model = m;
}

// 제조사 설정
void Printer::setManufacturer(string mf) {
    manufacturer = mf;
}

// 남은 용지 수 설정
void Printer::setAvailableCount(int c) {
    availableCount = c;
}

// InkJetPrinter 클래스의 생성자
InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) {
    setModel(model);
    setManufacturer(manufacturer);
    setAvailableCount(availableCount);
    this->availableInk = availableInk;
}

// InkJetPrinter 클래스의 소멸자
InkJetPrinter::~InkJetPrinter() {}

// 프린트 메서드
void InkJetPrinter::print(int pages) {
    if (availableCount < pages) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    }
    else if (availableInk < pages) {
        cout << "잉크가 부족하여 프린트할 수 없습니다." << endl;
    }
    else {
        availableCount -= pages;
        availableInk -= pages;
        cout << "프린트하였습니다." << endl;
    }
}

// 잉크젯 프린터 정보 출력
void InkJetPrinter::printInkJet(int pages) {
    cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount <<
        "장, 남은 잉크 " << availableInk << endl;
}

// LaserPrinter 클래스의 생성자
LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) {
    setModel(model);
    setManufacturer(manufacturer);
    setAvailableCount(availableCount);
    this->availableToner = availableToner;
}

// LaserPrinter 클래스의 소멸자
LaserPrinter::~LaserPrinter() {}

// 프린트 메서드
void LaserPrinter::print(int pages) {
    if (availableCount < pages) {
        cout << "용지가 부족하여 프린트할 수 없습니다." << endl;
    }
    else if (availableToner < (pages / 2)) {
        cout << "토너가 부족하여 프린트할 수 없습니다." << endl;
    }
    else {
        availableCount -= pages;
        availableToner -= (pages / 2);
        cout << "프린트하였습니다." << endl;
    }
}

// 레이저 프린터 정보 출력
void LaserPrinter::printLaser(int pages) {
    cout << model << ", " << manufacturer << ", 남은 종이 " << availableCount <<
        "장, 남은 토너 " << availableToner << endl;
}
