#ifndef CPP101_SQUARE_H
#define CPP101_SQUARE_H

class Square {
public:
    Square(int len);
    ~Square(); //析构函数.相当于Android中的onDestory()
    int getArea();
    Square operator+(const Square&);
private:
    int width;
};

class ColorSquare : public Square{
public:
    ColorSquare(int len);

};

#endif
