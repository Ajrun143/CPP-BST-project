#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
}

void inorderTraversal(Node* root) {
    if (root != nullptr) {
        inorderTraversal(root->left);
        cout << root->data << " ";
        inorderTraversal(root->right);
    }
}

void preorderTraversal(Node* root) {
    if (root != nullptr) {
        cout << root->data << " ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

void postorderTraversal(Node* root) {
    if (root != nullptr) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout << root->data << " ";
    }
}

Node* insertNode(Node* root, int data) {
    if (root == nullptr) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }
    return root;
}

Node* searchNode(Node* root, int key) {
    if (root == nullptr || root->data == key) {
        return root;
    }
    if (root->data < key) {
        return searchNode(root->right, key);
    }
    return searchNode(root->left, key);
}

Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr) {
        current = current->left;
    }
    return current;
}

Node* deleteNode(Node* root, int data) {
    if (root == nullptr) {
        return root;
    }
    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == nullptr) {
            Node* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == nullptr) {
            Node* temp = root->left;
            delete root;
            return temp;
        }
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

void sortArray(vector<int>& arr) {
    Node* root = nullptr;
    for (int i : arr) {
        root = insertNode(root, i);
    }
    inorderTraversal(root);
    cout << endl;
}

int main() {
    Node* root = nullptr;

    // Create a Binary Search Tree
    int value;
    cout << "Enter the elements you want to enter in BST (enter -1 to stop): " << endl;
    while (value != -1) {
        cin >> value;
        if (value == -1) {
            break;
        }
        root = insertNode(root, value);
    }

    cout << "The BST in Inorder traversal: ";
    inorderTraversal(root);
    cout << endl;

    cout << "The BST in Preorder traversal: ";
    preorderTraversal(root);
    cout << endl;

    cout << "The BST in Postorder traversal: ";
    postorderTraversal(root);
    cout << endl;

    // Insert a node in BST
    int insert;
    cout << "Enter the node you want to insert: ";
    cin >> insert;
    root = insertNode(root, insert);
    cout << "After insertion of " << insert << ": ";
    inorderTraversal(root);
    cout << endl;

    // Search a Node in BST
    int searchKey;
    cout << "Enter the node you want to search: ";
    cin >> searchKey;
    Node* found = searchNode(root, searchKey);
    if (found != nullptr) {
        cout << "Node " << searchKey << " found in the BST." << endl;
    } else {
        cout << "Node " << searchKey << " not found in the BST." << endl;
    }

    // Delete a Node in BST
    int deleteKey;
    cout << "Enter the node you want to delete: ";
    cin >> deleteKey;
    Node* delNode = deleteNode(root, deleteKey);
    if (delNode != nullptr) {
        cout << "Node " << deleteKey << " deleted." << endl;
    } else {
        cout << "Node " << deleteKey << " not found in the BST." << endl;
    }
    cout << "After deletion of " << deleteKey << ": ";
    inorderTraversal(root);
    cout << endl;

    // Sorting an array using BST
    vector<int> arr;
    cout << "Enter the elements you want to sort: ";
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }
    cout << "Sorted array: ";
    sortArray(arr);
    cout << endl;

    return 0;
}
