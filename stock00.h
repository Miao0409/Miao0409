#ifndef __STOCK00_H__
#define __STOCK00_H__
#include<string>
class Stock
{
    private:
        std::string company;
        long shares;
        double share_value;
        double total_value;
        void set_total_value(){total_value = shares *share_value;}
    public:
        void acquire(const std::string &co,long n,double price);//acquire属于Stock类
        void buy(long num,double price);
        void sale(long num,double price);
        void update(double price);
        void show(void);
};
#endif