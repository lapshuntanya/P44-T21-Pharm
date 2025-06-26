//
// Created by Lapshun Tetiana on 26.06.2025.
//

#ifndef P44_T21_PHARM_PHARM_H
#define P44_T21_PHARM_PHARM_H
#include "Array_Template.h"
#include "Medicine.h"

class Pharm {
    char* m_name;

    int m_size_medicines;
    Medicine* m_arr;

public:
    Pharm();
    Pharm(const char* name);
    ~Pharm();

    void showInfo()const;
};


#endif //P44_T21_PHARM_PHARM_H
