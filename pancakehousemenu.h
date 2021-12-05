#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include <list>
#include "menu.h"
#include "menuItem"
#include "pancakemenuiterator.h"

class PancakeHouseMenu : public Menu {
private:
	list<MenuItem*> menuItems;
public:
    PancakeHouseItem(string name, string description);
    void addItem(string n, string d, bool v, double p);
    list<menuItem*> getMenuItems();
    Iterator* creatorIterator();
    string toString();
};

#endif // PANCAKEHOUSEMENU_H
