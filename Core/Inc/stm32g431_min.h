#ifndef STM32G431_MIN_H
#define STM32G431_MIN_H

#include <stdint.h>

#define PERIPH_BASE        (0x40000000UL)
#define AHB2PERIPH_BASE    (PERIPH_BASE + 0x08000000UL)
#define RCC_BASE           (0x40021000UL)
#define GPIOB_BASE         (AHB2PERIPH_BASE + 0x0400UL)

typedef struct {
    volatile uint32_t MODER;
    volatile uint32_t OTYPER;
    volatile uint32_t OSPEEDR;
    volatile uint32_t PUPDR;
    volatile uint32_t IDR;
    volatile uint32_t ODR;
    volatile uint32_t BSRR;
    volatile uint32_t LCKR;
    volatile uint32_t AFRL;
    volatile uint32_t AFRH;
    volatile uint32_t BRR;
} GPIO_TypeDef;

typedef struct {
    volatile uint32_t CR;
    volatile uint32_t ICSCR;
    volatile uint32_t CFGR;
    volatile uint32_t PLLCFGR;
    volatile uint32_t RESERVED0;
    volatile uint32_t CRRCR;
    volatile uint32_t CIER;
    volatile uint32_t CIFR;
    volatile uint32_t CICR;
    volatile uint32_t RESERVED1;
    volatile uint32_t AHB1RSTR;
    volatile uint32_t AHB2RSTR;
    volatile uint32_t AHB3RSTR;
    volatile uint32_t RESERVED2;
    volatile uint32_t APB1RSTR1;
    volatile uint32_t APB1RSTR2;
    volatile uint32_t APB2RSTR;
    volatile uint32_t RESERVED3;
    volatile uint32_t AHB1ENR;
    volatile uint32_t AHB2ENR;
    volatile uint32_t AHB3ENR;
} RCC_TypeDef;

#define RCC                ((RCC_TypeDef *)RCC_BASE)
#define GPIOB              ((GPIO_TypeDef *)GPIOB_BASE)

#define RCC_AHB2ENR_GPIOBEN (1UL << 1)

#endif
