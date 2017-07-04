#include <iostream>
#include <vector>
#include "Square.h"

using namespace std;

int main() {
    Square square(20);
    cout << "area = "<<square.getArea() << std::endl;  //=> 400; --> Destory class

    vector<int> list;
    cout<<"00 original size = "<<list.size() <<" ; capacity = "<< list.capacity()<<endl; //=> 0, 0

    list.push_back(100);
    list.push_back(111);

    vector<int>::iterator ite ;
    for(ite = list.begin(); ite != list.end(); ite++){
        cout<< *ite << " ";
    }
    cout<<endl; //=> 100 111

    return 0;
}