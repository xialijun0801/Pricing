#ifndef BOND_H
#define BOND_H

#include <security.h>

namespace security
{
class Bond: public Security
{
public:
double getPrice();
SecurityType getType();
Bond(const std::vector<double>& flowCash, const std::vector<double>& flowTime);
~Bond();

private:
//disable copy and assignment
std::vector<double> m_flowCash;
std::vector<double> m_flowTime;
Bond(const Bond&){};
Bond& operator= (const Bond&){};

}
} //end of namespace security

#endif
