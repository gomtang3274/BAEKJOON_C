//백준 1712번 손익분기점
#include <iostream>
using namespace std;

int main(){
    int a, b, c, bep = 0;
    cin >> a >> b >> c;
    if(b>=c){
        bep = -1;
    }
    else{
        bep = a/(c-b) + 1;
    }
    cout << bep << endl;
    return 0;
}