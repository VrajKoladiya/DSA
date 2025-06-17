#include <iostream>
using namespace std;
char Stack[10];
int StackIndex = 0;
void push(char Value){
    Stack[StackIndex] = Value;
    StackIndex++;
}
int pop(){
    StackIndex--;
    return Stack[StackIndex];
}
char top(){
    return Stack[StackIndex-1];
}
int main(){
    char a[10] = {'{','5','+','(','4','-','1',')','}'};
    int length;//{5+(4;
    int operator1, operator2, operator3;
    int ans;
    int count = 0, loop=0;
    char op, op1;
    length = sizeof(Stack);
    for (int i = 0; i < length ; i++){
        push(a[i]);
        if(a[i] == ')'){
            pop();
            operator1 = pop() - '0';
            op = pop();
            operator2 = pop() - '0';
            switch(op){
                case '+':{
                    ans = operator1+operator2;
                    break;
                }
                case '-':{
                    ans = operator1-operator2;
                    break;
                }
                case '*':{
                    ans = operator1*operator2;
                    break;
                }
                case '/':{
                    ans = operator1/operator2;
                    break;
                }
            }
            push((char)ans+'0');
            cout << "Answer : " << ans << endl;
            cout << "count : " << count << endl;
            if(count == 7){
                loop = 1;
            }
        }
        if(a[i] == '}' && count == 6){
            if(a[i] == '}'){
            pop();
            operator1 = top()- '0';
            pop();
            op = pop();
            operator2 = pop() - '0';
            op1 = pop();
            operator3 = pop() - '0';
            if((op == '+' && op1 == '+' )|| op == '+'){
                ans = operator1+operator2 + operator3;
            }
            if((op == '-' && op1 == '-') || op == '-'){
                ans = operator1-operator2 - operator3;
            }
            push((char)ans+'0');
            cout << "Answer : " << ans << endl; 
            cout << "count : " << count << endl;
            break;
        }
            break;  
        }
        if(a[i] == '}' && count != 6){
            if(a[i] == '}' && loop == 1){
            pop();
            operator1 = pop() - '0';
            pop();
            op = pop();
            operator2 = pop() - '0';
            if(op == '+'){
                ans = operator1+operator2;
            }
            push((char)ans+'0');
            cout << "Answer : " << ans << endl;
            cout << "count : " << count << endl;
            break;
        }
        if(a[i] == '}' && loop == 0){
            pop();
            operator1 = pop() - '0';
            op = pop();
            operator2 = pop() - '0';
            if(op == '+'){
                ans = operator1+operator2;
            }
            push((char)ans+'0');
            cout << "Answer : " << ans << endl;
            cout << "count : " << count << endl;
            break;
        }
        }
        count++;   
    }
    return 0;
}