#include "GraphicEditor.h"

int main() {
    GraphicEditor* g = new GraphicEditor;
    g->start();
    delete g;
    return 0;
}