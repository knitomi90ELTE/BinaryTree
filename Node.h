//
// Created by capri on 2016. 01. 24..
//

#ifndef BINARYTREE_NODE_H
#define BINARYTREE_NODE_H

template <typename T>
struct Node{
    Node(){
        left = NULL;
        right = NULL;
    }
    T key_value;
    Node* left;
    Node* right;

    /*
    Node& operator=(const Node& other){
        key_value = other.key_value;
        left = other.left;
        right = other.right;

        return *this;
    }
    */
};

#endif //BINARYTREE_NODE_H
