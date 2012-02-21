//
// an abstract base class for conjugate-exponential distributions
// function objects
//

#include "datum.hpp"
#include <vector>

#ifndef _CONJ_EXP_DIST_
#define _CONJ_EXP_DIST_

class ConjExpDist
{
public:
  virtual ~ConjExpDist() = 0;
  virtual void operator()(std::vector<WeightedDatum> & data) const = 0;

private:
  ConjExpDist() { }
  ConjExpDist(const ConjExpDist & rhs) { }
  ConjExpDist& operator=(const ConjExpDist & rhs) { return *this; }
};

#endif
