//
// Created by Lapshun Tetiana on 26.06.2025.
//

#include "Medicine.h"

Medicine::Medicine() {
    m_title = new char[10] {"Undefined"};
    m_type = new char[10] {"Undefined"};
    m_price = 0;
}

Medicine::Medicine(const char *title, const char *type, float price) {
    int size_title = strlen(title) + 1;
    m_title = new char[size_title];
    //strcpy_s(m_title, size_title, title);
    strcpy(m_title, title);

    int size_type = strlen(type) + 1;
    m_type = new char[size_type];
    //strcpy_s(m_type, size_type, type);
    strcpy(m_type, type);

    m_price = price;
}

Medicine::~Medicine() {
    delete[] m_title;
    delete[] m_type;
}

void Medicine::setTitle(const char *title) {

}

void Medicine::setType(const char *type) {

}

void Medicine::setPrice(float price) {

}

const char *Medicine::getTitle() const {
    return nullptr;
}

const char *Medicine::getType() const {
    return nullptr;
}

float Medicine::getPrice() const {
    return 0;
}

void Medicine::showInfo() const {

}
