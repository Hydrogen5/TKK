#include "Card.h"
#include <cstdio>
#include <algorithm>
#include <cstdlib>
#include <ctime>
class Desk
{
public:
  Card *cards[110];
  Card *cardFront;
  Desk();
  ~Desk();
  void rollHeap();
};
Desk::Desk()
{
  for (int i = 0; i < 104; i++)
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
  std::pair<int, int> tmps[110];
  int seed = time(NULL);
  srand(seed);
  for (int i = 0; i < 104; i++)
  {
    tmps[i].first = rand();
    tmps[i].second = i;
  }
  std::sort(tmps, tmps + 104);
  Card *now;
  cardFront = cards[tmps[0].second];
  now = cardFront;
  for (int i = 1; i < 103; i++)
  {
    now->state = 1;
    now->fd = cards[tmps[i].second];
    cards[tmps[i].second]->bk = now;
    now = now->fd;
  }
  cards[tmps[103].second]->bk = now;
  cards[tmps[103].second]->state = 1;
}