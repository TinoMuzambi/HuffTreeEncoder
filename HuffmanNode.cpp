// MZMTIN002

#include "HuffmanNode.h"

HuffmanNode::HuffmanNode() {
    cout << "In HuffmanNode constructor" << endl;
}

HuffmanNode::~HuffmanNode() {
    cout << "In HuffmanNode destructor" << endl;
}

struct comp{
    bool operator()(const HuffmanNode &rhs, const HuffmanNode &lhs) {
        cout << "In HuffmanNode comp struct" << endl;
        return lhs.freq < rhs.freq;
    }
};

HuffmanNode HuffmanNode::getHuffNode(char letter, int freq, shared_ptr<HuffmanNode> left, shared_ptr<HuffmanNode> right) {
    cout << "In HuffmanNode getHuffNode() func" << endl;
    HuffmanNode node;
    node.letter = letter;
    node.freq = freq;
    node.left = left;
    node.right = right;

    return node;
}
