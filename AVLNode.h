//
// Created by capri on 2016. 01. 24..
//

#ifndef BINARYTREE_AVLNODE_H
#define BINARYTREE_AVLNODE_H

template <typename T>
struct AVLNode{
    AVLNode(){
        s = 0;
        left = 0;
        right = 0;
    }

    AVLNode(const T& x){
        s = 0;
        left = 0;
        right = 0;
        gy = x;
    }

    int s;
    T gy;
    AVLNode* left;
    AVLNode* right;


};

#endif //BINARYTREE_AVLNODE_H
