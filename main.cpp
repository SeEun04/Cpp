#include "Printer.h"

int main() {
    cout << "���� �۵����� 2 ���� �����ʹ� �Ʒ��� ����" << endl;
    cout << "��ũ�� : Officejet V40, HP, ���� ���� 5��, ���� ��ũ 10" << endl;
    cout << "������ : SCX-6x45, �Ｚ����, ���� ���� 3�� ���� ��� 20" << endl;

    InkJetPrinter* inkP = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laserP = new LaserPrinter("SCX-6x45", "�Ｚ����", 3, 20);

    int type, count;
    string continuePrint;

    while (true) {
        cout << "\n������(1:��ũ��, 2:������)�� �ż� �Է�>>";
        cin >> type >> count;
        if (type == 1) {
            inkP->print(count);
        }
        else if (type == 2) {
            laserP->print(count);
        }
        inkP->printInkJet(count);
        laserP->printLaser(count);

        cout << "��� ����Ʈ �Ͻðڽ��ϱ�(y/n)>>";
        cin >> continuePrint;
        if (continuePrint == "n" || continuePrint == "N")
            break;
    }

    delete inkP;
    delete laserP;

    return 0;
}
