//
// a class to define an abstract variational parameter
//

#include "numerics.hpp"

#ifndef _VARIATIONAL_PARAM_
#define _VARIATIONAL_PARAM_

class VariationalParam
{
public:
  virtual ~VariationalParam() = 0;
  
  // update the parameter from a new cumulative sufficient statistic
  virtual void update(const numeric & tx) = 0;
}

#endif
