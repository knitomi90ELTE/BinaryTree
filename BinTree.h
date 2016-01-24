//
// Created by capri on 2016. 01. 24..
//

#ifndef BINARYTREE_BINTREE_H
#define BINARYTREE_BINTREE_H

#include "Node.h"

template <typename T>
class BinTree{

    void insert(T key, Node<T>* leaf){
        if(key < leaf->key_value) {
            if(leaf->left != NULL){
                insert(key, leaf->left);
            } else {
                leaf->left=new Node<T>;
                leaf->left->key_value = key;
                leaf->left->left = NULL;    //Sets the left child of the child node to null
                leaf->left->right = NULL;   //Sets the right child of the child node to null
            }
        } else {
            if(leaf->right != NULL){
                insert(key, leaf->right);
            } else {
                leaf->right = new Node<T>;
                leaf->right->key_value = key;
                leaf->right->left = NULL;  //Sets the left child of the child node to null
                leaf->right->right = NULL; //Sets the right child of the child node to null
            }
        }
    };

public:

    Node<T>* root;

    BinTree(){
        root = NULL;
        std::cout << "Constructor called " << root << std::endl;
    };

    ~BinTree(){
        destroyTree(root);
    };


    void insert(T key){
        if ( !root ) {
            root = new Node<T>();
            root->key_value = key;
            std::cout << "Addig root node key = " << key << std::endl;
        }
        else {
            std::cout << "Addig other node key = " << key << std::endl;
            insert(key, root);
        }
    };


    Node<T>* search(T key, Node<T>* leaf){
        if(leaf)
        {
            if(key == leaf->key_value)
                return leaf;
            if(key < leaf->key_value)
                return search(key, leaf->left);
            else
                return search(key, leaf->right);
        }
        else return NULL;
    };

    void destroyTree(Node<T>* leaf){
        if(leaf)
        {
            destroyTree(leaf->left);
            destroyTree(leaf->right);
            delete leaf;
        }
    };


    void inOrder(Node<T>* n){
        if(n){
            inOrder(n->left);
            std::cout << n->key_value << " ";
            inOrder(n->right);
        }
    }

    void preOrder(Node<T>* n){
        if(n){
            std::cout << n->key_value << " ";
            preOrder(n->left);
            preOrder(n->right);
        }
    }

    void postOrder(Node<T>* n){
        if(n){
            postOrder(n->left);
            postOrder(n->right);
            std::cout << n->key_value << " ";
        }
    }

    int countLeafs(Node<T>* n){
        if(n){
            if(!n->left && !n->right){
                return 1;
            }else{
                return countLeafs(n->left) + countLeafs(n->right);
            }
        }else{
            return 0;
        }
    }
};

#endif //BINARYTREE_BINTREE_H
