#include "datum.hpp"

void
WeightedDatum::reweight(const bvec & nw)
{
  _w = nw;
}
