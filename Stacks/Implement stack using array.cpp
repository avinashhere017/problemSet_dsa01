/*
class MyStack
{
private:
    int arr[1000];
    int top;
public:
    MyStack(){top=-1;}
    int pop();
    void push(int);
};
*/

void MyStack :: push(int x)
{
    // Your Code
    // if(top==1000){
    //     return;
    // }
    top=top+1;
   arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1){
        return -1;
    }
    // Your Code      
    top=top-1;
    return arr[top+1];
}
