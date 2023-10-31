#ifndef SHOP_H
#define SHOP_H
#include<iostream>
#include<string>
using namespace std;
class Shop {
    private:
        string name;
        double totalScore;
        int voter;
    public:
        Shop () {}
        Shop (string name);
        string getName();
    void setName(string);
    double getRating();
    void vote(int score);
    void vote(int scores[], int N);
string toString();
};

#endif // SHOP_H
