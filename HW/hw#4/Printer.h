#ifndef PRINTER_H
#define PRINTER_H

#include <string>
#include <iostream>
using namespace std;

class Printer {
protected:
    string model, manufacturer;
    int printedCount, availableCount;
public:
    virtual ~Printer();
    virtual void print(int pages) = 0;
    void setModel(string m);
    void setManufacturer(string mf);
    void setAvailableCount(int c);
};

class InkJetPrinter : protected Printer {
    int availableInk;
public:
    InkJetPrinter(string model, string manufacturer, int availableCount, int availableInk);
    ~InkJetPrinter();
    void print(int pages) override;
    void printInkJet(int pages);
};

class LaserPrinter : protected Printer {
    int availableToner;
public:
    LaserPrinter(string model, string manufacturer, int availableCount, int availableToner);
    ~LaserPrinter();
    void print(int pages) override;
    void printLaser(int pages);
};

#endif // PRINTER_H
