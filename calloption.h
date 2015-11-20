#ifndef CALLOPTION_H
#define CALLOPTION_H

#include <option.h>

namespace security
{
class CallOption: public Option
{
public:
double getPrice();
SecurityType getType();
}
} //end of namespace security

#endif
