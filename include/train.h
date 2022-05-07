// Copyright 2022 NNTU-CS
#ifndef INCLUDE_TRAIN_H_
#define INCLUDE_TRAIN_H_

class Train {
 private:
  struct Cage {
    bool light; // состояние лампочки
    Cage *next;
    Cage *prev;
  };
  int countop; // счетчик шагов (число переходов из вагона в вагон)
  Cage *first; // точка входа в поезд (первый вагон)
  Cage *last;
  Train::Cage *create(bool light);
 public:
  Train(): first(nullptr), last(nullptr), counttop(0) {}
  void addCage(bool light); // добавить вагон с начальным состоянием лампочки
  int getLength();          // вычислить длину поезда
  int getopCount();         // вернуть число переходов (из вагона в вагон)
};
#endif  // INCLUDE_TRAIN_H_
