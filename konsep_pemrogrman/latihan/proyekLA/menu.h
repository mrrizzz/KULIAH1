// menu.h
#ifndef MENU_H
#define MENU_H

#include "variable.h"
#include "display.h"
void displayMenu(struct menu *jenis, int size, int total, struct nota *nota, int batasAwal, int batasAkhir);
void pesanMakanan();
void pesanMinuman();

#endif // MENU_H
