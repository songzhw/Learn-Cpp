#include <iostream>  // 读文件
#include <fstream>   // 读写文件

using namespace std;

int main() {
    ofstream ofs;
    ofs.open("news.txt", ios::out|ios::in|ios::trunc); // if not exist, ios::trunc will create a new one

    ofs << "Brand New Content"<<endl;
    ofs << "Second Line"<<endl;

    ofs.close(); // 生成在"%Cpp101%/cmake-build-debug目录下"
}