class MyQueue {
public:
    stack<int>s1;
    stack<int>s2;
    
    void push(int x) {
        while(s1.size()!=0){
            int y=s1.top();
            s1.pop();
            s2.push(y);
        }
        s1.push(x);
        while(s2.size()!=0){
            int y=s2.top();
            s2.pop();
            s1.push(y);
        }
    }
    
    int pop() {
        int x=s1.top();
        s1.pop();
        return x;
    }
    
    int peek() {
        return s1.top();
    }
    
    bool empty() {
        if(s1.size()==0){
            return true;
        }
        return false;
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