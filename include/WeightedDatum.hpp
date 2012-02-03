// 
// a datum with storage for cluster weights
//

class WeightedDatum
{
public:
  WeightedDatum() : _x(), _w() {}
  WeightedDatum(std::vector<double> x, std::vector<double> w) : _x(x), _w(w) {}
  WeightedDatum(const WeightedDatum & wd) : _x(wd._x), _w(wd._w) {}
  ~WeightedDatum() {}

private:
  std::vector<double> _x; // datum
  std::vector<double> _w; // weights
};
