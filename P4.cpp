//Name: Varnika Maurya
//PRN: 24070123160
//Exp. No. 11
//Program 3
#include<iostream>
using namespace std;
class cube{
    public:
    int height;
    int width;
    int length;

    void input(){
    cout << "Enter value for height: ";
    cin >> height;
    cout << "Enter value for width: ";
    cin >> width;
    cout << "Enter value for length: ";
    cin >> length;
    }

int volume(){
    return height*width*length ;
    }

void disp(){
    int a =volume();
    cout<<"The volume is"<< a;
    }
};

int main(){
    cube cube1;
    cube1.input();
    cube1.disp();

}
/*
PS D:\Arya> g++ P4.cpp -o P4
PS D:\Arya> ./P4.exe
Enter value for height: 5
Enter value for width: 9
Enter value for length: 3
The volume is135
*/
