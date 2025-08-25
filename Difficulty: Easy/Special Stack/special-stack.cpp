stack<int> mainSt, minSt;

void push(stack<int>& s, int a) {
    s.push(a);
    if (minSt.empty() || a <= minSt.top()) {
        minSt.push(a);
    }
}

int pop(stack<int>& s) {
    int t = s.top();
    if (t == minSt.top()) {
        minSt.pop();
    }
    s.pop();
    return t;
}

bool isFull(stack<int>& s, int n) {
    return (s.size() == n);
}

bool isEmpty(stack<int>& s) {
    return s.empty();
}

int getMin(stack<int>& s) {
    if (minSt.empty()) return -1; // or handle error
    return minSt.top();
}
