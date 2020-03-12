// MZMTIN002

#ifndef ASSIGNMENT_3_HUFFMANTREE_H
#define ASSIGNMENT_3_HUFFMANTREE_H

#include <memory>
#include <bits/shared_ptr.h>
#include "HuffmanNode.h"
#include <unordered_map>
#include <iostream>
using namespace std;

class HuffmanTree {
private:
    shared_ptr<HuffmanTree> head;
    unordered_map<string, int> counts;
public:
    HuffmanTree();

    ~HuffmanTree();

    void compressData();

    void buildTree();

    bool compare(const HuffmanNode& a, const HuffmanNode& b);

};


#endif //ASSIGNMENT_3_HUFFMANTREE_H
