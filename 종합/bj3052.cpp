//백준 3052번 나머지
#include <iostream>
using namespace std;

int main(){
    int num, cnt = 0;
    int nam[42] = {0,};
    for(int i=0; i<10; i++){
        cin >> num;
        nam[num%42] += 1;
    }
    for(int i = 0; i<42; i++){
        if(nam[i]!=0){
            cnt += 1;
        }
    }
    cout << cnt << endl;
    return 0;
}