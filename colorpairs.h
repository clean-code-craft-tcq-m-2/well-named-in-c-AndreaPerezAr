#ifndef COLORPAIRS_H
#define COLORPAIRS_H

//Location of libraries
#include <stdio.h>
#include <assert.h>

//Location od variables
enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

//Location of functions
void ColorPairToString(const ColorPair* , char* );
ColorPair GetColorFromPairNumber(int);
int GetPairNumberFromColor(const ColorPair*);

#endif