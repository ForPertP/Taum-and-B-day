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

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string first_multiple_input_temp;
        getline(cin, first_multiple_input_temp);

        vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

        int b = stoi(first_multiple_input[0]);

        int w = stoi(first_multiple_input[1]);

        string second_multiple_input_temp;
        getline(cin, second_multiple_input_temp);

        vector<string> second_multiple_input = split(rtrim(second_multiple_input_temp));

        int bc = stoi(second_multiple_input[0]);

        int wc = stoi(second_multiple_input[1]);

        int z = stoi(second_multiple_input[2]);

        long result = taumBday(b, w, bc, wc, z);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
