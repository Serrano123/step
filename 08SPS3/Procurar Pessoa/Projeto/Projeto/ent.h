#ifndef _ENT_H_
#define _ENT_H_

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//***************************************************
// ent
#define TAM_NOME 50 + 1
#define TAM_CEP 9 + 1

typedef uint16_t id;
typedef uint8_t idade;
typedef double salario;
typedef double media;

#define OK 1


typedef struct {
	id m_id;
	idade m_idade;
	char m_nome[TAM_NOME];
	char m_cep[TAM_CEP];
	salario m_salario;
} pessoa;


/* f�s de cria��o, copia e compara��o de 'pessoa' */

int cria_pessoa(pessoa *  p, id _id, const char * _nome, idade _idade, salario _salario, const char * _cep);

int cria_pessoa_str(pessoa * p, const char * const buf);

int imprime_pessoa(const pessoa * p);

// TODO, Sr. Pedro!
int copia_pessoa(pessoa * p_to, const pessoa * p_from);

#endif