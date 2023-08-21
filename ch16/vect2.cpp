// vect2.cpp -- methods and iterators
#include <iostream>
#include <string>
#include <vector>

struct Review {
    std::string title;
    int rating;
};

bool fillReview(Review &);
void showReview(const Review &);

int main()
{
    using namespace std;
    vector<Review> books;
    Review temp;
    while(fillReview(temp))
    {
        books.push_back(temp);
    }
    int num = books.size();
    if(num)
    {
        cout << "Thank you. You entered the following:\n"
            << "Rating\tBook\n";
        for(int i = 0; i < num; i++)
        {
            showReview(books[i]);
        }
        cout << "Reprising:\n" << "Rating\t book\t" << endl;
        vector<Review>::iterator it;
        for(it = books.begin(); it != books.end();it++)
        {
            showReview(*it);
        }

        vector<Review> oldlist(books);              // copy constructor 
        if(num > 3)
        {
            //remove 2 items;
            books.erase(books.begin() + 1 , books.begin() + 3);
            cout << "After erase used:\n";
            for(it = books.begin(); it != books.end();it++)
            {
                showReview(*it);
            }

            //insert 1 item;
            books.insert(books.begin(),oldlist.begin() + 1, oldlist.begin() + 2);
            cout << "After insert:\n";
            for(it = books.begin(); it != books.end();it++)
            {
                showReview(*it);
            }
        }
        books.swap(oldlist);
        cout << "Swapping oldlist with books:\n";
        for(it = books.begin(); it != books.end();it++)
        {
            showReview(*it);
        }
    }
    else
    {
        cout << "Nothing entered.\n";
    }
    
    return 0;
}

bool fillReview(Review & r)
{
    using namespace std;
    cout << "Enter book title(quit to quit): ";
    getline(cin, r.title);
    if(r.title == "quit")
    {
        return false;
    }
    cout << "Enter book rating: ";
    cin >> r.rating;
    if(!cin)
    {
        return false;
    }
    while(cin.get()!='\n')continue;
    return true;
}
void showReview(const Review & r)
{
    using namespace std;
    cout << "rating : " << r.rating << "\t" << r.title << endl;
}