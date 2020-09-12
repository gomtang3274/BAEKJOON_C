//백준 10809번 알파벳 찾기
#include <iostream>
#include <string>
using namespace std;

int main(){
    string word;
    int alphabet[26];
    for(int i=0; i<26; i++){
        alphabet[i] = -1;
    }
    cin >> word;
    for(int i=0; i<word.length(); i++){
        if(alphabet[word[i]-97] == -1){
            alphabet[word[i]-97] = i;
        }
    }

    for(int i=0; i<26; i++){
        cout << alphabet[i] << " ";
    }
}