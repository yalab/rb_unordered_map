#include "ruby.h"

extern "C" {
  void Init_unordered_map(void);
  VALUE rb_unordered_map_alloc(VALUE obj);
  VALUE rb_unordered_map_aset(VALUE self, VALUE key, VALUE value);
}
