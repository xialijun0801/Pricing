#include <bond.h>

namespace security
{

namespace
{
    double cashFlowPVDiscrete(
        const vector<double>& cflow_times,
	const vector<double>& cflow_amounts,
	double r){...}
}


Bond(const std::vector<double>& flowCash, const std::vector<double>& flowTime, double r):m_r(r)
{
    m_flowCash.assign(flowCash.begin(), flowCash.end());
    m_flowTime.assign(flowTime.begin(), flowTime.end());
}

~Bond(){};

double Bond::getPrice()
{   
    .....
}

SecurityType Bond::getType()
{
    return Security::Bond;
}

}
