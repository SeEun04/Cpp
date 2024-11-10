#include "Printer.h"

int main() {
    cout << "현재 작동중인 2 대의 프린터는 아래와 같다" << endl;
    cout << "잉크젯 : Officejet V40, HP, 남은 종이 5장, 남은 잉크 10" << endl;
    cout << "레이저 : SCX-6x45, 삼성전자, 남은 종이 3장 남은 토너 20" << endl;

    InkJetPrinter* inkP = new InkJetPrinter("Officejet V40", "HP", 5, 10);
    LaserPrinter* laserP = new LaserPrinter("SCX-6x45", "삼성전자", 3, 20);

    int type, count;
    string continuePrint;

    while (true) {
        cout << "\n프린터(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin >> type >> count;
        if (type == 1) {
            inkP->print(count);
        }
        else if (type == 2) {
            laserP->print(count);
        }
        inkP->printInkJet(count);
        laserP->printLaser(count);

        cout << "계속 프린트 하시겠습니까(y/n)>>";
        cin >> continuePrint;
        if (continuePrint == "n" || continuePrint == "N")
            break;
    }

    delete inkP;
    delete laserP;

    return 0;
}
