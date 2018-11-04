#include "Card.h"
class CardList
{
    Card *cards[110];
    CardList();
};
CardList::CardList()
{
    for (int i = 0; i < 110; i++)
    {
        cards[i] = new Card;
        cards[i]->number = (i + 1) % 13;
        cards[i]->varity = ((i + 1) / 13) % 4;
    }
}