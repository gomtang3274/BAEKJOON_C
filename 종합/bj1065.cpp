//백준 1065번 한수
#include <iostream>
using namespace std;

int hansu(int n);

int main(){
    int n;
    cin >> n;
    cout << hansu(n) << endl;

    return 0;
}

int hansu(int n){
    int cnt = 0, num, same, sub;
    for(int i=1; i<=n; i++){
        if(i<100){
            cnt += 1;
        }
        else{
            same = 10;
            num = i;
            do{
                if(num/10 == 0){
                    cnt += 1;
                    break;
                }
                else{
                    sub = num%10 - num/10%10;
                    if(same == 10){
                        same = sub;
                    }
                    num /= 10;
                }

            }while(same == sub);

        }

    }
    return cnt;
}