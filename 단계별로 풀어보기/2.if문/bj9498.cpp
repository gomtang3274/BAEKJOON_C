//백준 9498번 시험 성적
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(90<=n && n<=100){
        cout << "A" << endl;
    }
    else if(80<=n){
        cout << "B" << endl;
    }
    else if(70<=n){
        cout << "C" << endl;
    }
    else if(60<=n){
        cout << "D" << endl;
    }
    else{
        cout << "F" << endl;
    }
    return 0;
}
