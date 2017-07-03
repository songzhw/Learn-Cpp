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

Square Square::operator+(const Square &) {
    return Square(0); //等同java中的 new Square(0);
}

ColorSquare::ColorSquare(int len) : Square(len) {}
