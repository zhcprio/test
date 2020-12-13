#pragma once
#include <string>
class Gun
{
private:
    std::string gunName;
    unsigned bulletCount;

public:
    Gun(std::string _gunName) : gunName(_gunName)
    {
        bulletCount = 0;
    }
    void addBullet(int);
    bool shoot();
};