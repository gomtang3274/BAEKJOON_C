//백준 1152번 단어의 개수
#include <iostream>
#include <string>
#include <string.h>
using namespace std;

string trim(string str);

int main(){
    string word = {};
    getline(cin, word);
    int num = 0, start = 0, end = word.length();
    
    if(word[0] == ' '){
        num -= 1;
    }
    if(word[word.length()-1] == ' '){
        num -= 1;
    }

    for(int i=0; i<word.length(); i++){
        if(word[i] == ' '){
            num += 1;
        }
    }
    cout << num+1 << endl;

    return 0;
}

// string trim(string str){
//     char strCopy[str.length()];
//     int leftS=0, rightS=str.length()-1;
//     if(str[0] == ' '){
//         while(1){
//             if(str[leftS] == ' '){
//                 leftS += 1;
//             }
//             else{
//                 break;
//             }
//         }
//     }
//     if(str[str.length()-1] == ' '){
//         while(rightS--){
//             if(str[rightS] != ' '){
//                 break;
//             }
//         }
//     }
//     if(str[0] == ' ' || str[str.length()-1]){
//         string trimS  = "";
//         for(int i=leftS; i<=rightS; i++){
//             trimS += str[i];
//         }
//         str = trimS;
//     }
//     return str;
// }