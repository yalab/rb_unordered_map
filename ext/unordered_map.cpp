#include "unordered_map.h"
#include <unordered_map>

void
Init_unordered_map()
{
    VALUE rb_cUnorderedMap = rb_define_class("UnorderedMap", rb_cObject);
    rb_include_module(rb_cUnorderedMap, rb_mEnumerable);
    rb_define_alloc_func(rb_cUnorderedMap, rb_unordered_map_alloc);
    rb_define_method(rb_cUnorderedMap, "store", reinterpret_cast<VALUE (*)(...)>(rb_unordered_map_aset), 2);
}

VALUE
rb_unordered_map_alloc(VALUE obj)
{
  std::unordered_map<VALUE, VALUE> map;
  return obj;
}

VALUE
rb_unordered_map_aset(VALUE hash, VALUE key, VALUE val)
{
  return hash;
}
