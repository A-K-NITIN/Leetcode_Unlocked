class MinStack {
public:
    stack<int>s,ms;
    MinStack() {
        s=stack<int>();
        ms=stack<int>();
    }
    
    void push(int v) {
        s.push(v);
        if(ms.empty()||v<=ms.top())
            ms.push(v);
    }
    
    void pop() {
        if(s.top()==ms.top())
            ms.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return ms.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */