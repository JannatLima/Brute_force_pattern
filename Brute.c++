//11.Brute Force Pattern matching Algorithm.//

#include <iostream>
#include <string>
using namespace std;

int bruceforce(string s1, string s2)
{
    int i = 0, j = 0;
    int index = -1;
    int cnt;
    //cout << s1.size() << " " << s2.size() << endl;
    while(i < s1.size() && j < s2.size()){
        //cnt++;
        if(s1[i] == s2[j]){
            i++;
            j++;
        }
        else{
            i = i - j + 1;
            j = 0;
        }
    }
    //cout << "circle count: " << cnt << endl;
    if(j == s2.size()){
        index = i - j + 1;
    }
    return index;
}
int main()
{
    string a = "Jnntlima";
    string b = "a";
    int x = bruceforce(a, b);
    cout << "locate at " << x << endl;
    return 0;
}
   