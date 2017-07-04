#include <iostream> // std::cout出自于此
#include "Square.h"

Square::Square(int len) {
    this->width = len;
}

int Square::getArea() {
    return width * width;
}

Square::~Square() {
    std::cout << " --> destory class "<<std::endl;
}
