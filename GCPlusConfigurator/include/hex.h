#pragma once

class IntelHex {
private:
    u8 hex2u8(const char* string);
    u16 hex2u16(const char* string);
public:
    u8* binary;
    u32 binarySize;

    IntelHex();
    ~IntelHex();
    //IntelHex(const u8* data, const u32 _size);
    IntelHex(const char* filename);
};