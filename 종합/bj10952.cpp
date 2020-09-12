//백준 10952번 A+B - 5
#include <iostream>
using namespace std;

int main(){
    bool check = true;
    int a, b;
    while(check){
       cin >> a >> b;
       if(a==0&&b==0){
           check = false;
       }
       else{
           cout << a+b << "\n";
       }
    }
    return 0;
}