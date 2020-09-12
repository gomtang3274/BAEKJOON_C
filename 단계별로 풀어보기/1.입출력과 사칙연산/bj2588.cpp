//백준 2588번 곱셈
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main(){
    int num1;
    string num2;
    cin >> num1;
    cin >> num2;
    for(int i=num2.length()-1; i>=0; i--){
        char ch = num2[i];
        cout << num1*(num2[i]-48) << endl;
    }
    cout << num1 * atoi(num2.c_str()) << endl;
    
    return 0;
}
