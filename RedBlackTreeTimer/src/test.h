//
// Created by mcuzzo on 4/4/21.
//

#ifndef MIDTERM_TEST_H
#define MIDTERM_TEST_H

#include "chrono"
#include "iostream"
#include "AVLTree/AVLTree.h"
#include "RBTree/RBTree.h"
#include "vector"
#include "stdlib.h"

using namespace std;
using namespace chrono;

class test {
public:
    test();
    void run();
    void generate();
    void insert();
    void printResult();
private:
    vector<int> dataSet;
    RBTree rbtree;
    AVLTree avltree;
    int size;
    string table;
};


#endif //MIDTERM_TEST_H
