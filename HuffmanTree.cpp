// MZMTIN002

#include "HuffmanTree.h"

MZMTIN002::HuffmanTree::HuffmanTree() {
    cout << "In HuffmanTree constructor" << endl;
}

MZMTIN002::HuffmanTree::~HuffmanTree() {
    cout << "In HuffmanTree destructor" << endl;
    //head = nullptr; // TODO fix this.
}

void MZMTIN002::HuffmanTree::compressData() {

}

void MZMTIN002::HuffmanTree::buildTree(string str) {
    cout << "In buildTree() func" << endl;
    HuffmanNode huff;
    populateMap(str);

    cout << "Back in buildTree() func" << endl;
    for (auto pair : count) {
        queue.push(huff.getHuffNode(pair.first, pair.second, nullptr, nullptr));
    }

    int i = 0;
    cout << queue.size() << " size" << endl;
    while (queue.size() != 1){
        cout << "in while loop " << i << endl;
        i++;
        shared_ptr<HuffmanNode> left = (const shared_ptr<HuffmanNode> &) queue.top();
        queue.pop();
        shared_ptr<HuffmanNode> right = (const shared_ptr<HuffmanNode> &) queue.top();
        queue.pop();

        int sum = left->freq + right->freq;
        queue.push(huff.getHuffNode('\0', sum, left, right));
    }

    cout << "done" << endl;
    shared_ptr<HuffmanNode> root = (const shared_ptr<HuffmanNode> &) queue.top();

    unordered_map<char, string> huffmanCode;
    encode(root, "", huffmanCode);

    cout << "Huffman Codes are :\n" << '\n';
    for (auto pair: huffmanCode) {
        cout << pair.first << " " << pair.second << '\n';
    }

    cout << "\nOriginal string was :\n" << str << '\n';

    // print encoded string
    string temp = "";
    for (char ch: str) {
        temp += huffmanCode[ch];
    }

    cout << "\nEncoded string is :\n" << str << '\n';

    // traverse the Huffman Tree again and this time
    // decode the encoded string
    int index = -1;
    cout << "\nDecoded string is: \n";
    while (index < (int)str.size() - 2) {
        decode(root, index, str);
    }
}

void MZMTIN002::HuffmanTree::populateMap(const string str) {
    cout << "In populateMap() func" << endl;
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

void
MZMTIN002::HuffmanTree::encode(shared_ptr<HuffmanNode> root, string str, unordered_map<char, string> &huffmanCode) {
    cout << "In encode() func" << endl;
    if (root == nullptr) {
        return;
    }

    if (!root->left && !root->right) {
        huffmanCode[root->letter] = str;
    }

    encode(root->left, str + "0", huffmanCode);
    encode(root->right, str + "1", huffmanCode);
}

void MZMTIN002::HuffmanTree::decode(shared_ptr<HuffmanNode> root, int &index, string str) {
    cout << "In decode() func" << endl;
    if (root == nullptr) {
        return;
    }

    if (!root->left && !root->right) {
        cout << root->letter;
        return;
    }

    index++;

    if (str[index] == '0') {
        decode(root->left, index, str);
    }
    else {
        decode(root->right, index, str);
    }
}

