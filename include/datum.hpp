// 
// a datum with storage for cluster weights
//

#include "numerics.hpp"

#ifndef _WEIGHTED_DATUM_
#define _WEIGHTED_DATUM_

class WeightedDatum
{
public:
  WeightedDatum() : _x(), _w() {}
  WeightedDatum(const bvec & x, const bvec & w) : _x(x), _w(w) {}
  WeightedDatum(const WeightedDatum & wd) : _x(wd._x), _w(wd._w) {}
  ~WeightedDatum() {}

  //WeightedDatum operator=(const WeightedDatum & rhs);
  void reweight(const bvec & nw);

private:
  bvec _x; // datum
  bvec _w; // weights
};

#endif
