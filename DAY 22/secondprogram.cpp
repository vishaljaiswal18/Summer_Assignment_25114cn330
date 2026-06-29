#include <iostream>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    int words = 0;

    for(int i = 0; i < str.length(); i++) {
        if(i == 0 && str[i] != ' ')
            words++;
        else if(str[i] != ' ' && str[i - 1] == ' ')
            words++;
    }

    cout << "Number of Words = " << words;

    return 0;
}