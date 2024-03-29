/*
=======================================================================================================================================================================================================
========================  FONT CONSTANTS  =============================================================================================================================================================
=======================================================================================================================================================================================================
*/


char myCharacters[128][8] = {
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* NULL*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* ""*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00},       /* " "*/
{0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x00, 0x08},       /* "!"*/
{0x00, 0x14, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00},       /* """*/
{0x00, 0x14, 0x14, 0x3E, 0x14, 0x3E, 0x14, 0x14},       /* "#"*/
{0x00, 0x08, 0x3C, 0x0A, 0x1C, 0x28, 0x1E, 0x08},       /* "$"*/
{0x00, 0x06, 0x26, 0x10, 0x08, 0x04, 0x32, 0x30},       /* "%"*/
{0x00, 0x04, 0x0A, 0x0A, 0x24, 0x2A, 0x12, 0x2C},       /* "&"*/
{0x00, 0x0C, 0x08, 0x04, 0x00, 0x00, 0x00, 0x00},       /* "'"*/
{0x00, 0x10, 0x08, 0x04, 0x04, 0x04, 0x08, 0x10},       /* "("*/
{0x00, 0x04, 0x08, 0x10, 0x10, 0x10, 0x08, 0x04},       /* ")"*/
{0x00, 0x08, 0x2A, 0x1C, 0x08, 0x1C, 0x2A, 0x08},       /* "*"*/
{0x00, 0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x00},       /* "+"*/
{0x00, 0x00, 0x00, 0x0C, 0x08, 0x04, 0x00, 0x00},       /* ","*/
{0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x00},       /* "-"*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x0C},       /* "."*/
{0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 0x02, 0x00},       /* "/"*/
{0x00, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C},       /* "0"*/
{0x00, 0x08, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x1C},       /* "1"*/
{0x00, 0x1C, 0x22, 0x20, 0x10, 0x08, 0x04, 0x3E},       /* "2"*/
{0x00, 0x1E, 0x20, 0x20, 0x1C, 0x20, 0x20, 0x1E},       /* "3"*/
{0x00, 0x22, 0x22, 0x22, 0x3E, 0x20, 0x20, 0x20},       /* "4"*/
{0x00, 0x3E, 0x02, 0x1E, 0x20, 0x20, 0x22, 0x1C},       /* "5"*/
{0x00, 0x18, 0x04, 0x02, 0x1E, 0x22, 0x22, 0x1C},       /* "6"*/
{0x00, 0x3E, 0x20, 0x10, 0x10, 0x08, 0x08, 0x08},       /* "7"*/
{0x00, 0x1C, 0x22, 0x22, 0x1C, 0x22, 0x22, 0x1C},       /* "8"*/
{0x00, 0x1C, 0x22, 0x22, 0x3C, 0x20, 0x10, 0x0C},       /* "9"*/
{0x00, 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x0C, 0x00},       /* ":"*/
{0x00, 0x00, 0x0C, 0x0C, 0x00, 0x0C, 0x08, 0x04},       /* ";"*/
{0x00, 0x10, 0x08, 0x04, 0x02, 0x04, 0x08, 0x10},       /* "<"*/
{0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x3E, 0x00},       /* "="*/
{0x00, 0x02, 0x04, 0x08, 0x10, 0x08, 0x04, 0x02},       /* ">"*/
{0x00, 0x1C, 0x22, 0x20, 0x10, 0x08, 0x00, 0x08},       /* "?"*/
{0x00, 0x1C, 0x22, 0x3A, 0x2A, 0x3A, 0x02, 0x3C},       /* "@"*/
{0x00, 0x1C, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x22},       /* "A"*/
{0x00, 0x1E, 0x22, 0x22, 0x1E, 0x22, 0x22, 0x1E},       /* "B"*/
{0x00, 0x1C, 0x22, 0x02, 0x02, 0x02, 0x22, 0x1C},       /* "C"*/
{0x00, 0x1E, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1E},       /* "D"*/
{0x00, 0x3E, 0x02, 0x02, 0x3E, 0x02, 0x02, 0x3E},       /* "E"*/
{0x00, 0x3E, 0x02, 0x02, 0x3E, 0x02, 0x02, 0x02},       /* "F"*/
{0x00, 0x1C, 0x22, 0x02, 0x3A, 0x22, 0x22, 0x1C},       /* "G"*/
{0x00, 0x22, 0x22, 0x22, 0x3E, 0x22, 0x22, 0x22},       /* "H"*/
{0x00, 0x1C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C},       /* "I"*/
{0x00, 0x3C, 0x10, 0x10, 0x10, 0x10, 0x12, 0x0C},       /* "J"*/
{0x00, 0x22, 0x12, 0x0A, 0x06, 0x0A, 0x12, 0x22},       /* "K"*/
{0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x3E},       /* "L"*/
{0x00, 0x22, 0x36, 0x2A, 0x22, 0x22, 0x22, 0x22},       /* "M"*/
{0x00, 0x22, 0x22, 0x26, 0x2A, 0x32, 0x22, 0x22},       /* "N"*/
{0x00, 0x1C, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C},       /* "O"*/
{0x00, 0x1E, 0x22, 0x22, 0x1E, 0x02, 0x02, 0x02},       /* "P"*/
{0x00, 0x1C, 0x22, 0x22, 0x22, 0x2A, 0x12, 0x2C},       /* "Q"*/
{0x00, 0x1E, 0x22, 0x22, 0x1E, 0x0A, 0x12, 0x22},       /* "R"*/
{0x00, 0x1C, 0x22, 0x02, 0x1C, 0x20, 0x22, 0x1C},       /* "S"*/
{0x00, 0x3E, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08},       /* "T"*/
{0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x1C},       /* "U"*/
{0x00, 0x22, 0x22, 0x22, 0x22, 0x22, 0x14, 0x08},       /* "V"*/
{0x00, 0x22, 0x22, 0x22, 0x2A, 0x2A, 0x36, 0x22},       /* "W"*/
{0x00, 0x22, 0x22, 0x14, 0x08, 0x14, 0x22, 0x22},       /* "X"*/
{0x00, 0x22, 0x22, 0x14, 0x08, 0x08, 0x08, 0x08},       /* "Y"*/
{0x00, 0x3E, 0x20, 0x10, 0x08, 0x04, 0x02, 0x3E},       /* "Z"*/
{0x00, 0x1C, 0x04, 0x04, 0x04, 0x04, 0x04, 0x1C},       /* "["*/
{0x00, 0x00, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00},       /* "\"*/
{0x00, 0x1C, 0x10, 0x10, 0x10, 0x10, 0x10, 0x1C},       /* "]"*/
{0x00, 0x08, 0x14, 0x22, 0x00, 0x00, 0x00, 0x00},       /* "^"*/
{0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3E},       /* "_"*/
{0x00, 0x18, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00},       /* "`"*/
{0x00, 0x00, 0x00, 0x1C, 0x20, 0x3C, 0x22, 0x3C},       /* "a"*/
{0x00, 0x02, 0x02, 0x1E, 0x22, 0x22, 0x22, 0x1E},       /* "b"*/
{0x00, 0x00, 0x00, 0x3C, 0x02, 0x02, 0x02, 0x3C},       /* "c"*/
{0x00, 0x20, 0x20, 0x3C, 0x22, 0x22, 0x22, 0x3C},       /* "d"*/
{0x00, 0x00, 0x00, 0x1C, 0x22, 0x3E, 0x02, 0x1C},       /* "e"*/
{0x00, 0x30, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x08},       /* "f"*/
{0x00, 0x00, 0x00, 0x3C, 0x22, 0x3C, 0x20, 0x1C},       /* "g"*/
{0x00, 0x02, 0x02, 0x1A, 0x26, 0x22, 0x22, 0x22},       /* "h"*/
{0x00, 0x08, 0x00, 0x0C, 0x08, 0x08, 0x08, 0x1C},       /* "i"*/
{0x00, 0x10, 0x00, 0x18, 0x10, 0x10, 0x12, 0x0C},       /* "j"*/
{0x00, 0x02, 0x02, 0x12, 0x0A, 0x06, 0x0A, 0x12},       /* "k"*/
{0x00, 0x0C, 0x08, 0x08, 0x08, 0x08, 0x08, 0x1C},       /* "l"*/
{0x00, 0x00, 0x00, 0x16, 0x2A, 0x2A, 0x2A, 0x2A},       /* "m"*/
{0x00, 0x00, 0x00, 0x1A, 0x26, 0x22, 0x22, 0x22},       /* "n"*/
{0x00, 0x00, 0x00, 0x1C, 0x22, 0x22, 0x22, 0x1C},       /* "o"*/
{0x00, 0x00, 0x00, 0x1E, 0x22, 0x1E, 0x02, 0x02},       /* "p"*/
{0x00, 0x00, 0x00, 0x3C, 0x22, 0x3C, 0x20, 0x20},       /* "q"*/
{0x00, 0x00, 0x00, 0x1A, 0x06, 0x02, 0x02, 0x02},       /* "r"*/
{0x00, 0x00, 0x00, 0x1C, 0x02, 0x1C, 0x20, 0x1E},       /* "s"*/
{0x00, 0x08, 0x08, 0x3E, 0x08, 0x08, 0x08, 0x30},       /* "t"*/
{0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x32, 0x2C},       /* "u"*/
{0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x14, 0x08},       /* "v"*/
{0x00, 0x00, 0x00, 0x22, 0x22, 0x2A, 0x2A, 0x14},       /* "w"*/
{0x00, 0x00, 0x00, 0x22, 0x14, 0x08, 0x14, 0x22},       /* "x"*/
{0x00, 0x00, 0x00, 0x22, 0x22, 0x3C, 0x20, 0x1C},       /* "y"*/
{0x00, 0x00, 0x00, 0x3E, 0x10, 0x08, 0x04, 0x3E},       /* "z"*/
{0x00, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06, 0x06},       /* "|"*/
{0x00, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08},       /* "|"*/
{0x00, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36, 0x36},       /* "||"*/
{0x00, 0x04, 0x2A, 0x10, 0x00, 0x00, 0x00, 0x00},       /* "~"*/
{0x00, 0x00, 0x08, 0x08, 0x14, 0x14, 0x22, 0x3E}        /* ""*/
};
