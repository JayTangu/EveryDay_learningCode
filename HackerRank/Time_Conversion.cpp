#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {
    int hour = stoi(s.substr(0,2));
    int min = stoi(s.substr(3,2));
    int sec = stoi(s.substr(6,2));
    string period = s.substr(8,2);
    
    if(period=="AM") {
        if(hour == 12) hour-=12;
    } else {
        if(hour != 12) hour+=12;
    }
    char buffer[9]; //the end of char is \n so it didn't the size 8
    snprintf(buffer, sizeof(buffer), "%02d:%02d:%02d",hour,min,sec); //snprintf(*ptr,n,*text)
    return buffer;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
