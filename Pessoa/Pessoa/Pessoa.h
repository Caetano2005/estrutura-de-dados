#pragma once
#ifndef PESSOA_H
#define PESSOA_H

typedef struct pessoa {
    char nome[100];
    int idade;
    struct pessoa* ponteiro;
} Pessoa;

#endif