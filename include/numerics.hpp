//
// typedefs and declarations of important
// numerical routines
//

#ifndef _NUMERICS_
#define _NUMERICS_

#include <boost/variant.hpp>
#include <boost/numeric/ublas/matrix.hpp>
#include <boost/numeric/ublas/io.hpp>

typedef boost::numeric::ublas::matrix<double> bmat;
typedef boost::numeric::ublas::vector<double> bvec;
typedef boost::variant< double, bvec, bmat > numeric;

#endif
