#include<iostream>
using namespace std;



void swap(int*xp, int*yp){
    xp = yp;
    yp = xp;
    int temp = 7;

    // cout<<*xp<<" "<<*yp;
    cout<<temp<<" "<<&temp;
}
int main() {

    int x = 2;
    int y = 4;


    int* xp = &x;
    int* yp = &y;




    // cout<<x<<" "<<y<<endl;
    int * t;
    if(1){
            int temp = 7;
    // cout<<*xp<<" "<<*yp;
    cout<<temp<<"  -  "<<&temp;
    t = &temp;
    cout<<t;
    }


cout<<t;

    swap(xp,yp);
    *xp = y;

    // cout<<x<<" "<<y<<endl;

}