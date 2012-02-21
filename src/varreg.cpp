// 
// main class
//

#include "numerics.hpp"
#include "weighted_datum.hpp"

int
main(int argc, char** argv)
{
  WeightedDatum wd;
  bvec bv(3);
  for (unsigned i = 0; i < bv.size(); i++)
    bv(i) = i;
  wd.reweight(bv);
  return 0;
}