// 
// defines an Element type, which can be used as a wrapper around any of the 
// supported types (like in a map)
//

#include <vector>
#include <map>

class Element
{
public:
  enum Type 
    {
      Null = 0,
      Integer = 1,
      Double = 2,
      Long = 3,
      String = 4,
      Vector = 5,
      Map = 6
    };

  Element() : _type(Null) {}
  Element(int i) : _type(Integer), _ival(i) {}
  Element(double d) : _type(Double), _dval(d) {}
  Element(long l) : _type(Long), _lval(l) {}
  Element(string s) : _type(String), _strval(s) {}
  Element(std::vector<Element> ve) : _type(Vector), _vecval(ve) {}
  Element(std::map<string, Element> m) : _type(Map), _mapval(m) {}
  Element(const Element & elem) : _type(elem._type)
  {
    switch(_type)
      {
      case Null: break;
      case Integer: _ival(elem._ival); break;
      case Double: _dval(elem._dval); break;
      case Long: _lval = elem._lval; break;
      case String: _strval = elem._strval; break;
      case Vector: _vecval = elem._vecval; break;
      case Map: _mapval = elem._mapval; break;
      }
  }
  
private:
  enum Type _type;
  union Datum
  {
    int _ival;
    double _dval;
    long _lval;
    string _strval;
    std::vector<Element> _vecval;
  };
};
