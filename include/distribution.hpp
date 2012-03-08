//
// an abstract base class for conjugate-exponential distributions
// operates as a functor on data to return sufficient statistics
//

#include "numerics.hpp"
#include "datum.hpp"
#include <vector>

#ifndef _DISTRIBUTION_
#define _DISTRIBUTION_

class Distribution
{
public:
  virtual ~Distribution() { }

  // returns sufficient statistics
  virtual numeric operator()(const WeightedDatum & datum) const = 0;
  virtual numeric operator()(const std::vector<WeightedDatum> & data) const = 0;
  virtual bool is_conjuate() { return false; }
};

class ConjExpDist : public Distribution
{
public:
  virtual bool is_conjugate() { return true; }
};

#endif
