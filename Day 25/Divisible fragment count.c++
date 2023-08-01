#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'DivisibleFragmentsCount' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER num as parameter.
 */
#include <iostream>
#include <string>
using namespace std;


int DivisibleFragmentsCount(int num) {
    string numStr = to_string(num);
    int count = 0;

    for (int i = 0; i < numStr.length(); ++i) {
        int sumOdd = 0;
        int sumEven = 0;

        // Ignore leading zeros
        if (numStr[i] == '0')
            continue;

        for (int j = i; j < numStr.length(); ++j) {
            // Calculate the sum of digits at odd and even positions
            if ((j - i) % 2 == 0)
                sumEven += numStr[j] - '0';
            else
                sumOdd += numStr[j] - '0';

            // Check if the difference is divisible by 11
            if ((sumOdd - sumEven) % 11 == 0)
                ++count;
        }
    }

    return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string num_temp;
    getline(cin, num_temp);

    int num = stoi(ltrim(rtrim(num_temp)));

    int result = DivisibleFragmentsCount(num);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}