cmake_minimum_required(VERSION 3.28)
project(redis_plus_plus_test_project)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(HIREDIS_HEADER "/Users/seonghyeoncho/Desktop/my/tmp/redis-plus-plus-test-project/include")
set(HIREDIS_LIB "/Users/seonghyeoncho/Desktop/my/tmp/redis-plus-plus-test-project/lib/libhiredis.a")
set(REDIS_PLUS_PLUS_HEADER "/Users/seonghyeoncho/Desktop/my/tmp/redis-plus-plus-test-project/include")
set(REDIS_PLUS_PLUS_LIB "/Users/seonghyeoncho/Desktop/my/tmp/redis-plus-plus-test-project/lib/libredis++.a")

add_executable(redis_plus_plus_test_project main.cpp)

# <------------ add hiredis dependency --------------->
find_path(HIREDIS_HEADER hiredis)
target_include_directories(redis_plus_plus_test_project PUBLIC ${HIREDIS_HEADER})

find_library(HIREDIS_LIB hiredis)
target_link_libraries(redis_plus_plus_test_project ${HIREDIS_LIB})

# <------------ add redis-plus-plus dependency -------------->
# NOTE: this should be *sw* NOT *redis++*
find_path(REDIS_PLUS_PLUS_HEADER sw)
target_include_directories(redis_plus_plus_test_project PUBLIC ${REDIS_PLUS_PLUS_HEADER})

find_library(REDIS_PLUS_PLUS_LIB redis++)
target_link_libraries(redis_plus_plus_test_project ${REDIS_PLUS_PLUS_LIB})
