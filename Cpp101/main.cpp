#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include "Square.h"

using namespace std;



int main() {
    Square square(20);
    cout << "area = " << square.getArea() << std::endl;  //=> 400; --> Destory class

    vector<int> list;
    cout << "00 original size = " << list.size() << " ; capacity = " << list.capacity()
         << endl; //=> 0, 0

    list.push_back(100);
    list.push_back(111);

    vector<int>::iterator ite;
    for (ite = list.begin(); ite != list.end(); ite++) {
        cout << *ite << " ";
    }
    cout << endl; //=> 100 111

    for_each(list.begin(), list.end(), show);

    // ===========================
    map<int, string> student;
    student[1000] = "szw";
    student[1001] = "jason";
    student[1002] = "lucy";

    map<int, string>::iterator ite2 = student.find(1000);
    cout << "map find value from key " << ite2->first << " ; " << ite2->second << endl;//=> 1000; szw

    map<int, string>::iterator ite3 = student.begin();
    while(ite3 != student.end()){
        cout<< "key = "<<ite3->first<<" ; value = "<<ite3->second<<endl;
        ite3++;
    }


    return 0;
}