#include<iostream>
#include"stock00.h"

void Stock::acquire(const std::string &co,long n,double price)//acquire属于Stock类
{
    company =co;
    if (n<0)
    {
        std::cout<<"股票的数目不能是负的;"<<company<<" 数量设置为0"<<std::endl;
        shares = 0;
        /* code */
    }
    else
        shares = n;

    share_value = price;
    set_total_value();
}
void Stock::buy(long num,double price)
{
    if (num<0)
    {
        std::cout<<"股票的数目不能是负的,交易失败"<<std::endl;
        
    }
    else
    {
        shares+=num;
        share_value=price;
        set_total_value();
    }

}
void Stock::sale(long num,double price)
{
    if (num<0)
    {
        std::cout<<"卖出股票的数目不能是负的,交易失败"<<std::endl;
        
    }
    else if (num>shares)
    {
        std::cout<<"卖出股票数目不能超出持有量"<<std::endl;
    }
    else
    {
        shares-=num;
        share_value =price;
        set_total_value();
    }
}
void Stock::update(double price)
{
    share_value = price;
    set_total_value();
}
void Stock::show(void)
{
    using std::cout;
    using std::endl;
    cout<<"Company: "<<company<<endl;
    cout<<"Shares: "<<shares<<endl;
    cout<<"Share price: "<<share_value<<endl;
    cout<<"total value: "<<total_value<<endl; 
}
