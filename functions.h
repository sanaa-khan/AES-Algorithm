#pragma once

#include<iostream>
#include<math.h>

unsigned char substitute(int index);

unsigned char reverse_substitute(unsigned char byte);

void rotate_left(unsigned char* byte_array);

int findIndexInsBox(char index);

int invIndex(int value);

void SubBytes(unsigned char* state);

void InvSubBytes(unsigned char* state);

void InvShiftRows(unsigned char* state);

void ShiftRows(unsigned char* state);

void addRoundKey(unsigned char* state, unsigned char* roundKey);

void KeyExpansion(unsigned char* cipherkey, unsigned char* expandedkey);

unsigned char multiplyTables(unsigned char value, int option);

void MixColumn(unsigned char* state);

void Encrypt(unsigned char* plaintext, unsigned char* cipherkey, unsigned char* ciphertext);

void Decrypt(unsigned char* ciphertext, unsigned char* cipherkey, unsigned char* plaintext);

void InvMixColumn(unsigned char* state);