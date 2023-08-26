// usealgo.cpp -- using several STL elements
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>
#include <iterator>
#include <algorithm>
#include <cctype>
using namespace std;

char toLower(char ch) {return tolower(ch);}
string & ToLower(string & st);
void display(const string & st);

int main()
{
    vector<string> words;
    cout << "Enter words (enter quit to quit):\n";
    string input;
    while(cin >> input && input != "quit")
    {
        words.push_back(input);
    }

    cout << "You entered the following words:\n";
    for_each(words.begin(),words.end(),display);
    cout << endl;

    // place words in set, converting to lowercase
    set<string> wordset;
    transform(words.begin(), words.end(),insert_iterator<set<string> > (wordset, wordset.begin()),ToLower);
    cout << "\nAlphabetic list of words:\n";
    for_each(wordset.begin(), wordset.end(), display);
    cout << endl;

    // place word and frequency in map
    map<string,int> wordmap;
    vector<string>::iterator it;
    for(it = words.begin();it !=words.end(); it++)
    {
        map<string,int>::iterator f;
        f = wordmap.find(*it);
        if(f != wordmap.end())
        {
            ++((*f).second);
        }else
        {
            wordmap.insert(map<string,int>::value_type(*it,1));
        }
    }
    map<string,int>::iterator mit;
    for(mit = wordmap.begin();mit != wordmap.end();mit++)
    {
        cout << "word: " << mit->first << ", cnt: " << mit->second << endl;
    }

    return 0;
}

string & ToLower(string & st)
{
    transform(st.begin(),st.end(),st.begin(),toLower);
    return st;
}
void display(const string & st)
{
    cout << st << ' ';
}