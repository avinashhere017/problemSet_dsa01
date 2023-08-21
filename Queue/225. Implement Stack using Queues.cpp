class Stack {
	// Define the data members.
    queue<int> q;

   public:
    Stack() {
        // Implement the Constructor.
        
    }

    /*----------------- Public Functions of Stack -----------------*/

    int getSize() {
        // Implement the getSize() function.
        return q.size();
    }

    bool isEmpty() {
        // Implement the isEmpty() function.
        return q.empty();
    }

    void push(int element) {
        // Implement the push() function.
        q.push(element);

        int size=q.size();
        int cnt=1;
        while(size>cnt){
            q.push(q.front());
            q.pop();
            cnt++;
        }


    }

    int pop() {
        // Implement the pop() function.
        if(q.empty()){
            return -1;
        }
        int ans = q.front();
        q.pop();
        return ans;
    }

    int top() {
        // Implement the top() function.'
        if(!q.empty()){
            return q.front();
        }else
            return -1;
    }
};
