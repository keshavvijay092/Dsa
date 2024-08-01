class MyQueue {
public:
        stack<int>input,output;
    MyQueue() {
    }
    
    void push(int x) {
        input.push(x);
    }

    int pop() {
    int ans = -1;
     
     if(output.empty())
     {
        while(!input.empty())
        {
            output.push(input.top());
            input.pop();
        }
        ans = output.top();
        output.pop();
        return ans;
     }
     else
     {
        ans = output.top();
        output.pop();
        return ans;
     }
    }
    
    int peek() {
        if(!output.empty())
        {
            return output.top();
        }
        else 
        {
            while(!input.empty())
            {
                output.push(input.top());
                input.pop();

            }
        }
            return output.top();
    }
    
    bool empty() {
        return output.empty() && input.empty();

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