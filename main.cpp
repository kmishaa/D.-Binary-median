#include <iostream>

using namespace std;

int char_to_int(const char& c) {
    return c - '0';
}

float find_mediana(const string& S) {
    int zeroes = 0;
    int ones = 0;
    for (char c : S) {
        if (c == '0') zeroes++;
        else if (c == '1') ones++;
    }
    if (zeroes > ones) return 0;
    if (ones > zeroes) return 1;
    return 0.5;
}

int main() {
    string S;
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        char R;
        cin >> R;
        S += R;
        int L = -1;
        for (int j = 1; j < i; j++) {
            if (find_mediana(S.substr(j-1, i-j+1)) == char_to_int(S[i-1])) {
                L = j;
                break;
            }
        }
        cout << L << " ";
    }

    return 0;
}

