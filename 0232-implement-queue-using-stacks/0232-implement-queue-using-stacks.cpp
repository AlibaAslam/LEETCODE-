class MyQueue {
private:
    stack<int> s1;
    stack<int> s2;

public:
    MyQueue() {
        // s1--->s2
        // s2--->s1
        
    }
    
    void push(int x) {
        // s1--->s2
        while(!s1.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        s1.push(x);

        // s2--->s1
        while(!s2.empty())
        {
            s1.push(s2.top());
            s2.pop();
        }
         
    }
    
    int pop() {
        int topElement = s1.top();
        s1.pop();
        return topElement;
        
    }
    
    int peek() {
        return s1.top();
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
};