// cd1.h
#ifndef CD1_H_
#define CD1_H_

class Cd
{
private:
    char *performers;
    char *label;
    int selections;
    double playtime;
public:
    Cd(const char * s1,const char * s2, int n, double x);
    Cd(const Cd & d);
    Cd();
    virtual ~Cd();
    void Report() const;
    Cd & operator=(const Cd & d);
};

static char * cpChar(const char * dest, const char * src, unsigned dest_size);


class Classic:public Cd
{
private:
    char *m_song;
public:
	Classic (const char * songList = "NONE", const char * s1 = "NONE", const char * s2 = "NONE", int n = 0, double x = 0.0);
	virtual void Report() const; // reports all CD data
    Classic (const Classic & c);
    virtual ~Classic();
    Classic & operator= (const Classic & c);
};
#endif