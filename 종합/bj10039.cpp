//백준 10039번 평균 점수
#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0;
    for(int i=0; i<5; i++){
        cin >> n;
        if(n<40){
            cnt+=40;
        }
        else{
            cnt+=n;
        }
    }
    cout << cnt/5 << "\n";
    
    return 0;
}