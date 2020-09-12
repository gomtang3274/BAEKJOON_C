//백준 1316번 그룹 단어 체커
#include <iostream>
#include <string>
using namespace std;

string trim(string str);
int main(){
    int n, cnt=0, loc;
    string word;
    cin >> n;
    while(n--){
        cin >> word;
        int check[26] = {0,};
        for(int i=0; i<word.length(); i++){
            if(check[word[i]-97] != 0){
                break;
            }
            else if(i == word.length()-1){
                cnt += 1;
            }
            else if(word[i] != word[i+1]){
                check[word[i]-97] = 1;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}

