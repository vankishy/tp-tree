#include "tree.h"

int main() {
    adrNode root = NULL;
    int x[9] = {5,3,9,10,4,7,1,8,6};
    int i = 0;

    cout << "Input : " << endl;
    for (i = 0 ; i < 9 ; i++) {
        cout << x[i] << " ";
    }

    cout << endl << endl << "Pre-Order : ";
    for (i = 0 ; i < 9 ; i++) {
        insertNode(root, newNode(x[i]));
    }
    printPreOrder(root);
    cout << endl << endl;

    cout << "Descendant Of Node 9 : "; printDescendant(findNode(root, 9), 9);
    cout << endl << endl;

    cout << "Sum of BST : " << sumNode(root) << endl << endl;
    cout << "Number Of Leaves : " << countLeaves(root) << endl << endl;
    cout << "Height of Tree : " << heightTree(root) << endl;

    return 0;
}
