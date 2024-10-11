#include<iostream>
#include"stock00.h"

using namespace std;

int main(void)
{
    Stock stock1;
    Stock stock2;
    stock1.acquire("nano good",14,23.2);
    stock1.show();
    return 0;
}