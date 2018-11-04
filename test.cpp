#include <cstdio>
#include "Desk.h"
int main()
{
    Desk desk;
    desk.rollHeap();
    while (1)
    {
        
        int num;
        scanf("%d", &num);
        Card *now = desk.cardFront;
        for (int i = 0; i < num; i++)
        {
            now->show();
            now = now->fd;
        }
    }
}