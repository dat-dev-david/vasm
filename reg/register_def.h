#ifndef FTXXREG_DEF
#define FTXXREG_DEF

struct reg_type{
    const char* NAME;
    char SIZE;
    //the size
    char ACTUAL;


    reg_type(){  }
    ~reg_type(){ delete NAME; }
};

namespace FT{
    reg_type registers[]{
        {NAME = "ax"},
        {NAME = "bx"},
        {NAME = "cx"},
        {NAME = "dx"}
    };
}

#endif /*FTXXREG_DEF*/