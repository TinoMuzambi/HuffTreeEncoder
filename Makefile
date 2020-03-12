# Tinotenda Muzambi
# MZMTIN002

default:
	g++ main.cpp HuffmanNode.cpp HuffmanTree.cpp -o huffencode --std=c++11

main.run: main.o HuffmanNode.o HuffmanTree.o
	g++ main.run main.o HuffmanNode.o HuffmanTree.o --std=c++11
main.o: main.cpp HuffmanNode.h HuffmanTree.h
	g++ -c -o main.o main.cpp --std=c++11
HuffmanNode.o: HuffmanNode.cpp HuffmanNode.h
	g++ -c -o HuffmanNode.o HuffmanNode.cpp --std=c++11
HuffmanTree.o: HuffmanTree.cpp HuffmanTree.h
	g++ -c -o HuffmanTree.o HuffmanTree.cpp --std=c++11

clean:
	@rm -f ./huffencode *.o
	@rm -f *.dat
	@rm -f *.bin
	@rm -f *.raw
	@echo "Clean done!"

run:
	./huffencode in.txt out.txt
