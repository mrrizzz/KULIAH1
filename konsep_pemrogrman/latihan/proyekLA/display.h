// display.h
#ifndef DISPLAY_H
#define DISPLAY_H

void clearScreen();
void printGaris();
void printGarisDouble();
void displayNota();
void displayMenu(struct menu *jenis, int size, int total, struct nota *nota, int batasAwal, int batasAkhir);
void keluar();

#endif // DISPLAY_H
