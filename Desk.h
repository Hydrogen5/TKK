#include "Card.h"
#include <cstdio>
class Desk
{
public:
  Card *cards[110];
  Card* cardFront;
  Desk();
  ~Desk();
  void rollHeap();
};
Desk::Desk()
{
  for (int i = 0; i < 110; i++)
  {
    cards[i] = new Card;
    cards[i]->number = (i + 1) % 13;
    cards[i]->varity = ((i + 1) / 13) % 4;
  }
};
Desk::~Desk()
{
  puts("GG");
};
void Desk::rollHeap()
{
  
}