#include<bits/stdc++.h>
using namespace std;

// #Stack #Class #BasicProblem

class Stack{
    public:
       vector <int> a;
       bool isEmpty(); //checks if stack is empty
       bool Top(int &top); //returns top element
       void Push(int element); //Pushes element onto stack
       bool Pop(); //Pops top element and updates element
};
bool Stack :: isEmpty(){
    if(a.size()==0){
        return true;
    }
    return false;
}
bool Stack :: Top(int &top){
    if(isEmpty()==true){
        return false;
    }else{
        top=a[a.size()-1];
        return true;
    }
}
void Stack :: Push(int element){
        a.push_back(element);
}
bool Stack :: Pop(){
    if(isEmpty()==true){
        return false;
    }else{
        a.pop_back();
        return true;
    }
}

int main(){
    cout<<"Instructions: \n";
    cout<<"Type add to push onto stack"<<endl;
    cout<<"Type del to pop from stack"<<endl;
    cout<<"Type top to check the top element in stack"<<endl;
    cout<<"Type exit to stop using the stack"<<endl;
    Stack S;
    int top;
    while(1){
        string instruction;
        cout<<"Instruction: ";
        cin>>instruction;
        if(instruction=="exit"){
            break;
        }else if(instruction=="add"){
            cout<<"Enter the element top be pushed"<<endl;
            int push; //element to be pushed
            cin>>push;
            S.Push(push);
                cout<<"Element successfully pushed"<<endl;
                if(S.Top(top)==true){
                    cout<<"Top Element is:"<<top<<endl;
                }
 
        }else if(instruction=="del"){
            if(S.Pop()==true){
                cout<<"Element was successfully popped"<<endl;
                if(S.Top(top)==true){
                    cout<<"Top Element is:"<<top<<endl;
                }else{
                    cout<<"Stack is now Empty!"<<endl;
                }
            }else{
                cout<<"ERROR : Stack is empty!"<<endl;
            }
        }else if(instruction=="top"){
                if(S.Top(top)==true){
                    cout<<"Top Element is:"<<top<<endl;
                }else{
                    cout<<"ERROR : Stack is empty!"<<endl;
                }
        }else{
            cout<<"ERROR : Unknown operation! Please try again"<<endl;
        }
    }
    return 0;
}
