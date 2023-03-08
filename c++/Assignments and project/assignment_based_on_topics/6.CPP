/*

*/
#include<iostream>
using namespace std;

#define G 0
#define PG 1
#define PG-13 2
#define R 3
class Movie{
    string name;
    int WatchCount;
    short rating;
    public:
    void setName()
    {
        cin>>name;
    }
    void setRating()
    {
        cin>>rating;
    }
    void setCount(int count)
    {
        this->WatchCount=count;
    }
    void increaseCount()
    {
        WatchCount++;
    }
    void disp(){
        cout<<name;
    }

};
class Movies: public Movie
{

};
int main()
{
    Movies m;
    m.setCount(0);
    m.increaseCount();

    return 0;
}