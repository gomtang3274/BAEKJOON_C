//백준 4344번 평균은 넘겠지
#include <iostream>
using namespace std;

int main(){
    int c, n, sum, cnt;
    double mean;
    cin >> c;
    while(c--){
        cin >> n;
        sum = 0;
        cnt = 0;
        int student[n];
        for(int i=0; i<n; i++){
            cin >> student[i];
            sum += student[i];
        }

        mean = (double)sum/n;
        for(int i=0; i<n; i++){
            if(student[i]>mean){
                cnt += 1;
            }
        }
        cout << fixed;
        cout.precision(3); //소수점 출력
        cout << (double)cnt/n*100 << "%" << endl;
    }
    return 0;
}