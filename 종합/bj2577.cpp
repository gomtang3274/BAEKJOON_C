//백준 2577번 숫자의 개수
#include <iostream>
using namespace std;

int main(){
    int a, b, c, abc, n;
    int num[10] = {0,};
    cin >> a >> b >> c;
    abc = a*b*c;
    while(abc){
        n = abc%10;
        abc /= 10;
        switch(n)
        {
        case 0:
            num[0] += 1;
            break;
        case 1:
            num[1] += 1;
            break;
        case 2:
            num[2] += 1;
            break;
        case 3:
            num[3] += 1;
            break;
        case 4:
            num[4] += 1;
            break;
        case 5:
            num[5] += 1;
            break;
        case 6:
            num[6] += 1;
            break;
        case 7:
            num[7] += 1;
            break;
        case 8:
            num[8] += 1;
            break;
        case 9:
            num[9] += 1;
            break;
        default:
            break;
        }
    }
    for(int i=0; i<10; i++){
        cout << num[i] << endl;
    }

    return 0;
}