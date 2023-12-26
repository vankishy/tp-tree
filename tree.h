//
// Created by vankishy on 26/12/23.
//

#ifndef TREE_TREE_H
#define TREE_TREE_H
#include <iostream>
#include <stdio.h>
#define info(P) P->info
#define left(P) P->left
#define right(P) P->right
using namespace std;


typedef int infotype;
typedef struct Node *adrNode;
typedef adrNode BinTree;

struct Node {
    infotype info;
    adrNode left, right;
};

adrNode newNode(infotype x);
adrNode findNode(adrNode root, infotype x);
void insertNode(adrNode &root, adrNode p);
void printPreOrder(adrNode root);
void printDescendant(adrNode root, infotype x);
int sumNode(adrNode root);
int countLeaves(adrNode root);
int heightTree(adrNode root);

#endif //TREE_TREE_H
