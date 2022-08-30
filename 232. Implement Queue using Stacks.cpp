class MyQueue {
public:
    queue<int> q1,q2;
    MyQueue() {  //FIFO
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
        int x = q1.front();
        q1.pop();
        return x;
    }
    
    int peek() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
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
