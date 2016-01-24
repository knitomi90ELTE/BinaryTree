#include <iostream>
#include "BinTree.h"


int main() {

    BinTree<int>* tree;
    tree = new BinTree<int>();
    tree->insert(30);
    tree->insert(10);
    tree->insert(20);
    tree->insert(40);
    tree->insert(50);

    tree->inOrder(tree->root);
    std::cout << std::endl;
    tree->preOrder(tree->root);
    std::cout << std::endl;
    tree->postOrder(tree->root);
    std::cout << std::endl;

    return 0;
}