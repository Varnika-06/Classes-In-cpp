//Name: Varnika Maurya
//PRN: 24070123160
//Exp. No. 11
//Program 2
#include<iostream>
using namespace std;
class cube{
    public:
    int height=2.0;
    int width=3.0;
    int length=5.0;
};
int main(){
    cube c1;
    int vol=c1.height*c1.width*c1.length;
    cout<<"volume: "<<vol<<endl;
}
/*
PS D:\Arya> g++ P2.cpp -o P2
PS D:\Arya> ./P2.exe
volume: 30
  */
