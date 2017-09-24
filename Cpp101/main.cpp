#include <iostream>  // 读文件
#include <fstream>   // 读写文件
#include <iomanip>

using namespace std;

// 这样就没有读出"\n"换行符来
void readFileByChar(){
    char c;
    fstream file;
    file.open("news.txt", ios::in);

    while(!file.eof()){
        file >> c;
        cout << c;
    }

    file.close();
}//=>BrandNewContentSecondLine0a1b2c3d4e5f6g7h8i9j10k11l12m13n14o15p16q17r18s19t20u21v22w23x24y25zz
// : 为何最末有2个z?

void readFileByLine() {
    char buffer[256];
    fstream file;
    file.open("news.txt", ios::in);

    while(!file.eof()){
        file.getline(buffer, 256, '\n');
        cout<<buffer<<endl;
    }

    file.close();
} //BrandNewContentSecondLine0a1b2c3d4e5f6g7h8i9j10k11l12m13n14o15p16q17r18s19t20u21v22w23x24y25zz



void write(){
    ofstream ofs;
    ofs.open("news.txt", ios::out|ios::in|ios::trunc); // if not exist, ios::trunc will create a new one

    ofs << "Brand New Content"<<endl;
    ofs << "Second Line"<<endl;

    char a = 'a';
    for(int i = 0; i < 26; i++){
        ofs<<setw(2) << i <<"\t"<<a<<endl;
        a++;
    }

    ofs.close(); // 生成在"%Cpp101%/cmake-build-debug目录下"
}