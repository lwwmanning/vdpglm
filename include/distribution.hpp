//
// an abstract base class for conjugate-exponential distributions
//

#include "datum.hpp"
#include <vector>
#include <map>
#include <boost/any.hpp>

#ifndef _CONJ_EXP_DIST_
#define _CONJ_EXP_DIST_

class ConjExpDist
{
public:
  ConjExpDist() : _theta() {}
  ConjExpDist(const ConjExpDist & rhs) : _theta(rhs._theta) {}
  virtual ~ConjExpDist() { }
  virtual void operator()(std::vector<WeightedDatum> & data) = 0;

protected:
  std::map<std::string, boost::any> _theta;
};

#endif
