#include<iostream>
using namespace std;
int queue[10];
int head = 0, tail = 0;

void enqueue(int data){

    if(head == -1 && tail == -1){
        head ++;
        tail ++;
        queue[head] = data;
    }
    else{
        tail ++;
        queue[tail] = data;
    }
}


int dequeue(){

    head ++;
    return queue[head];

}

int IsEmpty(){
    if(head == -1 && tail == -1 || (head>tail) ){
        return 1;
    }
    else{
        return 0;
    }
}

int peek(){
    return queue[head+1];
}


int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    int size;
   

    size = sizeof(queue)/sizeof(queue[0]);
    
  
   
   
    cout << "The first element is: " << peek() << endl;


    cout << "The element removed is: " << dequeue() << endl;
    cout << "The first element is: " << peek() << endl;
    cout << "The Size of element is: " << tail << endl;


    if(IsEmpty() == 1){
        cout << "The Element is Empty: True" << endl;
    }
    else if(IsEmpty() == 0){
        cout << "The Element is Empty: False" << endl;
    }
    

    return 0;




}