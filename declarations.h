#ifndef DECLARATIONS_H
#define DECLARATIONS_H

enum MajorColor {WHITE, RED, BLACK, YELLOW, VIOLET};
enum MinorColor {BLUE, ORANGE, GREEN, BROWN, SLATE};

static const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};

static const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};


static const int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
static const int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);
static const int MAX_COLORPAIR_NAME_CHARS = 16;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;

#endif		//DECLARATIONS_H
