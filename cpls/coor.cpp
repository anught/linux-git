#include "coor.h"

coor::coor(int x, int y)
{
   this->x = x;
   this->y = y; 
}

coor::~coor()
{
    cout<<"delete"<<endl;
}
void coor::display()
{
    cout<<x<<", "<<y<<endl;
}
