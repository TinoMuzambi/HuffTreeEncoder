// MZMTIN002

#include "HuffmanNode.h"

HuffmanNode::HuffmanNode() {}

HuffmanNode::~HuffmanNode() {

}

bool HuffmanNode::operator<(const HuffmanNode &rhs) {
    return freq <= rhs.freq;
}
