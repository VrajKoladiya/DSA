#include <iostream>
using namespace std;

char stake[100];
int stakeindex=0;

void Push(char value)
{
    stake[stakeindex] = value;
    stakeindex++;
}

char  Pop()
{
    if(stakeindex>=0){
    stakeindex--;
    return stake[stakeindex];
    }
    
    else{
        return 't';
    }
}

char Top()
{
    
    return stake[stakeindex-1];
    
}

char opening(char c){
    
    if(c==')'){
        return '(';
    }
    
    else if(c=='}'){
        return '{';
    }
    
    else{

        return '[';

    }
}

int operation(int a,int b, char op){


    if(op=='+'){
        return a+b;
    }


    if(op=='-'){
        return a-b;
    }


    if(op=='*'){
        return a*b;
    }


    if(op=='/'){
        return a/b;
    }


    return 0;


}
int main()
{


    char question[9] = {'{','5','+','(','4','-','1',')','}'};
    int a,b,op,ans;
    int length = sizeof(question)/sizeof(question[0]);
    
    cout << "Length of the string: " << length << endl;

    for(int i = 0;i<length;i++){
        
        if(question[i]!='}'&&question[i]!=')'&&question[i]!=']'){
            Push(question[i]);
        }
        
        else{
            b = Pop()-'0';
            op = Pop();
            a = Pop()-'0';
            ans = operation(a,b,op);
            if(Top() == opening(question[i])){
                Pop();
                Push(ans+'0');
            }else{
                 while(Top()!=opening(question[i])){
                    b = ans;
                    op = Pop();
                    a = Pop()-'0';
                    ans = operation(a,b,op);
                 }
                 Pop();
                 Push(ans+'0');
                 
            }
        }
    }


    while(stakeindex>2){

            b = Pop()-'0';
            op = Pop();
            a = Pop()-'0';
            ans = operation(a,b,op);
            Push(ans+'0');
    }


    cout<<Top();
    return 0;


}
