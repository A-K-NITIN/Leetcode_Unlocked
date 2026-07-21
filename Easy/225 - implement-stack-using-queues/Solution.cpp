class MyStack {
public:
    queue<int>s;
    MyStack() {
      s=queue<int>();
    }
    
    void push(int x) {
        s.push(x);
    }
    
    int pop() {
        int n=s.size();
        for(int i=1;i<n;++i){
            s.push(s.front());
            s.pop();
        }
        n=s.front();
        s.pop();
        return n;
    }
    
    int top() {
         int n=s.size();
        for(int i=1;i<n;++i){
            s.push(s.front());
            s.pop();
        }
        n=s.front();
        s.push(s.front());
        s.pop();
        return n;
    }
    
    bool empty() {
        return s.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */