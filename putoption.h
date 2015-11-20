#ifndef PUTOPTION_H
#define PUTOPTION_H

#include <security.h>

namespace security
{
class PutOption: public Security
{
double getPrice();
SecurityType getType();
}
} //end of namespace security

#endif
