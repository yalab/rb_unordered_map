#include "unordered_map.h"

void
Init_unordered_map()
{
    VALUE rb_cUnorderedMap = rb_define_class("UnorderedMap", rb_cObject);
    rb_include_module(rb_cUnorderedMap, rb_mEnumerable);
}
