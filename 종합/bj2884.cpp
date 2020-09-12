//백준 2884번 알람 시계
#include <iostream>
using namespace std;

int main(){
    int H, M;
    cin >> H >> M;
    if(M<45){
        if(H==0){
            H = 23;
        }
        else{
            H--;
        }
        M += 15;
    }
    else{
        M -= 45;
    }
    
    cout << H << " " << M << endl;

    return 0;
}