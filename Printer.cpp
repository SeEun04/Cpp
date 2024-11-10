#include "Printer.h"

// Printer Ŭ������ �Ҹ���
Printer::~Printer() {}

// �� ����
void Printer::setModel(string m) {
    model = m;
}

// ������ ����
void Printer::setManufacturer(string mf) {
    manufacturer = mf;
}

// ���� ���� �� ����
void Printer::setAvailableCount(int c) {
    availableCount = c;
}

// InkJetPrinter Ŭ������ ������
InkJetPrinter::InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk) {
    setModel(model);
    setManufacturer(manufacturer);
    setAvailableCount(availableCount);
    this->availableInk = availableInk;
}

// InkJetPrinter Ŭ������ �Ҹ���
InkJetPrinter::~InkJetPrinter() {}

// ����Ʈ �޼���
void InkJetPrinter::print(int pages) {
    if (availableCount < pages) {
        cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else if (availableInk < pages) {
        cout << "��ũ�� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else {
        availableCount -= pages;
        availableInk -= pages;
        cout << "����Ʈ�Ͽ����ϴ�." << endl;
    }
}

// ��ũ�� ������ ���� ���
void InkJetPrinter::printInkJet(int pages) {
    cout << model << ", " << manufacturer << ", ���� ���� " << availableCount <<
        "��, ���� ��ũ " << availableInk << endl;
}

// LaserPrinter Ŭ������ ������
LaserPrinter::LaserPrinter(string model, string manufacturer, int availableCount, int availableToner) {
    setModel(model);
    setManufacturer(manufacturer);
    setAvailableCount(availableCount);
    this->availableToner = availableToner;
}

// LaserPrinter Ŭ������ �Ҹ���
LaserPrinter::~LaserPrinter() {}

// ����Ʈ �޼���
void LaserPrinter::print(int pages) {
    if (availableCount < pages) {
        cout << "������ �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else if (availableToner < (pages / 2)) {
        cout << "��ʰ� �����Ͽ� ����Ʈ�� �� �����ϴ�." << endl;
    }
    else {
        availableCount -= pages;
        availableToner -= (pages / 2);
        cout << "����Ʈ�Ͽ����ϴ�." << endl;
    }
}

// ������ ������ ���� ���
void LaserPrinter::printLaser(int pages) {
    cout << model << ", " << manufacturer << ", ���� ���� " << availableCount <<
        "��, ���� ��� " << availableToner << endl;
}
