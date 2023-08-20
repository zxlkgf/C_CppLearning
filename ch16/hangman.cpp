// hangman.cpp -- some string methods
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>
using std::string;
const int NUM = 26;
const string wordlist[NUM] = {"apiary", "beetle", "cereal",
    "danger", "ensign", "florid", "garage", "health", "insult",
    "jackal", "keeper", "loaner", "manage", "nonce", "onset",
    "plaid", "quilt", "remote", "stolid", "train", "useful",
    "valid", "whence", "xenon", "yearn", "zippy"};

int main()
{
    using namespace std;
    srand(time(0));
    char play;
    cout << "will you play a game?<y/n>";
    cin >> play;
    play = tolower(play);
    while(play == 'y')
    {
        string target = wordlist[rand() % NUM];
        int length = target.length();
        string attempt(length, '-');        //创建被length个‘-’填充的string 
        string badchars;
        int guesses = length + 3;           //机会为每个字符长度 + 3
        cout << "Guess my secret word. It has " << length
            << " letters, and you guess\n"
            << "one letter at a time. You get " << guesses
            << " wrong guesses.\n";
        cout << "Your word: " << attempt << endl;
        while(guesses > 0 || attempt != target)
        {
            char letter;
            cout << "Guess a letter: ";
            cin >> letter;
            if (badchars.find(letter) != string::npos || attempt.find(letter)!= string::npos)
            {
                cout << "You already guessed that. Try again.\n";
                continue;
            }
            int loc = target.find(letter);
            if(string::npos == loc)
            {
                cout << "Oh, bad guess!\n";
                --guesses;
                badchars += letter;         // add to string
            }
            else
            {
                cout << "Good guess!" << endl;
                attempt[loc] = letter;
                // check if letter appears again
                loc = target.find(letter,loc + 1);
                while(string::npos != loc)
                {
                    attempt[loc] = letter;
                    loc = target.find(letter,loc+1);
                }
                --guesses;                  // 不管猜对猜错都减
            }
            cout << "your word: " << attempt << endl;
            if (attempt != target)
            {
                if(badchars.length() > 0)
                {
                    cout << "Bad choic: " << badchars << endl;
                }
                cout << guesses << " bad guess left" << endl;
            }
            else
            {
                break;          //如果猜对了就退出
            }
        }
        if(guesses > 0)
        {
            cout << "That's right!\n";
        }else
        {
            cout << "sorry, that word is " << target << ".\n";
        }
        cout << "Will you play another? <y/n> ";
        cin >> play;
        play = tolower(play);
    }
    cout << "Bye!" << endl;
    return 0; 
}