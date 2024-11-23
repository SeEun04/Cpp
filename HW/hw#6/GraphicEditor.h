#ifndef GRAPHICEDITOR_H
#define GRAPHICEDITOR_H

#include <vector>
#include "Shape.h"
#include "UI.h"

class GraphicEditor {
    std::vector<Shape*> v;
    std::vector<Shape*>::iterator it;
public:
    GraphicEditor() {}
    void insert();
    void deleteShape();
    void showAll();
    void start();
};

#endif

