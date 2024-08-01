class MyStack {
public:
    queue<int>qt;
    MyStack() {
        
    }
    void push(int x) {
        qt.push(x);

        for(int i=0;i<qt.size()-1;i++)
        {
          int front = qt.front();
          qt.pop();
          qt.push(front);
        }
    }
    
    int pop() {
        int top = qt.front();
        qt.pop();
        return top;
    }
    
    int top() {
        return qt.front();
    }
    
    bool empty() {
        return qt.empty();
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