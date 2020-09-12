//백준 10996번 별 찍기 - 21
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << "*" << endl;
    }
    else{
        for(int i=0; i<2*n; i++){
            if(i%2==0){
                for(int j=0; j<n; j++){
                    if(j%2==0){
                        cout << "*";
                    }
                    else{
                        cout << " ";
                    }
                }
            }
            else{
                for(int j=0; j<n; j++){
                    if(j%2==0){
                        cout << " ";
                    }
                    else{
                        cout << "*";
                    }
                }
            }
            cout << endl;
        }
    }
    return 0;
}