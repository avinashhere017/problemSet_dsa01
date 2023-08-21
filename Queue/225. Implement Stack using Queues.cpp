class MyStack {
    queue<int> q;
public:
    MyStack() {}
    
    void push(int x) {
        q.push(x);
        int size = q.size();
        int cnt=1;

        while(cnt<size){
            q.push(q.front());
            q.pop();
            cnt++;
        }
    }
    
    int pop() {
        if(q.empty()){
            return -1;
        }
        int ans = q.front();
        q.pop();
        return ans;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};
