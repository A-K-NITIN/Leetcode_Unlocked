class MyQueue {
public:
    stack<int> q;
    MyQueue() {
        q=stack<int>();
    }
    
    void push(int x) {
        q.push(x);
    }
    
    int pop() {
        stack<int> t;
        int n=q.size();
        for(int i=0;i<n;++i){
            t.push(q.top());
            q.pop();
        }
        int ans=t.top();
        t.pop();
        n=t.size();
        for(int i=0;i<n;++i){
            q.push(t.top());
            t.pop();
        }
        return ans;
    }
    
    int peek() {
         stack<int> t;
        int n=q.size();
        for(int i=0;i<n;++i){
            t.push(q.top());
            q.pop();
        }
        int ans=t.top();
        for(int i=0;i<n;++i){
            q.push(t.top());
            t.pop();
        }
        return ans;
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */