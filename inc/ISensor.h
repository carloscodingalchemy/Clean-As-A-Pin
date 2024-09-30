#include <cstdint>

class ISensor {
public:
    virtual void init() = 0;
    virtual int32_t read() = 0;
};