//백준 8958번 OX퀴즈
#include <iostream>
#include <string>
using namespace std;

int main(){
    int t, score, bef;
    string quiz;
    cin >> t;
    while(t--){
        score = 0;
        bef = 0;
        cin >> quiz;
        for(int i=0; i<quiz.length(); i++){
            if(quiz[i] == 'O'){
                bef += 1;
                score += bef;
            }
            else{
                bef = 0;
            }
        }
        cout << score << endl;
    }
    return 0;
}