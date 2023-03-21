#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'taumBday' function below.
 *
 * The function is expected to return a LONG_INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER b
 *  2. INTEGER w
 *  3. INTEGER bc
 *  4. INTEGER wc
 *  5. INTEGER z
 */

long taumBday(int b, int w, int bc, int wc, int z)
{
    return b * long(std::min(bc, wc+z))  +  w * long(std::min(wc, bc+z));
}


long taumBday1(int b, int w, int bc, int wc, int z)
{
    long bc1 = bc < wc+z ? bc : wc+z;
    long wc1 = wc < bc+z ? wc : bc+z;

    return (b*bc1) + (w*wc1);
}
