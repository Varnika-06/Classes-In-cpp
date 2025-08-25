//Name: Varnika Maurya
//PRN: 24070123160
//Experiment 11
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
PS D:\Arya> g++ P1.cpp -o P1
PS D:\Arya> ./P1.exe 
volume: 30
*/
