class ISensor {
public:
    virtual void init() = 0;
    virtual int read() = 0;
};