class MyStack {
public:
    int *arr;
    int size;
    int topp;
 
    MyStack() {
        this->size = 100;
        arr = new int[size];
        topp = -1;
    }
    
    void push(int x) {
        if (topp < size - 1) {
            topp++;
            arr[topp] = x;
        }
    }
  
    int pop() {
        if (topp >= 0) {
            int val = arr[topp];
            topp--;
            return val;
        }
        return -1; 
    }
    
    int top() {
        if (topp >= 0) {
            return arr[topp];
        } else {
            return -1;
        }
    }
    
    bool empty() {
        return topp == -1;
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
