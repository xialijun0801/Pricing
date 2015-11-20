#include <option.h>

namespace security
{


double CallOption::getPrice()
{   
    return  Option::getPrice(Security::CallOption);  
}


SecurityType CallOption::getType()
{
    return Security::CallOption;
}
}
