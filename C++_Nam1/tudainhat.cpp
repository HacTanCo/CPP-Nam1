#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') && (s[i] >= 'A' && s[i] <= 'Z') && (s[i] >= '0' && s[i] <= '9'))
        {
            s[i] = ' ';
        }
    }

    int tdn = 0;
    int dem = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' ')
        {
            dem++;
        }
        else if(s[i] == ' ')
        {
            tdn = max(tdn, dem);
            dem = 0;
        }
    }

    tdn = max(tdn, dem);

    cout << tdn;

    return 0;
}

