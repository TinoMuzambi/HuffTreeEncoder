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
        unordered_map<char, int> count;
        class compare {
        public:
            bool operator()(const HuffmanNode &a, const HuffmanNode &b) {
//                return (a < b);
                return true;
            }

        };
        priority_queue<HuffmanNode, vector<HuffmanNode>, compare> queue; // TODO Fix this.
    public:
        HuffmanTree(); // Default constructor

        ~HuffmanTree(); // Destructor

        HuffmanTree(const HuffmanTree &rhs); // Copy constructor

        HuffmanTree(HuffmanTree &&rhs); // Move constructor

        HuffmanTree & operator=(HuffmanTree &&rhs); // Move assignment constructor

        HuffmanTree & operator=(HuffmanTree &rhs); // Assignment constructor

        void compressData();

        void buildTree();

        void populateMap(string str);

    };
}

#endif //ASSIGNMENT_3_HUFFMANTREE_H
