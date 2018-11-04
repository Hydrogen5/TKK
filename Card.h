/*
This is a class of card.
When a card is in the bin,they will be connected by each other by the 
pointer.In unsorted-bin,we will have a root pointer to the top of the
Unused-bin.In waster-bin,the same.When it is in someone's hand,the bk
pointer will point to its owner,while the fd pointer points to its owner's
next card,if it is the last card,the fd pointer will point to NULL.When 
it is in the equipment-position,the same.
*/
#include <cstdio>
#define inUnusedBin 1
#define inHand 2
#define inJudgement 3
#define inEquipment 4
#define inWasteBin 5
#define inUsing 0
class Card
{
  public:
    int number;
    int varity;
    Card* fd;
    Card* bk;
    short state;
    // int kind;
    Card();
    void show();
};
Card::Card()
{
  fd=0;
  bk=0;
}
void Card::show()
{
  switch (varity)
  {
    case 1:
      printf("hongtao");
      break;
    case 2:
      printf("heitao");
      break;
      case 3:
      printf("fangkuai");
      break;
    default:
      printf("hongxing");
      break;
  }
  printf("%d\n",number);
}