//
// Created by vankishy on 26/12/23.
//
#include "tree.h"

adrNode newNode(infotype x) {
    adrNode P = new Node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;
    return P;
}

adrNode findNode(adrNode root, infotype x) {
    if ((root == NULL) || (info(root) == x)) {
        return root;
    } else {
        if (x < info(root)) {
            findNode(left(root), x);
        } else {
            findNode(right(root), x);
        }
    }
}

void insertNode(adrNode &root, adrNode P) {
    if (root == NULL) {
        root = P;
    } else {
        if (info(P) < info(root)) {
            insertNode(left(root), P);
        } else {
            insertNode(right(root), P);
        }
    }
}

void printPreOrder(adrNode root) {
    if (root != NULL) {
        cout << info(root) << " ";
        printPreOrder(left(root));
        printPreOrder(right(root));
    }
}

void printDescendant(adrNode root, infotype x) {
    if (left(root) != NULL && right(root) != NULL) {
        cout << info(left(root)) << " ";
        printDescendant(left(root), x);
        cout << info(right(root)) << " ";
        printDescendant(right(root), x);
    }
}

int sumNode(adrNode root) {
    if (root == NULL) {
        return 0;
    } else {
        return info(root) + sumNode(left(root)) + sumNode(right(root));
    }
}

int countLeaves(adrNode root) {
    if (root != NULL) {
        return 0;
    } else {
        if (left(root) == NULL && right(root) == NULL) {
            return 1;
        } else {
            return countLeaves(left(root)) + countLeaves(right(root));
        }
    }
}

int heightTree(adrNode root) {
    if (root == NULL) {
        return 0;
    } else {
        int leftHeight = heightTree(left(root));
        int rightHeight = heightTree(right(root));

        if (leftHeight < rightHeight){
            return (leftHeight + 1);
        }else{
            return (rightHeight + 1);
        }
    }
}