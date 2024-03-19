# redis-plus-plus-test-project

redis-plus-plus(hiredis wrapper) test project.

## env
- macOS 14.3.1
- hiredis v1.2.0
- redis-plus-plus 1.3.12
- cmake 3.28.3
- C++11

## Setup
```sh
git clone https://github.com/redis/hiredis.git
cd hiredis
git checkout v1.2.0
make PREFIX=...
make PREFIX=... install

git clone https://github.com/sewenew/redis-plus-plus.git
cd redis-plus-plus
mkdir build
cd build
cmake -DCMAKE_PREFIX_PATH=... -DCMAKE_INSTALL_PREFIX=...  -DREDIS_PLUS_PLUS_CXX_STANDARD=11 ..
make
make install
```
Build libraries and update CMakelists.txt

```sh
docker run -d -p 127.0.0.1:6379:6379 redis
```
Run redis locally before running
