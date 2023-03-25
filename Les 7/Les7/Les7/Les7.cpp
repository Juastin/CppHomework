// Les7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
const unsigned char unit_mask = 1;
const unsigned char treasure_mask = 2;
const unsigned char mine_mask = 4;
const unsigned char road_mask = 8;
const unsigned char resource_mask = 16;
const unsigned char village_mask = 32;
const unsigned char terrain_mask = 64 + 128;

bool has_road(unsigned char field) 
{
    return field & road_mask;
}

void make_road(unsigned char* field) 
{
    *field = *field | road_mask;
}

void clear_road(unsigned char* field)
{
    *field = *field & ~road_mask;
}

bool mine_allowed(unsigned char field)
{
    return field & mine_mask;
}

int get_player(unsigned char unit) 
{
    return unit >> 4;
}
unsigned char get_terrain(unsigned char terrain) 
{
    return terrain & terrain_mask;
}

int main()
{
    //unsigned char field = 2 + 4 + 128;
    unsigned char unit = 0b11001010;
    unsigned char field = 0b0000000;
    cout << has_road(field) << endl;
    //cout << get_player(unit) << endl;
    make_road(&field);
    cout << has_road(field) << endl;

}


