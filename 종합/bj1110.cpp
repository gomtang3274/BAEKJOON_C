//백준 1110번 더하기 사이클
#include <iostream>
using namespace std;

int main(){
    int n, cnt = 0;
    int save, save2=0, check;
    cin >> n;
    check = n;
    do{
        if(check<10){
            save = check+save2;
            save2 = check;
        }
        else{
            save = check/10 + check%10;
            save2 = check%10;
        }
        check = save2*10+save%10;
        cnt++;
    }while(n!=check);
    cout << cnt << "\n";
    return 0;
}