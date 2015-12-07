/*For a size of n, return a bitmask such that n elements can be enumarated*/
/*If you need to "trim" so alignment fits to a number of bits, reverse the*/
/*mask returned by this function:                                         */
/*                                                                        */
/*uint32_t positive_mask = size_bitmask(size);                            */
/*uint32_t negative_mask = size_bitmask(size) ^ 0xFFFFFFFFU;              */
#include <stdint.h>
uint32_t  size_bitmask(uint32_t size) {
	//Size should not be Zero
	//assert(size > 0);
	//...But if size is Zero, the bitmask is 0xFFFFFFFF
	if (size == 0) {
		return 0xFFFFFFFFU;
	}

	//To generate the mask we set every bit below the first set bit, MSB first.

	uint8_t set_bit_index;
	//Search the first set bit
	for (uint8_t i = 0; i < 32; ++i) {
		//For each bit
		set_bit_index = 31 - i;
		//If set
		if (size & (1 << set_bit_index)) {
			break; //We found our first set bit
		}
		//Otherwise
		else {
			; //Do nothing
		}
	}

	//Now, set every size bit below bit_index to generate the mask
	for (uint8_t i = 0; i < set_bit_index; ++i) {
		size = size | (1 << i);
	}

	//Return the mask
	return size;
}
