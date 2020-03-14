// MZMTIN002

#ifndef ASSIGNMENT_3_HUFFMANNODE_H
#define ASSIGNMENT_3_HUFFMANNODE_H

#include <memory>
#include <bits/shared_ptr.h>

using namespace std;

class HuffmanNode {
private:
//    shared_ptr<HuffmanNode> left;
//    shared_ptr<HuffmanNode> right;
    char letter;
    int freq;
public:
    HuffmanNode();

    ~HuffmanNode();
};


#endif //ASSIGNMENT_3_HUFFMANNODE_H
