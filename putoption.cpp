#include <option.h>

namespace security
{

double PutOption::getPrice()
{   
    return Option::getPrice(Security::PutOption);  
}

SecurityType PutOption::getType()
{
    return Security::PutOption;
}
}
