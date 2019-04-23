#include "MemoryBlock.h"

MemoryBlock::MemoryBlock(int size){
	this->memory = new std::uint8_t[size];
	for (int i = 0; i < size; i++) this->memory[i] = 0x00;
	this->size = size;
}

std::uint8_t * MemoryBlock::getMemory() {
	return this->memory;
}

int MemoryBlock::getSize() {
	return this->size;
}

void MemoryBlock::setValue(int index, std::uint8_t val) {
	if (index >= 0 && index < this->size) {
		this->memory[index] = val;
	}
}

std::uint8_t MemoryBlock::getValue(int index) {
	if (index >= 0 && index < this->size) {
		return this->memory[index];
	}
	return 0xfe;
}

MemoryBlock::~MemoryBlock(){

}
