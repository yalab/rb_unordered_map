require "minitest"
require "minitest/autorun"
require 'unordered_map'

class UnorderedMapTest < Minitest::Test
  def setup
    @unordered_map = UnorderedMap.new
  end

  def test_init
    assert_equal 'UnorderedMap', @unordered_map.class.name
  end
end
