//백준 10818번 최소, 최대
#include <iostream>
using namespace std;

int main(){
    int n, min, max;
    cin >> n;
    int N[n];
    for(int i=0; i<n; i++){
        cin >> N[i];
        if(i==0){
            min = N[i];
            max = N[i];   
        }
        else{
            if(N[i]<min){
                min = N[i];
            }
            else if(N[i]>max){
                max = N[i];
            }
        }
    }

    cout << min << " " << max << endl;
    return 0;
}