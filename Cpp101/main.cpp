#include <iostream>
#include "Square.h"

using namespace std;

typedef int meter;

int main() {
    meter distance = 5;
    cout << "Hello, World! " << distance << std::endl; //=> Hello, World! 5

    Square square(20);
    cout << "area = "<<square.getArea() << std::endl;  //=> 400; --> Destory class
    return 0;
}