//백준 2941번 크로아티아 알파벳
#include <iostream>
#include <string>
using namespace std;

string trim(string str);
int main(){
    string croatia;
    int cnt = 0;
    cin >> croatia;
    for(int i=0; i<croatia.length(); i++){
        switch(croatia[i]){
            case 'c':
                if(croatia[i+1] == '='){
                    cnt += 1;
                }
                else if(croatia[i+1] == '-'){
                    cnt += 1;
                }
                else{
                    cnt += 1;
                }
                break;
            case 'd':
                if(croatia[i+1] == 'z' && croatia[i+2] == '='){
                    cnt += 1;
                    croatia[i+1] = '-';
                }
                else if(croatia[i+1] == '-'){
                    cnt += 1;
                }
                else{
                    cnt += 1;
                }
                break;
            case 'l':
                if(croatia[i+1] == 'j'){
                    cnt += 1;
                    croatia[i+1] = '-';
                }
                else{
                    cnt += 1;
                }
                break;
            case 'n':
                if(croatia[i+1] == 'j'){
                    cnt += 1;
                    croatia[i+1] = '-';
                }
                else{
                    cnt += 1;
                }
                break;
            case 's':
                if(croatia[i+1] == '='){
                    cnt += 1;
                }
                else{
                    cnt += 1;
                }
                break;
            case 'z':
                if(croatia[i+1] == '='){
                    cnt += 1;
                }
                else{
                    cnt += 1;
                }
                break;
            case '-':
            case '=':
                break;
            default:
                cnt += 1;
                break;
    
        }
    }
    cout << cnt << endl;
    return 0;
}

