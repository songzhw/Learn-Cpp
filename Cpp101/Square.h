#ifndef CPP101_SQUARE_H
#define CPP101_SQUARE_H

class Square {
public:
    Square(int len);
    ~Square(); //析构函数.相当于Android中的onDestory()
    virtual int getArea();
private:
    int width;
};

#endif
