// Stack class.
class Stack {
    
public:
    // array ko aisa banao ki wah stack ki tarah kaam kre
    // Declare array.
    vector<int> arr;
    int topele;
    int stackSize;

    Stack(int capacity) {
        // Write your code here.
        stackSize = capacity;
        arr.resize(stackSize);// making the array size to the size of the stack
        topele = -1;

    }

    void push(int num) {
        // Write your code here.

        if(topele==stackSize-1){
            return;
        }else{
            topele=topele+1;
            arr[topele]=num;
        }
    }

    int pop() {
        // Write your code here.
        if(topele == -1){
            return -1;
        }
        else{
            int topelement = arr[topele];
            topele = topele-1;
            return topelement;
        }
    }
    
    int top() {
        // Write your code here.
        if(topele==-1){
            return -1;
        } else {
            return arr[topele];
        }
    }

    int isEmpty() {
        // Write your code here.
        return (topele==-1);
    }

    int isFull() {
        // Write your code here.
        return (topele == stackSize - 1);
    }

};
