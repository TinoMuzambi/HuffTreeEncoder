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

bool MZMTIN002::HuffmanTree::compare(const HuffmanNode &a, const HuffmanNode &b) {
    return false;
}

void MZMTIN002::HuffmanTree::populateMap() {
    string str = "the quick brown fox jumped over the lazy dog.";
    std::unordered_map<char, int> counts;
    for_each(begin(str),
                  end(str),
                  [&counts](const char& c) {
                      counts[c]++;
                  });

    for(auto& pair: counts) {
        cout << '{' << pair.first << ": " << pair.second
                  << '}' << '\n';
    }
}

