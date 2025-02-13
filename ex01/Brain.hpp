#ifndef BRAIN
#define BRAIN

#include <iostream>


class Brain 
{
    private:
    std::string ideas[100];

    protected :
    std::string _type;

    public:
    Brain();
    Brain(const std::string& name);
    Brain(const Brain& copie);
    Brain& operator=(const Brain& other);
    ~Brain();

    std::string const& getType() const;

};

#endif