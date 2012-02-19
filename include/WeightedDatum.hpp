// 
// a datum with storage for cluster weights
//

#include <vector>

class WeightedDatum
{
public:
  WeightedDatum() : _x(), _w() {}
  WeightedDatum(const bvec & x, const bvec & w) : _x(x), _w(w) {}
  WeightedDatum(const WeightedDatum & wd) : _x(wd._x), _w(wd._w) {}
  ~WeightedDatum() {}

private:
  bvec _x; // datum
  bvec _w; // weights
};
