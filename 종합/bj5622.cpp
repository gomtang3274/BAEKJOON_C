//백준 5622번 다이얼
#include <iostream>
#include <string>
using namespace std;

string trim(string str);

int main(){
    string number;
    cin >> number;
    int tim = 0;
    for(int i=0; i<number.length(); i++){
        switch(number[i]){
            case 'A':
            case 'B':
            case 'C':
                tim += 2;
                break;
            case 'D':
            case 'E':
            case 'F':
                tim += 3;
                break;
            case 'G':
            case 'H':
            case 'I':
                tim += 4;
                break;
            case 'J':
            case 'K':
            case 'L':
                tim += 5;
                break;
            case 'M':
            case 'N':
            case 'O':
                tim += 6;
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                tim += 7;
                break;
            case 'T':
            case 'U':
            case 'V':
                tim += 8;
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                tim += 9;
                break;
            default:
                break;
        }
    }
    cout << tim+number.length() << endl;
    return 0;
}

