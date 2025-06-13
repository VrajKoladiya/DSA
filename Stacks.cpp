#include<iostream>
using namespace std;

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


int main(){

    cout << "---------------------------------Stacks---------------------------------" << endl;


    int value;

    push(1);
    push(2);
    push(3);
    push(4);
    

    cout << "The top element is: " << peek() << endl;
    cout << "The element removed is: " << pop() << endl;
    cout << "The top element is: " << peek() << endl;
    
    cout << "Enter Push Value : ";
    cin >> value;
    push(value);
    cout << "The top element is: " << peek() << endl;

    return 0;
}