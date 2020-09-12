//백준 2908번 상수
#include <iostream>
#include <string>
#include <cstdlib>
#include <cmath>
using namespace std;

string trim(string str);

int main(){
    string numA, numB;
    int num1=0, num2=0, a, b;
    cin >> numA >> numB;
    a = numA.length();
    b = numB.length();
    while(a--){
        num1 += (numA[a]-'0')*pow(10,a);
    }
    while(b--){
        num2 += (numB[b]-'0')*pow(10,b);
    }
    if(num1 > num2){
        cout << num1 << endl;
    }
    else{
        cout << num2 << endl;
    }


    return 0;
}