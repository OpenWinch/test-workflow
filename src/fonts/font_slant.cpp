// lib/lcdgfx/tools$ python3 ./fontgenerator.py --ttf ../../../src/fonts/SLANT.TTF -s 15 -g 32 95 -f new -d -t OpenWinch
#include <cinttypes>

// -------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------
// ----@@@@@@--------------------------------------@-----@-----@@@@---------------------------------------
// --@@@@@@@@@-------------------------------------@----@@----@@@@----------------------------------------
// -@@@@@@@@@@@-----@@@@@@----@@@@@@@---@----@@@--@@----@@---@@@@------@---@----@@@----@@@@@@----@----@@@-
// -@@@@---@@@@@---@@@@@@@@--@@@@@@@---@@@---@@@-@@@---@@@--@@@@------@@--@@@---@@@---@@@@@@----@@----@@@-
// @@@@-----@@@@--@@@@@@@@@-@@@@@@@---@@@@@--@@@-@@@--@@@@-@@@@------@@@-@@@@@--@@@--@@@@@@----@@@----@@@-
// @@@@------@@@--@@@---@@@-@@@-------@@@@@@-@@@-@@@-@@@@@@@@@-------@@@-@@@@@@-@@@-@@@@-------@@@----@@@-
// @@@-------@@@@-@@@---@@@-@@@@@@@---@@@-@@@@@@-@@@@@@@@@@@@--------@@@-@@@-@@@@@@-@@@--------@@@@@@@@@@-
// @@@@------@@@--@@@@@@@@@-@@@@@@@---@@@--@@@@@-@@@@@-@@@@@---------@@@-@@@--@@@@@-@@@--------@@@@@@@@@@-
// @@@@------@@@--@@@@@@@@@-@@@@@@@---@@@--@@@@@-@@@@--@@@@----------@@@-@@@--@@@@@-@@@--------@@@@@@@@@@-
// -@@@@---@@@@@--@@@@@@@---@@@-------@@@---@@@@-@@@---@@@-----------@@@-@@@---@@@@-@@@@-------@@@----@@@-
// -@@@@@@@@@@@---@@@-------@@@@@@@---@@@----@@@-@@----@@------------@@@-@@@----@@@--@@@@@-----@@@----@@@-
// --@@@@@@@@@----@@@-------@@@@@@@---@@@-----@@-@-----@-------------@@@-@@@-----@@--@@@@@-----@@@----@@@-
// ----@@@@@------@@@-------@@@@@@@---@@@------@---------------------@@@-@@@------@----@@@-----@@@----@@@-
// -------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------
// -------------------------------------------------------------------------------------------------------
extern const uint8_t free_SLANT23x20[];
const uint8_t free_SLANT23x20[] =
{
//  type|width|height|first char
    0x02, 0x17, 0x14, 0x00,
// GROUP first ' ' total 96 chars
//  unicode(LSB,MSB)|count
    0x00, 0x20, 0x60, // unicode record
    0x00, 0x00, 0x01, 0x00,// char ' ' (0x0020/32)
    0x00, 0x00, 0x03, 0x10,// char '!' (0x0021/33)
    0x00, 0x06, 0x04, 0x06,// char '"' (0x0022/34)
    0x00, 0x0A, 0x09, 0x0B,// char '#' (0x0023/35)
    0x00, 0x1C, 0x08, 0x0D,// char '$' (0x0024/36)
    0x00, 0x2C, 0x0F, 0x10,// char '%' (0x0025/37)
    0x00, 0x4A, 0x0E, 0x10,// char '&' (0x0026/38)
    0x00, 0x66, 0x01, 0x06,// char ''' (0x0027/39)
    0x00, 0x67, 0x03, 0x11,// char '(' (0x0028/40)
    0x00, 0x70, 0x03, 0x11,// char ')' (0x0029/41)
    0x00, 0x79, 0x04, 0x07,// char '*' (0x002A/42)
    0x00, 0x7D, 0x05, 0x0D,// char '+' (0x002B/43)
    0x00, 0x87, 0x04, 0x12,// char ',' (0x002C/44)
    0x00, 0x93, 0x05, 0x0B,// char '-' (0x002D/45)
    0x00, 0x9D, 0x03, 0x10,// char '.' (0x002E/46)
    0x00, 0xA3, 0x09, 0x10,// char '/' (0x002F/47)
    0x00, 0xB5, 0x0E, 0x10,// char '0' (0x0030/48)
    0x00, 0xD1, 0x06, 0x10,// char '1' (0x0031/49)
    0x00, 0xDD, 0x0C, 0x10,// char '2' (0x0032/50)
    0x00, 0xF5, 0x0B, 0x10,// char '3' (0x0033/51)
    0x01, 0x0B, 0x0D, 0x10,// char '4' (0x0034/52)
    0x01, 0x25, 0x0E, 0x10,// char '5' (0x0035/53)
    0x01, 0x41, 0x0A, 0x10,// char '6' (0x0036/54)
    0x01, 0x55, 0x0D, 0x10,// char '7' (0x0037/55)
    0x01, 0x6F, 0x0A, 0x10,// char '8' (0x0038/56)
    0x01, 0x83, 0x0A, 0x10,// char '9' (0x0039/57)
    0x01, 0x97, 0x03, 0x10,// char ':' (0x003A/58)
    0x01, 0x9D, 0x04, 0x12,// char ';' (0x003B/59)
    0x01, 0xA9, 0x05, 0x0F,// char '<' (0x003C/60)
    0x01, 0xB3, 0x04, 0x0D,// char '=' (0x003D/61)
    0x01, 0xBB, 0x05, 0x0F,// char '>' (0x003E/62)
    0x01, 0xC5, 0x09, 0x10,// char '?' (0x003F/63)
    0x01, 0xD7, 0x0E, 0x10,// char '@' (0x0040/64)
    0x01, 0xF3, 0x0C, 0x10,// char 'A' (0x0041/65)
    0x02, 0x0B, 0x0B, 0x10,// char 'B' (0x0042/66)
    0x02, 0x21, 0x0C, 0x10,// char 'C' (0x0043/67)
    0x02, 0x39, 0x0C, 0x10,// char 'D' (0x0044/68)
    0x02, 0x51, 0x0C, 0x10,// char 'E' (0x0045/69)
    0x02, 0x69, 0x0C, 0x10,// char 'F' (0x0046/70)
    0x02, 0x81, 0x0E, 0x10,// char 'G' (0x0047/71)
    0x02, 0x9D, 0x0C, 0x10,// char 'H' (0x0048/72)
    0x02, 0xB5, 0x04, 0x10,// char 'I' (0x0049/73)
    0x02, 0xBD, 0x05, 0x14,// char 'J' (0x004A/74)
    0x02, 0xCC, 0x0D, 0x10,// char 'K' (0x004B/75)
    0x02, 0xE6, 0x08, 0x10,// char 'L' (0x004C/76)
    0x02, 0xF6, 0x0F, 0x10,// char 'M' (0x004D/77)
    0x03, 0x14, 0x0C, 0x10,// char 'N' (0x004E/78)
    0x03, 0x2C, 0x0E, 0x10,// char 'O' (0x004F/79)
    0x03, 0x48, 0x0C, 0x10,// char 'P' (0x0050/80)
    0x03, 0x60, 0x0E, 0x10,// char 'Q' (0x0051/81)
    0x03, 0x7C, 0x0B, 0x10,// char 'R' (0x0052/82)
    0x03, 0x92, 0x0C, 0x10,// char 'S' (0x0053/83)
    0x03, 0xAA, 0x0C, 0x10,// char 'T' (0x0054/84)
    0x03, 0xC2, 0x0B, 0x10,// char 'U' (0x0055/85)
    0x03, 0xD8, 0x0D, 0x0F,// char 'V' (0x0056/86)
    0x03, 0xF2, 0x13, 0x0F,// char 'W' (0x0057/87)
    0x04, 0x18, 0x0D, 0x10,// char 'X' (0x0058/88)
    0x04, 0x32, 0x0D, 0x10,// char 'Y' (0x0059/89)
    0x04, 0x4C, 0x0D, 0x10,// char 'Z' (0x005A/90)
    0x04, 0x66, 0x04, 0x11,// char '[' (0x005B/91)
    0x04, 0x72, 0x09, 0x10,// char '\' (0x005C/92)
    0x04, 0x84, 0x04, 0x11,// char ']' (0x005D/93)
    0x04, 0x90, 0x03, 0x05,// char '^' (0x005E/94)
    0x04, 0x93, 0x14, 0x10,// char '_' (0x005F/95)
    0x04, 0xBB, 0x03, 0x03,// char '`' (0x0060/96)
    0x04, 0xBE, 0x09, 0x10,// char 'a' (0x0061/97)
    0x04, 0xD0, 0x09, 0x10,// char 'b' (0x0062/98)
    0x04, 0xE2, 0x0A, 0x10,// char 'c' (0x0063/99)
    0x04, 0xF6, 0x0A, 0x10,// char 'd' (0x0064/100)
    0x05, 0x0A, 0x09, 0x10,// char 'e' (0x0065/101)
    0x05, 0x1C, 0x09, 0x10,// char 'f' (0x0066/102)
    0x05, 0x2E, 0x0C, 0x10,// char 'g' (0x0067/103)
    0x05, 0x46, 0x0A, 0x10,// char 'h' (0x0068/104)
    0x05, 0x5A, 0x03, 0x10,// char 'i' (0x0069/105)
    0x05, 0x60, 0x04, 0x13,// char 'j' (0x006A/106)
    0x05, 0x6C, 0x0B, 0x10,// char 'k' (0x006B/107)
    0x05, 0x82, 0x07, 0x10,// char 'l' (0x006C/108)
    0x05, 0x90, 0x0C, 0x0F,// char 'm' (0x006D/109)
    0x05, 0xA8, 0x0A, 0x10,// char 'n' (0x006E/110)
    0x05, 0xBC, 0x0B, 0x10,// char 'o' (0x006F/111)
    0x05, 0xD2, 0x09, 0x10,// char 'p' (0x0070/112)
    0x05, 0xE4, 0x0B, 0x10,// char 'q' (0x0071/113)
    0x05, 0xFA, 0x09, 0x10,// char 'r' (0x0072/114)
    0x06, 0x0C, 0x0A, 0x10,// char 's' (0x0073/115)
    0x06, 0x20, 0x09, 0x10,// char 't' (0x0074/116)
    0x06, 0x32, 0x08, 0x10,// char 'u' (0x0075/117)
    0x06, 0x42, 0x0B, 0x0F,// char 'v' (0x0076/118)
    0x06, 0x58, 0x0F, 0x10,// char 'w' (0x0077/119)
    0x06, 0x76, 0x0B, 0x10,// char 'x' (0x0078/120)
    0x06, 0x8C, 0x0B, 0x10,// char 'y' (0x0079/121)
    0x06, 0xA2, 0x0B, 0x10,// char 'z' (0x007A/122)
    0x06, 0xB8, 0x0E, 0x10,// char '{' (0x007B/123)
    0x06, 0xD4, 0x01, 0x14,// char '|' (0x007C/124)
    0x06, 0xD7, 0x0E, 0x10,// char '}' (0x007D/125)
    0x06, 0xF3, 0x0E, 0x10,// char '~' (0x007E/126)
    0x07, 0x0F, 0x0E, 0x10,// char '' (0x007F/127)
    0x07, 0x2B,
    // char ' ' (0x0020/32)
    0xE0, 0xF0, 0xF8, 0xE7, 0xE7, 0xE7, // char '!' (0x0021/33)
    0x38, 0x00, 0x38, 0x00, // char '"' (0x0022/34)
    0xC0, 0xC0, 0xC0, 0xF8, 0xC0, 0xC0, 0xF0, 0xC0, 0xC0, 0x00, 0x02, 0x01, 0x00, 0x04, 0x03, 0x00, 0x00, 0x00, // char '#' (0x0023/35)
    0x60, 0xF0, 0xF8, 0xF8, 0xF8, 0xB8, 0x18, 0x08, 0x07, 0x07, 0x07, 0x1F, 0x07, 0x03, 0x00, 0x00, // char '$' (0x0024/36)
    0x00, 0xF0, 0x98, 0x08, 0x08, 0x08, 0xD0, 0x60, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0x00, 0x00, 0x80, 0x41, 0x21, 0x11, 0x09, 0x04, 0x02, 0x39, 0x44, 0x82, 0x82, 0x82, 0x6C, 0x38, // char '%' (0x0025/37)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '&' (0x0026/38)
    0x38, // char ''' (0x0027/39)
    0xF8, 0xFC, 0x04, 0xFF, 0xFF, 0x00, 0x00, 0x01, 0x00, // char '(' (0x0028/40)
    0x0C, 0xFC, 0xF0, 0x80, 0xFF, 0x7F, 0x01, 0x01, 0x00, // char ')' (0x0029/41)
    0x40, 0x38, 0x20, 0x40, // char '*' (0x002A/42)
    0x00, 0x00, 0x80, 0x80, 0x00, 0x06, 0x06, 0x1F, 0x1F, 0x06, // char '+' (0x002B/43)
    0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0x02, 0x03, 0x01, 0x00, // char ',' (0x002C/44)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x06, 0x06, 0x06, 0x06, // char '-' (0x002D/45)
    0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, // char '.' (0x002E/46)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x30, 0x08, 0x00, 0xC0, 0x30, 0x1C, 0x06, 0x01, 0x00, 0x00, 0x00, // char '/' (0x002F/47)
    0x80, 0xE0, 0xF0, 0xF0, 0x78, 0x38, 0x38, 0x38, 0x78, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x0F, 0x3F, 0x7F, 0x7D, 0xF0, 0xE0, 0xE0, 0xE0, 0xF0, 0x70, 0x7F, 0x3F, 0x1F, 0x02, // char '0' (0x0030/48)
    0x40, 0x60, 0xF0, 0xF8, 0xF8, 0xF8, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, // char '1' (0x0031/49)
    0x00, 0x00, 0x20, 0x30, 0x38, 0x38, 0x38, 0xF8, 0xF8, 0xF8, 0xF0, 0xC0, 0x80, 0xC0, 0xC0, 0xE0, 0xF0, 0xF8, 0xFE, 0xFF, 0xEF, 0xE7, 0xE3, 0x00, // char '2' (0x0032/50)
    0x00, 0x20, 0x30, 0x38, 0xB8, 0xF8, 0xF8, 0x38, 0x18, 0x08, 0x00, 0xE0, 0xE0, 0xE0, 0xE3, 0xE3, 0xE3, 0xFF, 0x7F, 0x3E, 0x00, 0x00, // char '3' (0x0033/51)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0x78, 0x38, 0x18, 0x08, 0x00, 0x10, 0x18, 0x1C, 0x1E, 0x1F, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, // char '4' (0x0034/52)
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xB0, 0xB8, 0xB8, 0x38, 0x38, 0x18, 0x08, 0x00, 0x00, 0x80, 0xC2, 0xE3, 0xE3, 0xE3, 0xE3, 0xE3, 0xFF, 0x7F, 0x3E, 0x00, 0x00, 0x00, // char '5' (0x0035/53)
    0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xB8, 0x98, 0x08, 0x0C, 0x3F, 0x7F, 0xF3, 0xE1, 0xE1, 0xE3, 0xFF, 0x7F, 0x3F, // char '6' (0x0036/54)
    0x00, 0x20, 0x30, 0x38, 0x38, 0xB8, 0xF8, 0xF8, 0xF8, 0x78, 0x38, 0x18, 0x08, 0x00, 0x00, 0xFC, 0xFE, 0xFF, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // char '7' (0x0037/55)
    0x00, 0x00, 0xF0, 0xF0, 0xB8, 0xB8, 0xB8, 0xF0, 0xE0, 0x00, 0x0C, 0x3F, 0x7F, 0xF3, 0xE1, 0xE1, 0xE3, 0x7F, 0x7F, 0x3F, // char '8' (0x0038/56)
    0xE0, 0xF0, 0xF8, 0x38, 0x38, 0x38, 0xF8, 0xF0, 0xE0, 0x00, 0x87, 0xCF, 0xEF, 0xFC, 0x7C, 0x3C, 0x1F, 0x0F, 0x07, 0x00, // char '9' (0x0039/57)
    0x80, 0x80, 0x80, 0xE3, 0xE3, 0xE3, // char ':' (0x003A/58)
    0x00, 0x80, 0x80, 0x80, 0x00, 0xE3, 0xE3, 0xE3, 0x02, 0x03, 0x01, 0x00, // char ';' (0x003B/59)
    0x00, 0x00, 0x00, 0x80, 0x00, 0x08, 0x14, 0x22, 0x41, 0x00, // char '<' (0x003C/60)
    0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x11, // char '=' (0x003D/61)
    0x00, 0x80, 0x00, 0x00, 0x00, 0x40, 0x20, 0x13, 0x0C, 0x00, // char '>' (0x003E/62)
    0x20, 0x30, 0x38, 0x38, 0x38, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0xEE, 0xEE, 0xEE, 0x0E, 0x0F, 0x07, 0x07, 0x01, // char '?' (0x003F/63)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '@' (0x0040/64)
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0x3C, 0x1E, 0x3F, 0x3F, 0x3F, 0x3B, 0x39, 0xFF, 0xFF, 0xFF, 0xFF, // char 'A' (0x0041/65)
    0xC0, 0xE0, 0xF0, 0x38, 0x38, 0x38, 0x38, 0x38, 0xF8, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0xE7, 0xE7, 0xE7, 0xE7, 0xFF, 0x7F, 0x3F, // char 'B' (0x0042/66)
    0x80, 0xE0, 0xE0, 0xF0, 0x78, 0x38, 0x38, 0x38, 0x38, 0x18, 0x08, 0x00, 0x0F, 0x3F, 0x7F, 0x7D, 0xF0, 0xE0, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, // char 'C' (0x0043/67)
    0xC0, 0xE0, 0xF0, 0xF8, 0x38, 0x38, 0x38, 0x78, 0xF0, 0xF0, 0xE0, 0x80, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xF0, 0x78, 0x7F, 0x3F, 0x1F, // char 'D' (0x0044/68)
    0xC0, 0xE0, 0xF0, 0xF8, 0x38, 0x38, 0x38, 0x38, 0x38, 0x18, 0x08, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE7, 0xE7, 0xE7, 0xE7, 0x00, 0x00, 0x00, 0x00, // char 'E' (0x0045/69)
    0xC0, 0xE0, 0xF0, 0xF8, 0x38, 0x38, 0x38, 0x38, 0x38, 0x18, 0x08, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, // char 'F' (0x0046/70)
    0x80, 0xE0, 0xE0, 0xF0, 0x78, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x18, 0x08, 0x0F, 0x3F, 0x7F, 0x7D, 0xF0, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, // char 'G' (0x0047/71)
    0xC0, 0xE0, 0xF0, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, // char 'H' (0x0048/72)
    0xC0, 0xE0, 0xF0, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, // char 'I' (0x0049/73)
    0x00, 0xC0, 0xE0, 0xF0, 0xF8, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x0E, 0x0F, 0x0F, 0x07, 0x03, // char 'J' (0x004A/74)
    0xC0, 0xE0, 0xF0, 0xF8, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x78, 0x38, 0x18, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x0F, 0x1F, 0x3C, 0xF8, 0x00, 0x00, 0x00, // char 'K' (0x004B/75)
    0xC0, 0xE0, 0xF0, 0xF8, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0, // char 'L' (0x004C/76)
    0x00, 0x00, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0xF8, 0x7C, 0x3E, 0x1F, 0x0F, 0x47, 0x3F, 0x3F, 0x1F, 0x0F, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, // char 'M' (0x004D/77)
    0xC0, 0xE0, 0xF0, 0xF8, 0xF0, 0xE0, 0xC0, 0x80, 0xF8, 0xF8, 0xF8, 0xF8, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, // char 'N' (0x004E/78)
    0x80, 0xE0, 0xF0, 0xF0, 0x78, 0x38, 0x38, 0x38, 0x78, 0xF8, 0xF0, 0xE0, 0xC0, 0x00, 0x0F, 0x3F, 0x7F, 0x7D, 0xF0, 0xE0, 0xE0, 0xE0, 0xF0, 0x70, 0x7F, 0x3F, 0x1F, 0x02, // char 'O' (0x004F/79)
    0xC0, 0xE0, 0xF0, 0x38, 0x38, 0x38, 0x38, 0x78, 0xF8, 0xF8, 0xF0, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x1C, 0x1C, 0x1C, 0x1E, 0x1F, 0x0F, 0x07, 0x03, // char 'P' (0x0050/80)
    0x80, 0xE0, 0xF0, 0xF0, 0x78, 0x38, 0x38, 0x38, 0x38, 0x78, 0xF0, 0xE0, 0xC0, 0x00, 0x0F, 0x3F, 0x7F, 0x7D, 0xF0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE8, 0xEF, 0x6F, 0x2F, 0x00, // char 'Q' (0x0051/81)
    0xC0, 0xE0, 0xF0, 0x38, 0x38, 0x38, 0x38, 0xB8, 0xF8, 0xF8, 0xF0, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x07, 0x07, 0x0F, 0x1F, 0x7D, // char 'R' (0x0052/82)
    0xE0, 0xF0, 0xF8, 0xF8, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x18, 0x08, 0xE0, 0xE3, 0xE7, 0xE7, 0xE7, 0xF7, 0xFF, 0x7E, 0x3C, 0x00, 0x00, 0x00, // char 'S' (0x0053/83)
    0x20, 0x20, 0x30, 0xF8, 0xF8, 0xF8, 0xF8, 0x38, 0x38, 0x18, 0x08, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, // char 'T' (0x0054/84)
    0xC0, 0xE0, 0xF0, 0xF8, 0x00, 0x00, 0x00, 0xF8, 0xF8, 0xF8, 0xF8, 0x1F, 0x7F, 0x7F, 0xFF, 0xE0, 0xE0, 0xE0, 0xFF, 0x7F, 0x3F, 0x0F, // char 'U' (0x0055/85)
    0xC0, 0xE0, 0xF0, 0xF8, 0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x38, 0x18, 0x18, 0x08, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char 'V' (0x0056/86)
    0xC0, 0xE0, 0xF8, 0x00, 0x00, 0x80, 0xC0, 0xF0, 0xF8, 0x00, 0x80, 0xC0, 0xE0, 0xF0, 0x78, 0x38, 0x18, 0x08, 0x00, 0x7F, 0x3F, 0x1F, 0x0E, 0x07, 0x03, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // char 'W' (0x0057/87)
    0x40, 0xE0, 0xF0, 0xF8, 0xF0, 0xE0, 0xE0, 0xF0, 0x78, 0x38, 0x38, 0x18, 0x08, 0x7C, 0x3C, 0x1F, 0x0F, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFE, 0x00, 0x00, 0x00, // char 'X' (0x0058/88)
    0xC0, 0xE0, 0xF0, 0xF8, 0x80, 0xC0, 0xE0, 0xF0, 0xF8, 0x78, 0x38, 0x18, 0x08, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // char 'Y' (0x0059/89)
    0x00, 0x20, 0x30, 0x38, 0xB8, 0xF8, 0xF8, 0xF8, 0xF8, 0x78, 0x38, 0x18, 0x08, 0xF8, 0xFC, 0xFE, 0xFF, 0xEF, 0xE7, 0xE3, 0xE1, 0xE0, 0xE0, 0xE0, 0x00, 0x00, // char 'Z' (0x005A/90)
    0xFE, 0xFE, 0xFE, 0x02, 0xFF, 0xFF, 0xFF, 0x00, 0x01, 0x01, 0x01, 0x01, // char '[' (0x005B/91)
    0x08, 0x30, 0xC0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0x18, 0x30, 0xC0, 0x00, // char '\' (0x005C/92)
    0x02, 0xFE, 0xFE, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0x01, 0x01, 0x01, 0x01, // char ']' (0x005D/93)
    0x10, 0x08, 0x00, // char '^' (0x005E/94)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x00, // char '_' (0x005F/95)
    0x03, 0x06, 0x00, // char '`' (0x0060/96)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0xE0, 0xE0, 0x70, 0x38, 0x5C, 0x6E, 0x77, 0x73, 0x71, 0xFF, 0xFF, // char 'a' (0x0061/97)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0xEE, 0xEE, 0xEE, 0xFF, 0x7F, 0x3F, // char 'b' (0x0062/98)
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x1F, 0x7F, 0x7F, 0xF1, 0xE0, 0xE0, 0x00, 0x00, 0x00, 0x00, // char 'c' (0x0063/99)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xC0, 0x80, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xF1, 0x7F, 0x3F, 0x0E, // char 'd' (0x0064/100)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0xFF, 0xFF, 0xFF, 0xEE, 0xEE, 0xEE, 0xEE, 0x00, 0x00, // char 'e' (0x0065/101)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x0E, 0x00, 0x00, // char 'f' (0x0066/102)
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x1F, 0x7F, 0x7F, 0xF1, 0xE0, 0xE0, 0xFE, 0xFE, 0xFE, 0x00, 0x00, 0x00, // char 'g' (0x0067/103)
    0x80, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x0E, 0x0E, 0x0E, 0x0E, 0xFF, 0xFF, 0xFF, // char 'h' (0x0068/104)
    0x80, 0xC0, 0xE0, 0xFF, 0xFF, 0xFF, // char 'i' (0x0069/105)
    0x00, 0x80, 0xC0, 0xE0, 0x00, 0xFF, 0xFF, 0xFF, 0x07, 0x07, 0x07, 0x03, // char 'j' (0x006A/106)
    0x80, 0xC0, 0xE0, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0xFF, 0xFF, 0xFF, 0x1F, 0x1F, 0x3F, 0x7D, 0xF8, 0x00, 0x00, 0x00, // char 'k' (0x006B/107)
    0x80, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xE0, 0xE0, 0xE0, 0xE0, // char 'l' (0x006C/108)
    0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x80, 0x70, 0x38, 0x1C, 0x0E, 0x7F, 0x3F, 0x3F, 0x1C, 0x0E, 0x7F, 0x7F, 0x7F, // char 'm' (0x006D/109)
    0x80, 0xC0, 0xE0, 0xC0, 0x80, 0x00, 0x00, 0xE0, 0xE0, 0xE0, 0xFF, 0xFF, 0xFF, 0x01, 0x03, 0x0F, 0x1E, 0x3F, 0x7F, 0xFF, // char 'n' (0x006E/110)
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0xF1, 0xE0, 0xE0, 0xE0, 0xF1, 0x7F, 0x3F, 0x0F, // char 'o' (0x006F/111)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0x1C, 0x1C, 0x1C, 0x1F, 0x0F, 0x0F, // char 'p' (0x0070/112)
    0x00, 0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0x80, 0x00, 0x1F, 0x3F, 0x7F, 0xF1, 0xE0, 0xE0, 0xE0, 0xF1, 0xFF, 0x3F, 0x1E, // char 'q' (0x0071/113)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xC0, 0xFF, 0xFF, 0xFF, 0x00, 0x04, 0x0C, 0x1F, 0x3F, 0x73, // char 'r' (0x0072/114)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0xE3, 0xE7, 0xEF, 0xEE, 0xFE, 0xFE, 0x7C, 0x00, 0x00, 0x00, // char 's' (0x0073/115)
    0x80, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, // char 't' (0x0074/116)
    0x80, 0xC0, 0xE0, 0x00, 0x00, 0x00, 0xE0, 0xE0, 0x3F, 0x7F, 0xFF, 0xE0, 0xE0, 0xF0, 0x7F, 0x3F, // char 'u' (0x0075/117)
    0x80, 0xC0, 0xE0, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x60, 0x20, 0x00, 0x7F, 0x3F, 0x1F, 0x0E, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, // char 'v' (0x0076/118)
    0x80, 0xC0, 0xE0, 0x00, 0x00, 0x80, 0xE0, 0x00, 0x00, 0x80, 0xC0, 0xE0, 0x60, 0x20, 0x20, 0xFF, 0x7F, 0x3F, 0x1E, 0x47, 0x3F, 0x1F, 0x0C, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, // char 'w' (0x0077/119)
    0x80, 0xC0, 0xE0, 0xC0, 0x80, 0xC0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0x78, 0x3D, 0x1F, 0x0F, 0x0F, 0x1F, 0x7F, 0xFC, 0x00, 0x00, 0x00, // char 'x' (0x0078/120)
    0x80, 0xC0, 0xE0, 0x00, 0x80, 0xC0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0xFF, 0xFF, 0xFF, 0x0F, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, // char 'y' (0x0079/121)
    0x00, 0xC0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0x60, 0x20, 0x00, 0xF0, 0xF8, 0xFC, 0xEE, 0xE7, 0xE3, 0xE1, 0xE0, 0xE0, 0x00, 0x00, // char 'z' (0x007A/122)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '{' (0x007B/123)
    0xFF, 0xFF, 0x0F, // char '|' (0x007C/124)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '}' (0x007D/125)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '~' (0x007E/126)
    0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0xFF, 0xFF, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xFF, // char '' (0x007F/127)
    0x00, 0x00, 0x00, // end of unicode tables
    // FONT REQUIRES 2231 BYTES
};
