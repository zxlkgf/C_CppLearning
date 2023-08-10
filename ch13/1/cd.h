// cd.h
#ifndef CD_H_
#define CD_H_

class Cd
{
private:
    char performers[50];
    char label[20];
    int selections;
    double playtime;
public:
    Cd(const char * s1,const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    ~Cd();
    void Report() const;
    Cd & operator=(const Cd & d);
};

static void cpChar(const char * dest, const char * src, unsigned dest_size);


class Classic:public Cd
{
private:
    static const unsigned int max_num = 64;

private:
    char m_song[max_num];
public:
	Classic (const char * songList = "NONE", const char * s1 = "NONE", const char * s2 = "NONE", int n = 0, double x = 0.0);
	virtual void Report() const; // reports all CD data
};
#endif