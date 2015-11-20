#ifndef SECURITY_H
#define SECURITY_H

namespace security
{

class Security
{
enum SecurityType
{
Equity = 0,
Bond = 1,
CallOption = 2,
PutOption = 3
};

public:
Security(){};
~Security(){};
virtual SecurityType getType() = 0;
virtual double getPrice() = 0;

private:
//disable copy and assignment
Security(const Security&){};
Seucrity& operator= (const Security&){};
}
} //end of namespace security

#endif
