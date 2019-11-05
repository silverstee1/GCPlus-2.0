#pragma once

#define RGBA8(r, g, b, a) ((r << 24) | (g << 16) | (b << 8) | a)

typedef struct {
    GXTexObj texObj;
    u8* data;
    u16 width;
    u16 height;
    u16 realWidth;
    u16 realHeight;
} Texture;

Texture createTextureARGB8(u8* buffer, u16 width, u16 height);
Texture createTextureRGB8(u8* buffer, u16 width, u16 height);
Texture createTextureA8(u8* buffer, u16 width, u16 height);
Texture createTextureFromTPL(TPLFile *tdf, s32 id);
Texture copyTexture(Texture src);

void drawTexture(int x, int y, Texture tex);
void drawTextureColor(int x, int y, u32 rgba, Texture tex);
void drawTextureResized(int x, int y, int width, int height, Texture tex);
void drawRectangle(int x, int y, int width, int height, u32 rgba);
void drawLine(int x1, int y1, int x2, int y2, float width, u32 rgba);