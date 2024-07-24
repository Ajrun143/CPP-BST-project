# Binary Search Tree (BST) Implementation in C++

## Overview
A Binary Search Tree (BST) is a node-based binary tree data structure where each node has the following properties:

- The left subtree of a node contains only nodes with keys lesser than the node's key.
- The right subtree of a node contains only nodes with keys greater than the node's key.
- The left and right subtree each must also be a binary search tree. This project provides a C++ implementation of a Binary Search Tree with functionalities to insert, search, and delete nodes.
 
## Features and Functionalities

- Insert: Add a new node to the BST.
- Search: Find a node in the BST.
- Delete: Remove a node from the BST.
- Inorder Traversal: Print the BST nodes in ascending order.
  
## Technology Used

- C++: The programming language used to implement the BST.
  
## How to Run the Program

1. Install a C++ compiler: Make sure you have a C++ compiler installed, such as GCC.
2. Compile the program: Use the following command to compile the program: g++ bst.cpp -o bst
3. Run the executable: Use the following command to run the program: ./bst

### Prerequisites

- Basic understanding of C++ programming.
- Knowledge of data structures, particularly binary search trees.
 
### Getting Started

1. Clone the repository: If the code is in a repository, clone it using: git clone <repository_url> cd <repository_directory>

## Usage

### Insert Elements

Use the insert function to add elements to the BST:

- bst.insert(50);
- bst.insert(30);
- bst.insert(20);
- bst.insert(40);
- bst.insert(70);
- bst.insert(60);
- bst.insert(80);
   
## Search for Elements

Use the search function to find elements in the BST:

- cout << "Search for 40: " << (bst.search(40) != nullptr) << endl;
- cout << "Search for 100: " << (bst.search(100) != nullptr) << endl;
  
## Delete Elements

Use the deleteNode function to remove elements from the BST:

- bst.deleteNode(20);
- bst.deleteNode(30);
- bst.deleteNode(50);
  
## Inorder Traversal

Use the inorder function to print the BST nodes in ascending order:

- bst.inorder();
  
## Conclusion
 
This project provides a complete implementation of a Binary Search Tree (BST) in C++. It includes the fundamental operations such as insertion, searching, and deletion of nodes, along with an inorder traversal to verify the tree's structure. The BST is a crucial data structure for many applications that require dynamic data insertion, deletion, and search operations.

The provided example usage demonstrates how to create a BST, perform insertions, search for keys, delete keys, and print the tree's inorder traversal to ensure that the operations are functioning correctly. This implementation can serve as a foundation for more advanced tree operations and can be extended to include additional functionalities as needed.
