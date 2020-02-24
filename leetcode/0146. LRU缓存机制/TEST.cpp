#define CATCH_CONFIG_MAIN
#include <catch.hpp>
#include "solution.h"

TEST_CASE("146. LRU缓存机制", "[LRUCache]")
{
    LRUCache *cache = new LRUCache( 2 /* 缓存容量 */ );
    cache->put(1, 1);
    cache->put(2, 2);
    REQUIRE(cache->get(1)==1);
    cache->put(3, 3);    // 该操作会使得密钥 2 作废
    REQUIRE(cache->get(2)==-1);
    cache->put(4, 4);    // 该操作会使得密钥 1 作废
    REQUIRE(cache->get(1)==-1);
    REQUIRE(cache->get(3)==3);
    REQUIRE(cache->get(4)==4);
}
