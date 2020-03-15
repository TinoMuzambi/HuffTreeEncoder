// MZMTIN002

#ifndef ASSIGNMENT_3_HUFFMANNODE_H
#define ASSIGNMENT_3_HUFFMANNODE_H

#include <memory>
#include "iostream"
#include <bits/shared_ptr.h>

using namespace std;

class HuffmanNode {
public:
    HuffmanNode();

    ~HuffmanNode();

    shared_ptr<HuffmanNode> left, right;
    char letter;
    int freq;

    bool operator <(const HuffmanNode& rhs);

    HuffmanNode getHuffNode(char letter, int freq, shared_ptr<HuffmanNode> left, shared_ptr<HuffmanNode> right);
};


#endif //ASSIGNMENT_3_HUFFMANNODE_H
