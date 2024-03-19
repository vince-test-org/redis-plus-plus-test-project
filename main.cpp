#include <iostream>

#include <sw/redis++/redis++.h>

int main()
{
    // Sync
    {
        auto redis = sw::redis::Redis("tcp://127.0.0.1:6379");
        redis.set("key", "val");
        auto val = redis.get("key");    // val is of type OptionalString. See 'API Reference' section for details.
        if (val) {
            // Dereference val to get the returned value of std::string type.
            std::cout << *val << std::endl;
        }   // else key doesn't exist.
    }

    return 0;
}
