class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> result;
        // If the root is null, return the empty vector
        if (root == nullptr) return result;

        stack<NodeVisitPair> nodeStack;
        nodeStack.push(NodeVisitPair(root, false));

        while (!nodeStack.empty()) {
            NodeVisitPair currentPair = nodeStack.top();
            nodeStack.pop();

            if (currentPair.isVisited) {
                // If the node has been visited, add its value to the result
                result.push_back(currentPair.node->val);
            } else {
                // Mark the current node as visited and push it back to the
                // stack
                currentPair.isVisited = true;
                nodeStack.push(currentPair);

                // Push all children to the stack in reverse order
                vector<Node*>& children = currentPair.node->children;
                for (int i = children.size() - 1; i >= 0; i--) {
                    nodeStack.push(NodeVisitPair(children[i], false));
                }
            }
        }

        return result;
    }

private:
    // Helper class to pair a node with its visited status
    struct NodeVisitPair {
        Node* node;
        bool isVisited;

        NodeVisitPair(Node* n, bool visited) : node(n), isVisited(visited) {}
    };
};