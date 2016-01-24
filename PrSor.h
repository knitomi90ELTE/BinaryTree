//
// Created by capri on 2016. 01. 24..
//

#ifndef BINARYTREE_PRSOR_H
#define BINARYTREE_PRSOR_H

#include <vector>

template <typename T>
class PrSor{
    std::vector<T> container;
public:
    void uresSor(){
        container.clear();
    }

    void prSorba(const T& x){
        container.push_back(x);
    }

    T& maxKivesz(){
        T& x = container.back();
        container.pop_back();
        return x;
    }

    T& max(){
        return container.back();
    }

    bool tele_e(){
        return container.size() == container.max_size();
    }

    bool ures_e(){
        return container.empty();
    }
};

#endif //BINARYTREE_PRSOR_H
