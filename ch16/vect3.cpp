// vect3.cpp -- using STL functions
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Review{
    std::string title;
    int rating;
};

bool operator<(const Review & r1, const Review r2);
bool worseThan(const Review & r1, const Review r2);
bool fillReview(Review & r);
void showReview(const Review & r);

int main()
{
    using namespace std;
    vector<Review> books;
    Review temp;
    while(fillReview(temp))
    {
        books.push_back(temp);
    }
    if(books.size())
    {
        cout << "Tank you. You entered the following " << books.size() << " rating:\n" << "Rating\tBook\n";
        for_each(books.begin(),books.end(),showReview);

        sort(books.begin(),books.end());
        cout << "Sorted by title:\nRating\tbook\n";
        for_each(books.begin(),books.end(),showReview);

        sort(books.begin(),books.end(),worseThan);
        cout << "Sorted by rating:\nRating\tbook\n";
        for_each(books.begin(),books.end(),showReview);

        random_shuffle(books.begin(),books.end());
        cout << "After shuffling:\nRating\tbook\n";
        for_each(books.begin(),books.end(),showReview);
    }
    else
    {
        cout << "Nothing entered.\n";
    }
    return 0;
}


bool operator<(const Review & r1, const Review r2)
{
    if(r1.title < r2.title)
    {
        return true;
    }
    else if(r1.title == r2.title && r1.rating < r2.rating)
    {
        return true;
    }
    return false;
}
bool worseThan(const Review & r1, const Review r2)
{
    if(r1.rating < r2.rating)
    {
        return true;
    }
    return false;
}
bool fillReview(Review & r)
{
    using namespace std;
    cout << "Enter book title<quit to quie>: ";
    getline(cin,r.title);
    cout << "Enter book rating: "; 
    if(r.title == "quit")return false;
    cin >> r.rating;
    if(!cin)
    {
        return false;
    }
    while(cin.get()!='\n')
        continue;

    return true;
}
void showReview(const Review & r)
{
    using namespace std;
    cout << r.rating << "\t" << r.title << endl;
}