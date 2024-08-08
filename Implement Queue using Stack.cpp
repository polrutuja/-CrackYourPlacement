class MyQueue {
    int *arr;
    int qfront;
    int rear;
    int size;

public:
    MyQueue() {
       // Implement the Constructor
        size = 10001;
        arr = new int[size];
        qfront = 0;
        rear = 0;  
    }
    
    void push(int x) {
         if(rear == size){
            // cout<<"Queue is full"<<endl;
        } else {
            arr[rear] = x;
            rear++;
        }
    }
    
    int pop() {
         if(qfront == rear){ //queue is empty
            return -1;
        } else {
            int ans = arr[qfront];
            arr[qfront] = -1;
            qfront++;
            if(qfront == rear){
                qfront = 0;
                rear = 0;
            }
            return ans;
        }
    }
    
    int peek() {
         if(qfront == rear){ //queue is empty
            return -1;
        } else {
            return arr[qfront];
        }
    }
    
    bool empty() {
        if(qfront == rear){
            return true;
        } else {
            return false;
        }
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
