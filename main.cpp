#include "gun.h"
#include "solider.h"
#include <unistd.h>

int main()
{
    Solider sanduo("xusanduo");
    sanduo.getGun("AK47");
    sanduo.addBulletToGun(10);
    while(1)
    {
            sleep(1);
            sanduo.fire();
    }
    return 0;
}