//백준 1193번 분수
#include <iostream>
using namespace std;

int main(){
    int x, num=0,  bunza, bunmo;
    cin >> x;
    do{
        if(x-num<=0){
            break;
        }
        x -= num;
        num += 1;
    }while(1);
    if(num%2==1){
        bunza = num;
        bunmo = 1;
        for(int i=1; i<x; i++){
            bunza -= 1;
            bunmo += 1;
        }
    }
    else{
        bunza = 1;
        bunmo = num;
        for(int i=1; i<x; i++){
            bunza += 1;
            bunmo -= 1;
        }
    }
        cout << bunza << "/" << bunmo << endl;
    

    return 0;
}