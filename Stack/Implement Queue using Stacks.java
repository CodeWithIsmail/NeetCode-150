class MyQueue {
    Stack<Integer> st;

    public MyQueue() {
        st = new Stack<>();
    }

    public void push(int x) {
        st.push(x);
    }

    public int pop() {
        int popped = 0;
        Stack<Integer> temp = new Stack<>();
        while (!st.isEmpty()) {
            popped = st.pop();
            temp.push(popped);
        }
        temp.pop();
        while (!temp.isEmpty()) {
            st.push(temp.pop());
        }
        return popped;
    }

    public int peek() {
        int top = 0;
        Stack<Integer> temp = new Stack<>();
        while (!st.isEmpty()) {
            top = st.pop();
            temp.push(top);
        }
        while (!temp.isEmpty()) {
            st.push(temp.pop());
        }
        return top;
    }

    public boolean empty() {
        return st.isEmpty();
    }
}

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = new MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * boolean param_4 = obj.empty();
 */