#include <iostream>
#include <cinttypes>
#include <string>

#include "MemoryBlock.h"

#include <Windows.h>

int main() {

	MemoryBlock* sector1 = new MemoryBlock(512);

	std::string data = "Hello, World";
	int startIndex = 0;
	for (int j = 0; j < data.size(); j++) {
		sector1->setValue(startIndex + j,(std::uint8_t) data.at(j));
	}

	std::uint8_t* memoryPointer = sector1->getMemory();
	int size = sector1->getSize();
	std::cout << "Memory Block Size:" << size << "Bytes \n";
	std::cout << "Memory Data: \n";

	for (int i = 0; i < size; i++) {
		std::cout << std::to_string(i) << " : " << std::to_string(memoryPointer[i]) << std::endl;
	}

	// Windows Code
	std::cout << std::endl;
	std::cout << "Press Space to Exit...\n";
	while (GetAsyncKeyState(VK_SPACE) == false) {}

	return 0;
}