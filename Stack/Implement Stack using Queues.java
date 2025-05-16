class MyStack {
    private Queue<Integer> q;

    public MyStack() {
        q = new LinkedList<>();
    }

    public void push(int x) {
        int n = q.size();
        q.offer(x);
        while (n > 0) {
            int temp = q.peek();
            q.poll();
            q.offer(temp);
            n--;
        }
    }

    public int pop() {
        int rm = q.peek();
        q.poll();
        return rm;
    }

    public int top() {
        int tp = q.peek();
        q.peek();
        return tp;
    }

    public boolean empty() {
        return q.isEmpty();
    }
}

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack obj = new MyStack();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.top();
 * boolean param_4 = obj.empty();
 */