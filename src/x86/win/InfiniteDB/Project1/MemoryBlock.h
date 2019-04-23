#pragma once

#include <cinttypes>


class MemoryBlock {
	private:
		std::uint8_t * memory = 0;
		int size = 0;
	public:
		MemoryBlock(int size);
		std::uint8_t * getMemory();
		void setValue(int index, std::uint8_t byte);
		std::uint8_t getValue(int index);
		int getSize();
		~MemoryBlock();
};