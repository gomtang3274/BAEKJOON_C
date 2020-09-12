//백준 15596번 정수 N개의 합
#include <iostream>
#include <vector>
using namespace std;

long sum(vector<int> &a){
    long result = 0;

    for(int i=0; i<a.size(); i++){
        result += a[i];
    }


    return result;
}

int main() {
    return 0;
}