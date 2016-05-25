class Stack {
public:
    queue<int> queue1;
    queue<int> queue2;
    void move1()
    {
        while(!queue1.empty())
        {
            int x = queue1.front();
            queue1.pop();
            queue2.push(x);
        }
    }
    void move2()
    {
        while(!queue2.empty())
        {
            int x = queue2.front();
            queue2.pop();
            queue1.push(x);
        }
    }
    // Push element x onto stack.
    void push(int x) {
        if(queue1.empty())
           queue1.push(x), move2();
        else
           queue2.push(x), move1();
        }

    // Removes the element on top of the stack.
    void pop() {
        if(!queue1.empty())
           queue1.pop();
        if(!queue2.empty())
           queue2.pop();
    }

    // Get the top element.
    int top() {
        if(queue1.empty())
           return queue2.front();
        else
           return queue1.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return( queue1.empty() && queue2.empty());
    }
};
