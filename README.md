# rb_unordered_map

## WHAT IS THIS?

This is a study implemntation ruby wrapper for c++ std::unordered_map.

## BUILD and TEST

```
$ git clone https://github.com/yalab/rb_unordered_map.git
$ cd rb_unordered_map/ext
$ ruby extconf.rb
$ make
$ ruby -I. -r unordered_map ../test/unordered_map_test.rb
```
