/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {

    unordered_map<Node*, Node*> oldToNew;

    Node* dfs(Node* node) {
        if (oldToNew.count(node)) {
            return oldToNew[node];
        }
        Node* copy = new Node(node->val);
        oldToNew[node] = copy;
        for (auto nig : node->neighbors) {
            copy->neighbors.push_back(dfs(nig));
        }
        return copy;
    }

    Node* bfs(Node* node) {
        queue<Node*> q;
        Node* headCopy = new Node(node->val);
        oldToNew[node] = headCopy;
        q.push(node);
        while (!q.empty()) {
            Node* n = q.front();
            q.pop();
            for (auto nig : n->neighbors) {

                if (!oldToNew.count(nig)) {
                    Node* copy = new Node(nig->val);
                    oldToNew[nig] = copy;
                    q.push(nig);   
                }
                oldToNew[n]->neighbors.push_back(oldToNew[nig]);
            }
        }
        return headCopy;
    }

public:
    Node* cloneGraph(Node* node) {
        if (!node)
            return node;

        return bfs(node);
    }
};