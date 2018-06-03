#include "unordered_map.h"

void
Init_unordered_map()
{
  VALUE rb_cUnorderedMap = rb_define_class("UnorderedMap", rb_cObject);
  rb_define_alloc_func(rb_cUnorderedMap, reinterpret_cast<VALUE (*)(VALUE)>(unordered_map_alloc));
  rb_include_module(rb_cUnorderedMap, rb_mEnumerable);
  rb_define_method(rb_cUnorderedMap, "[]=", reinterpret_cast<VALUE (*)(...)>(rb_unordered_map_aset), 2);
  rb_define_method(rb_cUnorderedMap, "[]", reinterpret_cast<VALUE (*)(...)>(rb_unordered_map_aref), 1);
}

static VALUE
unordered_map_alloc(VALUE klass)
{
  NEWOBJ_OF(obj, struct RData, klass, T_FILE);
  auto map = new RUnorderedMap();
  obj->data = map;
  return (VALUE)obj;
}

VALUE
rb_unordered_map_aset(VALUE obj, VALUE key, VALUE val)
{
  char* str;
  switch (TYPE(key)) {
    case T_STRING:
      str = StringValuePtr(key);
      break;
    default:
      rb_raise(rb_eTypeError, "not valid type");
      break;
  }
  auto data = RDATA(obj);
  auto mapPtr = reinterpret_cast<RUnorderedMap*>(data->data);
  (*mapPtr)[std::string(str)] = val;
  return val;
}

VALUE
rb_unordered_map_aref(VALUE self, VALUE key)
{
  char* str;
  str = StringValuePtr(key);
  auto* mapPtr = reinterpret_cast<RUnorderedMap*>(RDATA(self)->data);
  return (*mapPtr)[std::string(str)];
}
