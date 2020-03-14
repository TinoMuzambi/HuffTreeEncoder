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

}

void MZMTIN002::HuffmanTree::populateMap(const string str) {
    std::unordered_map<char, int> counts;
    for_each(begin(str), end(str),[&counts](const char& c) {
        counts[c]++;
    });

    count = counts;
    for(auto& pair: count) {
        cout << '{' << pair.first << ": " << pair.second
                  << '}' << '\n';
    }
}

