#include <iostream>
#include "Bits.h"

using namespace std;
const unsigned char unit_mask = 1; // 0b1
const unsigned char treasure_mask = 2; // 0b10
const unsigned char mine_mask = 4; // 0b100
const unsigned char road_mask = 8; // 0b1000
const unsigned char resource_mask = 16; // 0b1 0000
const unsigned char village_mask = 32; // 0b10 0000
const unsigned char terrain_mask = 64 + 128; // 
// 1   1  1  1  1 1 1 1
// 128 64 32 16 8 4 2 1
// 128 + 64 = 0b11000000



bool has_road(unsigned char field)
{
    return field & road_mask; // Met & wordt alleen 1 wanneer ze beiden 1 zijn
                              // mask van       0100 0000 op
                              // een field van  1101 0110 laat heel duidelijk zien dat 
                              // het bitje van de mask true of niet is met &
                              // want 1 & 1 = 1; en 0 & 1 = 0;
}

void make_road(unsigned char* field)
{
    *field = *field | road_mask; // Met | wordt alleen 1 wanneer de een of ander of beide 1 is
                                 // Een mask kan bijv 0000 1000 zijn. hier is alleen het bitje op plek 8 gevuld met een 1.
                                 // Als standaard hier een 0 stond wordt hij 1 want 0 | 1 = 1.
                                 // De mask bevat voor de rest geen waardes dus 1 & 0 = 1 en 1 & 1 = 1 en 0 & 0 = 0. deze blijven dus hetzelfde. 
}

void clear_road(unsigned char* field)
{
    *field = *field & ~road_mask; // ~ betekent NOT, dus is precies de omgedraaide variant
                                  // & ~road_mask is dus precies de andere vorm van een road_mask, oftewel ipv: 0010 0000 is het 1101 1111
                                  // Een & betekent dus precies dat op de plek van road er een 0 komt, 1 & 0 = 0 dus de road wordt 0.
                                  // De andere bitjes blijven hetzelfde want 1 & 1 = 1 dus die blijven true
}

void xor_road(unsigned char* field) 
{
    *field = *field ^ road_mask; // ^ betekent XOR, dus alleen wanneer ze verschillen worden ze 1
                                 // 1 ^ 1 = 0 
                                 // 0 ^ 0 = 0
                                 // 1 ^ 0 = 1
                                 // 0 ^ 1 = 1
}


bool mine_allowed(unsigned char field)
{
    return field & mine_mask; // Deze specifieke bit krijgt & dus daardoor komt er een 0 of 1 uit. 
}

int get_player(unsigned char unit)
{
    return unit >> 4; // Shift de bitjes 4 keer, oftewel:
                      //                         0b 110 000 wordt
                      //                         0b 000 011
}

unsigned char get_terrain(unsigned char terrain)
{
    return terrain & terrain_mask;
}

//int main()
//{
//    //unsigned char field = 2 + 4 + 128;
//    unsigned char unit = 0b11001010;
//    unsigned char field = 0b0000000;
//    cout << has_road(field) << endl;
//    //cout << get_player(unit) << endl;
//    make_road(&field); // <-- niet const want je past de field aan.
//    cout << has_road(field) << endl;
//}