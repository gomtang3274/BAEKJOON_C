//백준 2675번 문자열 반복
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, r;
    string s, code;
    cin >> t;
    while(t--){
        cin >> r >> s;
        code = "";
        for(int i=0; i<s.length(); i++){
            for(int j=0; j<r; j++){
                code += s[i];
            }
        }
        cout << code << endl;
    }
    return 0;
}