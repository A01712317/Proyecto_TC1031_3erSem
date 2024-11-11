
/*Alejandro Cruz Escamilla
A01712317*/
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <queue>

using namespace std;

template <typename T>
class BST {
private:
    struct Node {
        T data;
        Node* left;
        Node* right;
        Node(T value) : data(value), left(nullptr), right(nullptr) {}
    };
    Node* root;

    void add(Node*& node, T value) {
        if (node == nullptr) {
            node = new Node(value);
        } else if (value < node->data) {
            add(node->left, value);
        } else {
            add(node->right, value);
        }
    }

    void preorder(Node* node, stringstream& ss) const {
        if (node == nullptr) return;
        ss << node->data << " ";
        preorder(node->left, ss);
        preorder(node->right, ss);
    }

    void inorder(Node* node, stringstream& ss) const {
        if (node == nullptr) return;
        inorder(node->left, ss);
        ss << node->data << " ";
        inorder(node->right, ss);
    }

    void postorder(Node* node, stringstream& ss) const {
        if (node == nullptr) return;
        postorder(node->left, ss);
        postorder(node->right, ss);
        ss << node->data << " ";
    }

    void levelOrder(Node* node, stringstream& ss) const {
        if (node == nullptr) return;
        queue<Node*> q;
        q.push(node);
        while (!q.empty()) {
            Node* current = q.front();
            q.pop();
            ss << current->data << " ";
            if (current->left != nullptr) q.push(current->left);
            if (current->right != nullptr) q.push(current->right);
        }
    }

    int height(Node* node) const {
        if (node == nullptr) return 0;
        return 1 + max(height(node->left), height(node->right));
    }

    bool findAncestors(Node* node, T value, stringstream& ss) const {
        if (node == nullptr) return false;
        if (node->data == value) return true;
        if (findAncestors(node->left, value, ss) || findAncestors(node->right, value, ss)) {
            ss << node->data << " ";
            return true;
        }
        return false;
    }

    int whatlevelamI(Node* node, T value, int level) const {
        if (node == nullptr) return -1;
        if (node->data == value) return level;
        int left = whatlevelamI(node->left, value, level + 1);
        if (left != -1) return left;
        return whatlevelamI(node->right, value, level + 1);
    }

public:
    BST() : root(nullptr) {}

    void add(T value) {
        add(root, value);
    }

    string visit() const {
        stringstream ss;
        preorder(root, ss);
        ss << "\n";
        inorder(root, ss);
        ss << "\n";
        postorder(root, ss);
        ss << "\n";
        levelOrder(root, ss);
        return ss.str();
    }

    int height() const {
        return height(root);
    }

    string ancestors(T value) const {
        stringstream ss;
        findAncestors(root, value, ss);
        return ss.str();
    }

    int whatlevelamI(T value) const {
        return whatlevelamI(root, value, 1);
    }
};
