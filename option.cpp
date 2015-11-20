#include <option.h>

namespace security
{

namespace
{
    const double STEPS = 100;
}

Option(double stockPrice, double strikePrice, double vol, double r, double expire)
    :  m_stockPrice(stockPrice), m_strikePrice(strikePrice), m_sigma(vol), m_r(r), m_expire(expire)
{
}

~Option(){};

double Option::getPrice()
{   
    return  0;  
}

double Option::getPrice(Security::SecurityType type)
{
    double r = exp(m_r*(m_expire/STEPS));
    double up = exp(m_sigma*sqrt(m_expire/steps));
    double doubleUp = up*up;
    double down = 1./up;

    std::vector<double> prices(STEPS + 1);
    prices[0] = m_stockPrice*pow(down, STEPS);	
    for (int i = 1; i <= STEPS; ++i)
    {
        prices[i] = uu*prices[i-1];
    }

    vector<double> values(STEPS + 1);
    for (int i = 0; i <= STEPS; ++i)
    {
        if (type == SecurityType::CallOption)
        {
            values[i] = max(0.0, (prices[i] - m_strikePrice));
        }
        else (type == SecurityType::PutOption)
        {
            values[i] = max(0.0, -(prices[i] - m_strikePrice));
        }
    }
	
    double invertedR = 1. / r, 
    double upProbability = (r - down) / (up- down);
    double downProbability = 1. - upProbability;

    for (int i = STEPS - 1; i >= 0; --i) {
        for (int i = 0; i <= STEPS; ++i) {
	    values[i] = invertedR*(upProbability*values[i + 1] + downProbability*values[i]);		
	}
    }
    return values[0];
}

SecurityType Option::getType()
{
    return Security::UnknownOption;
}
}
