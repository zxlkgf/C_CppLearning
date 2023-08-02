#ifndef PLORG_H_
#define PLORG_H_

class Plorg
{
public:
    static const int SIZE = 20;
private:
    char funnname[SIZE];
    unsigned ci;
public:
    Plorg(const char * name = "Plorg");
    void setCi(unsigned ci);
    void show()const;
};

#endif