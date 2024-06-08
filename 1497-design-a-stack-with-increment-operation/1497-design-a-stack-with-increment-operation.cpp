class CustomStack {
public:
    
        int top=-1;
        int maxSize;
        vector<int> stack;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
        stack.reserve(maxSize);

        
    }
    
    void push(int x) {
        if(top+1<maxSize){
        top++;
        stack.push_back(x);
        }
    }
    
    int pop() {
         if (top == -1) {
            return -1;  // Return -1 if the stack is empty
        }
        int val=stack[top];
        stack.pop_back();
        top--;
        return val;
        
    }
    
    void increment(int k, int val) {
        if(k>stack.size()){
        for(int i=0;i<stack.size();i++){
                stack[i]=stack[i]+val;
        }
        }
        else{
            for(int i=0;i<k;i++){
                stack[i]=stack[i]+val;
        }
            
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */