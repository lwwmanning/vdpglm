// 
// main class -- placeholder for now
//

#include "numerics.hpp"
#include "datum.hpp"
#include "vparam.hpp"
#include "distribution.hpp"

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
