#pragma once
#include <iostream>
#include <fstream>

using namespace std;

bool CharArrComaparer(int len, char a[], char b[], char c[])
{
    if (strcmp(a, b) == 0)
    {
        if (strcmp(b, c) == 0) return true;
    }

    return false;
}