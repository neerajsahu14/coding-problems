void addNode(Node* &root, int val) {
    if (!root) {
        root = new Node(val);   // use the constructor that already exists
        return;
    }
    if (val > root->data)
        addNode(root->right, val);
    else
        addNode(root->left, val);
}

Node* constructTree(int post[], int size) {
    Node* root = nullptr;
    for (int i = size - 1; i >= 0; i--) {
        addNode(root, post[i]);
    }
    return root;
}
