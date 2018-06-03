#include "ruby.h"
#include <unordered_map>
#include <string>

typedef std::unordered_map<std::string, VALUE> RUnorderedMap ;

extern "C" {
  void Init_unordered_map(void);
  VALUE rb_unordered_map_aset(VALUE self, VALUE key, VALUE value);
  static VALUE unordered_map_alloc(VALUE klass);
}
