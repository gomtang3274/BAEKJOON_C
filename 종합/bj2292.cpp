//백준 2292번 벌집
#include <iostream>
using namespace std;

int main(){
    int room = 1, bee = 6, goal;
    cin >> goal;
    goal -= 1;
    do{
        if(goal <= 0){
            break;
        }
        else{
            goal -= bee*room;
        }
    }while(room++);

    cout << room << endl;

    return 0;
}

