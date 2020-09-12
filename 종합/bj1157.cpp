//백준 1157번 단어 공부
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int fren = 0;
    char alpha, bet;
    string word;
    int alphabet[26] = {0,};
    cin >> word;
    for(int i=0; i<word.length(); i++){
        alpha = toupper(word[i]);
        alphabet[alpha-65] += 1;
    }
    for(int i=0; i<26; i++){
        if(fren < alphabet[i]){
            fren = alphabet[i];
            bet = i;
        }
        else if(fren == alphabet[i]){
            bet = '?';
        }
    }

    if(bet == '?'){
        cout << bet << endl;
    }
    else{
        cout << char(bet+65) << endl;
    }

    return 0;
}