//Name: Varnika Maurya
//PRN: 24070123160
//Exp. No. 11
//Program 3
#include<iostream>
using namespace std;
class cube{
    private:
    int height=2.0;
    int width=3.0;
    int length=5.0;
    public:
    int volume(){
        int v;
        v=height*width*length;
        return v;
    }
};
int main(){
    cube cube1;
    int vol=cube1.volume();
    cout<<"volume:"<<vol<<endl;
}
/*
PS D:\Arya> g++ P3.cpp -o P3
PS D:\Arya> ./P3.exe
volume:30
  */
