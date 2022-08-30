class MyQueue {
public:
    deque<int> q1,q2;
    MyQueue() {  //Requirement: FIFO, push/peek/pop from top
        
    }
    
    void push(int x) {
        while(q2.size()>0){
            q1.push_back(q2.back());
            q2.pop_back();
        }
        q1.push_back(x);
    }
    
    int pop() {
        int x = peek();
        q2.pop_back();
        return x;
    }
    
    int peek() {
        if(!q1.empty()){
            int size = q1.size();  //remember to use size instead of q1.size, 
            for(int i=0;i<size;++i){  //as q1.size will change during loop
                q2.push_back(q1.back());
                q1.pop_back();
            }
        }
        return q2.back();
    }
    
    bool empty() {
        return q1.empty() && q2.empty();
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
