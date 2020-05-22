#include "Header.h"


int main()
{
    const int len = 30, strings = 10;
    const char ch = '\n';
    char mass1[len][strings];
    char mass2[len][strings];
    char mass3[len][strings];
    ofstream fout;
    fout.open("out.txt");

    ifstream fs1("in1.txt", ios::in | ios::binary);
    ifstream fs2("in2.txt", ios::in | ios::binary);
    ifstream fs3("in3.txt", ios::in | ios::binary);
    try {
        if (!fs1)  throw "Uh oh, in1.txt could not be opened for reading!";
        if (!fs2)  throw "Uh oh, in2.txt could not be opened for reading!";
        if (!fs3)  throw "Uh oh, in3.txt could not be opened for reading!";
        if (!fout)  throw "Uh oh, out.txt could not be opened for reading!";
        for (int r = 0; r < strings; r++)
        {
            fs1.getline(mass1[r], len - 1, ch);
            fs2.getline(mass2[r], len - 1, ch);
            fs3.getline(mass3[r], len - 1, ch);
        }

        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 3; j++) {
                for (int k = j; k < 3; k++) {
                    if (CharArrComaparer(3, mass1[i], mass2[k], mass3[j])) {
                        fout << mass1[i];
                    }
                }
            }
        }
        fs1.close();
        fs2.close();
        fs3.close();
    }

    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << '\n';
    }

    
    return 0;
}