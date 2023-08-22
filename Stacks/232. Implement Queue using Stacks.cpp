class MyQueue {
    stack<int> input;
    stack<int> output;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        if(input.empty()&&output.empty()){
            return -1;
        }
        if(output.empty()){                                            
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int poped=output.top();
            output.pop();
            return poped;
        }
        else{
            int poped=output.top();
            output.pop();
            return poped;
        }
    }
    
    int peek() {
        if(input.empty()&&output.empty()){
            return -1;
        }
        if(output.empty()){                                            
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
           
            return output.top();
        }
        else{
            return output.top();
        }
    }
    
    bool empty() {
        return output.empty()&&input.empty();
    }
};
