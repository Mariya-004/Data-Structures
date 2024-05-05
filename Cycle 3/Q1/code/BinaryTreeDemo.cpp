#include "BinaryTree.cpp"
int main() {
    int size;
    cout << "Enter the size of the binary tree: ";
    cin >> size;

    Tree t(size);

    int rootValue;
    cout << "Enter the value for the root node: ";
   	cin >> rootValue;
    t.set_root(rootValue);

    for (int i = 0; i <size/2; ++i) {
        int leftChild, rightChild;
        cout << "Enter the left child value for node " << i << ": ";
        cin >> leftChild;
        t.set_left(leftChild, i);

        cout << "Enter the right child value for node " << i << ": ";
        cin >> rightChild;
        t.set_right(rightChild, i);
    }
    cout << "Inorder Traversal: ";
    t.in_order(0);
    cout << std::endl;

    cout << "Preorder Traversal: ";
    t.pre_order(0);
    cout << std::endl;

    cout << "Postorder Traversal: ";
    t.post_order(0);
    cout <<endl;

    return 0;
}


