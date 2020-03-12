// MZMTIN002

#include "HuffmanTree.h"

HuffmanTree::HuffmanTree() {
}

HuffmanTree::~HuffmanTree() {
    //head = nullptr; // TODO fix this.
}

void HuffmanTree::compressData() {

}

void HuffmanTree::buildTree() {

}

bool HuffmanTree::compare(const HuffmanNode &a, const HuffmanNode &b) {
    return false;
}

void HuffmanTree::populateMap() {
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

bool compare(const HuffmanNode& a, const HuffmanNode& b)
{
    //return (a < b); // or > if the algorithm requires that ordering
    return 0;
}
