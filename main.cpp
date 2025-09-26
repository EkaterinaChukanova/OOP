#include <iostream>
#include <string>
#include <cctype>
#include <set>
using namespace std;

string trol(string str_old){
    set<int> letter = {97, 101, 105, 111, 117, 121};
    string str_new;
    for (int i=0; i < str_old.length(); i++){
        char let = tolower(str_old[i]);
        if (letter.count(static_cast<int>(tolower(str_old[i]))) == 0)
            str_new.push_back(str_old[i]);
    }
    return str_new;
}

int main() {
    string str;
    getline(cin, str);
    string result = trol(str);
    cout << result << endl;
    return 0;
}