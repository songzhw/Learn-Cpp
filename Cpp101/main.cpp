#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <cmath>
#include <sysdir.h>
#include "Square.h"

using namespace std;

int main() {
    ofstream ofs;
    ofs.open("news.txt", ios::out|ios::in);

    ofs << "Brand New Content"<<endl;
    ofs << "Second Line"<<endl;

    ofs.close();
}