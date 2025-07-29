class MyStack {
  private:
    StackNode *top;

  public:
    void push(int x) {
        // code here
        StackNode *node = new StackNode(x);
        if(!node) return;
        
        node->next= top;
        top = node;
        
    }

    int pop() {
        if(!top) return -1;
        int var = top->data;
        StackNode *temp = top;
        top = top->next;
        delete temp;
        return var;
    }

    MyStack() { top = NULL; }
};