#ifndef reg_guard
#define reg_guard

#include <stdint.h>
#include <stdlib.h>

// _t表示类型type

typedef struct REG_STRUCT
{
    // program count
    uint64_t rip;

    // return value
    union 
    {
        uint64_t rax;
        uint32_t eax;
        uint16_t ax;
        struct 
        {
            uint8_t al;
            uint8_t ah;
        };
    };
    
    // callee saved
    union
    {
        uint64_t rbx;
        uint32_t ebx;
        uint16_t bx;
        struct 
        {
            // 该结构占用16位，bl占用低8位，bh占用高8位
            uint8_t bl;
            uint8_t bh;
        };
    };

    // 4th argument    
    union
    {
        uint64_t rcx;
        uint32_t ecx;
        uint16_t cx;
        struct 
        {
            uint8_t cl;
            uint8_t ch;
        };
    };    
    
    // 3th argument
    union
    {
        uint64_t rdx;
        uint32_t edx;
        uint16_t dx;
        struct 
        {
            uint8_t dl;
            uint8_t dh;
        };
    };    

    // 2th argument
    union
    {
        uint64_t rsi;
        uint32_t esi;
        uint16_t si;
        struct 
        {
            uint8_t sil;
            uint8_t sih;
        };
    };    
    
    // 1th argument
    union
    {
        uint64_t rdi;
        uint32_t edi;
        uint16_t di;
        struct 
        {
            uint8_t dil;
            uint8_t dih;
        };
    };    
    
    // callee saved frame pointer
    union
    {
        uint64_t rbp;
        uint32_t ebp;
        uint16_t bp;
        struct 
        {
            uint8_t bpl;
            uint8_t bph;
        };
    };

    // stack pointer
    union 
    {
        uint64_t rsp;
        uint32_t esp;
        uint16_t sp;
        struct 
        { 
            uint8_t spl;
            uint8_t sph;
        };
    };

    // 5th argument
    union 
    {
        uint64_t r8;
        uint32_t r8d;
        uint16_t r8w;
        uint8_t  r8b;
    };

    // 6th argument
    union 
    {
        uint64_t r9;
        uint32_t r9d;
        uint16_t r9w;
        uint8_t  r9b;
    };

    // caller saved
    union 
    {
        uint64_t r10;
        uint32_t r10d;
        uint16_t r10w;
        uint8_t  r10b;
    };
    // caller saved
    union 
    {
        uint64_t r11;
        uint32_t r11d;
        uint16_t r11w;
        uint8_t  r11b;
    };

    // callee saved
    union 
    {
        uint64_t r12;
        uint32_t r12d;
        uint16_t r12w;
        uint8_t  r12b;
    };
    // callee saved
    union 
    {
        uint64_t r13;
        uint32_t r13d;
        uint16_t r13w;
        uint8_t  r13b;
    };
    // callee saved
    union 
    {
        uint64_t r14;
        uint32_t r14d;
        uint16_t r14w;
        uint8_t  r14b;
    };
    // callee saved
    union 
    {
        uint64_t r15;
        uint32_t r15d;
        uint16_t r15w;
        uint8_t  r15b;
    };   
}reg_t;

reg_t reg;

#endif