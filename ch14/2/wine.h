#ifndef WINE_H_
#define WINE_H_
#include <string>
#include <valarray>

namespace m_wine
{
    using std::string;
    using std::valarray;
    using std::pair;

    typedef valarray<unsigned> ArrayInt;

    class Wine : private string, 
    private valarray<unsigned>,
    private pair<ArrayInt,ArrayInt>
    {
    private:
        unsigned years_total_;
    public:
        Wine(const string & n, unsigned years_total, unsigned vintage_year[], unsigned bottles_total_[]);
        Wine(const string & n, unsigned years_total);
        const string & getLabel(void)const;
        void getBottles(void);
        void show(void)const;
        unsigned sum(void) const;
    };
}

#endif