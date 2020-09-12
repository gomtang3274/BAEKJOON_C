//백준 2562번 최댓값
#include <iostream>
using namespace std;

int main(){
    int max, num;
    int n;
    for(int i=1; i<10; i++){
        cin >> n;
        if(i==1){
            max = n;
            num = i;   
        }
        else{
            if(n>max){
                max = n;
                num = i;
            }
        }
    }

    cout << max << endl << num;
    return 0;
}