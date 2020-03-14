// MZMTIN002

#include "HuffmanTree.h"

MZMTIN002::HuffmanTree::HuffmanTree() {
}

MZMTIN002::HuffmanTree::~HuffmanTree() {
    //head = nullptr; // TODO fix this.
}

void MZMTIN002::HuffmanTree::compressData() {

}

void MZMTIN002::HuffmanTree::buildTree() {
    for (auto element : count) {
        cout << element.first << " " << element.second << endl;
//        shared_ptr<HuffmanNode> node = HuffmanNode();
    }
}

void MZMTIN002::HuffmanTree::populateMap(const string str) {
    std::unordered_map<char, int> counts = count;
    for_each(begin(str), end(str),[&counts](const char& c) {
        counts[c]++;
    });

    count = counts;

}

MZMTIN002::HuffmanTree::HuffmanTree(const MZMTIN002::HuffmanTree &rhs) {

}

MZMTIN002::HuffmanTree &MZMTIN002::HuffmanTree::operator=(MZMTIN002::HuffmanTree &&rhs) {
    return rhs;
}

MZMTIN002::HuffmanTree &MZMTIN002::HuffmanTree::operator=(MZMTIN002::HuffmanTree &rhs) {
    return rhs;
}

MZMTIN002::HuffmanTree::HuffmanTree(MZMTIN002::HuffmanTree &&rhs) {

}

