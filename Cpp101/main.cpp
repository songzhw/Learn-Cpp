#include <iostream>  // 读文件
#include <fstream>   // 读写文件
#include <iomanip>

using namespace std;



// ======================

// ctime

int timeDate(){
    time_t now = time(0);
    char* timeString = ctime(&now);
    cout<<"local time = "<<timeString<<endl;  //=>  Mon Sep 25 20:33:39 2017

    tm *gmTime = gmtime(&now);
    timeString = asctime(gmTime);
    cout<<"UTC time = "<<timeString<<endl;    //=>  UTC time = Tue Sep 26 00:35:01 2017

    // tm是一个结构体, 处理c++中的date与time, 类似java中的Calendar, Date类
    tm *localTime = localtime(&now);
    cout<<1990+ localTime->tm_year<<"-"<<1+localTime->tm_mon<<"-"<<localTime->tm_mday<<endl;
    cout<<localTime->tm_hour<<":"<<localTime->tm_min<<":"<<localTime->tm_sec<<endl;
    //=> 2017-9-25  ;  20:39:24
}


// ======================
namespace first{
    void func(){ cout<<"func1"<<endl; }
}

namespace second{
    void func(){ cout<<"func2"<<endl; }
}

using namespace first;
int usingNamespaceDemo(){
    func();  //=> func1
    second::func(); //=> func2
}

int namespaceDemo(){
    first::func();  //=> func1
    second::func(); //=> func2
    return 0;
}


// ======================
int newAndDelete() {
    double* p = NULL;
    p = new double; // new 不仅分配了内存, 还创建了对象. malloc()只分配内存

    *p = 23.15;
    cout<<"value1 = "<<*p<<endl;

    delete p;
    cout<<"value2 = "<<*p<<endl; //为何仍是23.15?

}


// ======================
int readLine(){
    ifstream file;
    file.open("news.txt", ios::in);

    int n = 0;
    string tmp;

    if(file.fail()){
        return 0;
    } else {
        while(getline(file, tmp, '\n')){
            n++;
            cout<<"line = "<<tmp<<endl;
        }
        file.close();
        cout<<"file line count = "<<n<<endl;
        return 1;
    }
}

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
// ======================