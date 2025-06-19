#include <iostream>
using namespace std;

class TowerOfHanoi{
 
public:

    int stack[10];
    int stackIndex = 0;

    void push(int value){
        stack[stackIndex] = value;
        stackIndex++;
    }

    int pop(){
        stackIndex--;
        return stack[stackIndex];
    }

    int peek(){
        return stack[stackIndex-1];
    }


    

};

int main(){

    cout << "---------------------------------Tower Of Hanoi---------------------------------" << endl;

    TowerOfHanoi towerOfHanoi[3];

    towerOfHanoi[0].push(3);
    towerOfHanoi[0].push(2);
    towerOfHanoi[0].push(1);

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < towerOfHanoi[i].stackIndex; j++){
            cout << towerOfHanoi[i].stack[j] << " " ;
        }
        cout << endl;
    }

    

    towerOfHanoi[2].push(towerOfHanoi[0].pop());
    towerOfHanoi[1].push(towerOfHanoi[0].pop());
    towerOfHanoi[1].push(towerOfHanoi[2].pop());
    towerOfHanoi[2].push(towerOfHanoi[0].pop());
    towerOfHanoi[0].push(towerOfHanoi[1].pop());
    towerOfHanoi[2].push(towerOfHanoi[1].pop());
    towerOfHanoi[2].push(towerOfHanoi[0].pop());

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < towerOfHanoi[i].stackIndex; j++){
            cout << towerOfHanoi[i].stack[j] << " " ;
        }
        cout << endl;
    }

    return 0;

}