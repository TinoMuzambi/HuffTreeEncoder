// MZMTIN002

#ifndef ASSIGNMENT_3_HUFFMANTREE_H
#define ASSIGNMENT_3_HUFFMANTREE_H

#include <memory>
#include <bits/shared_ptr.h>
#include "HuffmanNode.h"
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
using namespace std;

namespace MZMTIN002 {
    class HuffmanTree {
    private:
        shared_ptr<HuffmanNode> head;

        struct compare {
            bool operator()(const HuffmanNode &a, const HuffmanNode &b) {
                return (a.freq < b.freq);
    //                return true;
            }
        };
        priority_queue<HuffmanNode, vector<HuffmanNode>, compare> queue;
    public:
        HuffmanTree(); // Default constructor

        ~HuffmanTree(); // Destructor

        HuffmanTree(const HuffmanTree &rhs); // Copy constructor

        HuffmanTree(HuffmanTree &&rhs); // Move constructor

        HuffmanTree & operator=(HuffmanTree &&rhs); // Move assignment constructor

        HuffmanTree & operator=(HuffmanTree &rhs); // Assignment constructor

        void compressData();

        void buildTree(string str);

        void populateMap(string str);

        unordered_map<char, int> count;

        /**
         * Traverse the Huffman tree and store huffman codes in a map.
         * @param str string to be encoded
         * @param huffmanCode map the codes will be stored in.
         */
        void encode(shared_ptr<HuffmanNode> root, string str, unordered_map<char, string> &huffmanCode);

        void decode(shared_ptr<HuffmanNode> root, int &index, string str);
    };
}

#endif //ASSIGNMENT_3_HUFFMANTREE_H
