#ifndef SALESITEM_H

#define SALESITEM_H

#include <iostream>
#include <string>

class Sales_itme
{
    friend std::istream &operator>>(std::istream &, Sales_itme &);
    friend std::ostream &operator<<(std::ostream &, const Sales_itme &);
    friend bool operator<(const Sales_itme &, const Sales_itme &);
    friend bool operator==(const Sales_itme &, const Sales_itme &);

public:
    Sales_itme() = default;
    Sales_itme(const std::string &book) : bookNo(book) {}
    Sales_itme(std::istream &is) { is >> *this; }

public:
    Sales_itme &operator+=(const Sales_itme &);
    std::string isbn() const { return bookNo; }
    double avg_price() const;

private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

inline bool compareIsbn(const Sales_itme &lhs, const Sales_itme &rhs)
{
    return lhs.isbn() == rhs.isbn();
}
Sales_itme operator+(const Sales_itme &, const Sales_itme &);

inline bool operator==(const Sales_itme &lhs, const Sales_itme &rhs)
{
    return lhs.units_sold == rhs.units_sold && lhs.revenue == rhs.revenue && lhs.isbn() == rhs.isbn();
}

inline bool operator!=(const Sales_itme &lhs,const Sales_itme &rhs)
{
    return !(lhs == rhs);
}