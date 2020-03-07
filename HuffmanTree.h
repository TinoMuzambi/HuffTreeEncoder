// MZMTIN002

#ifndef ASSIGNMENT_3_HUFFMANTREE_H
#define ASSIGNMENT_3_HUFFMANTREE_H

#include "HuffmanNode.h"

class HuffmanTree {
private:
    HuffmanNode head;
public:
    HuffmanTree();

    ~HuffmanTree();

    void compressData();

    void buildTree();

    bool compare(const HuffmanNode& a, const HuffmanNode& b);

};


#endif //ASSIGNMENT_3_HUFFMANTREE_H
