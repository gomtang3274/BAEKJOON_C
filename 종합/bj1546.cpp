//백준 1546번 평균
#include <iostream>
using namespace std;

int main(){
    int m = 0;
    int n, newS, sum = 0;
    cin >> n;
    int score[n];
    for(int i=0; i<n; i++){
        cin >> score[i];
        sum += score[i];
        if(score[i]>m){
            m = score[i];
        }
    }
    newS = sum/n;
    newS /= m;
    cout << ((double)sum/n)/m*100 << endl;
    return 0;
}