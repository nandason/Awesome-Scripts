#include <iostream>

using namespace std;

int main(){
    int y;
    cin >> y;

    if(y<1918){
        if(y%4==0){
            cout << (256-(31+29+31+30+31+30+31+31)) << ".09." << y;
        }else{
            cout << (256-(31+28+31+30+31+30+31+31)) << ".09." << y;
        } 
    }else if(y == 1918){
        if(y%4==0){
            cout << (256-(31+29+31+30+31+30+31+31)+13) << ".09." << y;
        }else{
            cout << (256-(31+28+31+30+31+30+31+31)+13) << ".09." << y;
        }
    }else{
        if(y%400==0 || (y%400)%4==0 && y%100!=0){
            cout << (256-(31+29+31+30+31+30+31+31)) << ".09." << y;
        }else{
            cout << (256-(31+28+31+30+31+30+31+31)) << ".09." << y;
        }
    }
}