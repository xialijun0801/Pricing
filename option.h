#ifndef OPTION_H
#define OPTION_H

#include <security.h>

namespace security
{
class Option: public Security
{
public:
enum OptionType {Call = 0, Put = 1};

double getPrice();
SecurityType getType();
Option(double stockPrice, double strikePrice, double vol, double r, double expire);
~Option();

private:
//disable copy and assignment
double m_stockPrice;
double m_strikePrice;
double m_sigma;
double m_r;
double m_expire;

Option(const Option&){};
Option& operator= (const Option&){};

}
} //end of namespace security

#endif
