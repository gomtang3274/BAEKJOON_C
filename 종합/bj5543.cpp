//백준 5543번 상근날드
#include <iostream>
using namespace std;

int main(){
    int bur = 2000, bev = 2000;
    int price;
    for(int i=0; i<3; i++){
        cin >> price;
        if(price<bur){
            bur=price;
        }
    }
    for(int i=0; i<2; i++){
        cin >> price;
        if(price<bev){
            bev=price;
        }
    }
    cout << bur+bev-50 << "\n";
    
    return 0;
}