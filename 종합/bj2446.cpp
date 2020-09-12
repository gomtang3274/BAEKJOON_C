//백준 2446번 별 찍기 - 9
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=0; i<2*n-1; i++){
        if(i<n){
            for(int j=0; j<i; j++){
                cout << " ";
            }
            for(int j=i; j<2*n-i-1; j++){
                cout << "*";
            }
            cout << endl;
        }
        else{
            for(int j=0; j<2*n-i-2; j++){
                cout << " ";
            }
            for(int j=2*n-i-2; j<i+1; j++){
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}