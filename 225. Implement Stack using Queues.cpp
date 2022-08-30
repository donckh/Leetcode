class MyStack {
public:
    queue<int> q1, q2;  //queue FIFO
    MyStack() {
        
    }
    
    void push(int x) {
        while(q2.size()>0){
            q1.push(q2.front());
            q2.pop();
        }
        q1.push(x);
    }
    
    int pop() {
        int x = top(); 
        q2.pop();
        return x;
    }
    
    int top() {
        if (q2.empty()){
            for(int i=0; i<q1.size()-1; ++i){  //push n-1 element
            q1.push(q1.front());
            q1.pop();
            }
            q2.push(q1.front());  // push remaining 1 element
            q1.pop();
        }
        return q2.front();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();  //q1+q2 is complete queue
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
