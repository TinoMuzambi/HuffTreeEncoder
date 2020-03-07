# Tinotenda Muzambi
# MZMTIN002

default:
	@g++ main.cpp HuffmanNode.cpp HuffmanTree.cpp -o huffencode

main.run: main.o HuffmanNode.o HuffmanTree.o
	g++ main.run main.o HuffmanNode.o HuffmanTree.o
main.o: main.cpp HuffmanNode.h HuffmanTree.h
	g++ -c -o main.o main.cpp
HuffmanNode.o: HuffmanNode.cpp HuffmanNode.h
	g++ -c -o HuffmanNode.o HuffmanNode.cpp
HuffmanTree.o: HuffmanTree.cpp HuffmanTree.h
	g++ -c -o HuffmanTree.o HuffmanTree.cpp

clean:
	@rm -f ./huffencode *.o
	@rm -f *.dat
	@rm -f *.bin
	@rm -f *.raw
