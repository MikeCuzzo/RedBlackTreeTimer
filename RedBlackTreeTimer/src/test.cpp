//
// Created by mcuzzo on 4/4/21.
//

#include "test.h"

test::test() {
    table = "No Table";
    size = 0;
}

void test::run() {
    for(int i=10;i<1000000;i*=10) {
        size = i;
        generate();
        insert();
    }
}

void test::generate() {
    //generates 10000 randoms numbers for the dataset
    srand(NULL);
    vector<int> temp;

    for (int i = 0; i < size; i++)
        temp.push_back(rand() % size + 1);

    dataSet = temp;
}

void test::insert() {
    table = "RBTree";
    //measures RBTree time
    auto start = steady_clock::now();
    for (int i = 0; i < dataSet.size(); i++)
        rbtree.insertValue(dataSet[i]);
    auto end = chrono::steady_clock::now();
    printResult();
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;

    table = "AVLTree";
    //measures AVLTree time
    start = steady_clock::now();
    for (int i = 0; i < dataSet.size(); i++)
        avltree.insert(dataSet[i]);
    end = chrono::steady_clock::now();
    printResult();
    cout << chrono::duration_cast<chrono::microseconds>(end - start).count() << " microseconds" << endl;

}

void test::printResult() {
    cout << "Elapsed time for insertion of " << size << " elements into " << table << ": ";
}
