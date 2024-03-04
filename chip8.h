#include <cstdint>

uint8_t opcode;

uint16_t memory[4096];

uint8_t V[16];

uint16_t I;
uint16_t pc;

uint8_t gfx[64 * 32];

