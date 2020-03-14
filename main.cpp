// MZMTIN002

#include <fstream>
#include "main.h"

int main(int argc, char* argv[]) {
    string in_file;
    string out_file;

    try {
        in_file = argv[1];
        out_file = argv[2];
    }
    catch (int e) {
        cout << "nah nigga" << endl;
    }

    MZMTIN002::HuffmanTree tree;

    ifstream in(in_file);
    string line;
    while (getline(in, line)) {
        tree.populateMap(line);
    }

    for(auto& pair: tree.count) { //TODO remove this.
        cout << '{' << pair.first << ": " << pair.second
             << '}' << '\n';
    }

    tree.buildTree();

    return 0;
}
