//백준 4673번 셀프 넘버
#include <iostream>
#include <vector>
using namespace std;

void selfNumber();

int main(){
    selfNumber();
    return 0;
}

void selfNumber(){
    int num, save;
    int self[10001] = {0,};
    for(int i=1; i<10000; i++){
            num = i;
            save = i;
            while(save){
                num += save%10;
                save /= 10;
            }
            if(num<10000){
                self[num] = 1;
            }
            if(self[i]==0){
                cout << i << endl;
            }
    }
}