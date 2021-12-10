#ifndef LIGHTRENDERER_FONT7X12_H
#define LIGHTRENDERER_FONT7X12_H


#include "Font.h"


class Font7x12 : public Font {

const int LETTER_WIDTH  = 7;
const int LETTER_HEIGHT = 12;

const bool UPPERCASE_A[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_B[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_C[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_D[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_E[12][7] = 
{
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
};
const bool UPPERCASE_F[12][7] = 
{
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
};
const bool UPPERCASE_G[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 1, 1, 1, 1, 
	1, 1, 0, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_H[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_I[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_J[12][7] = 
{
	0, 0, 1, 1, 1, 1, 1, 
	0, 0, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	0, 1, 1, 1, 1, 0, 0, 
};
const bool UPPERCASE_K[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 1, 1, 0, 0, 
	1, 1, 1, 1, 0, 0, 0, 
	1, 1, 1, 1, 0, 0, 0, 
	1, 1, 0, 1, 1, 0, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_L[12][7] = 
{
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
};
const bool UPPERCASE_M[12][7] = 
{
	1, 0, 0, 0, 0, 0, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 0, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 1, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_N[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 0, 0, 1, 1, 
	1, 1, 1, 1, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 1, 1, 1, 1, 
	1, 1, 0, 0, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_O[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_P[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
};
const bool UPPERCASE_Q[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 1, 1, 0, 1, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 1, 1, 0, 1, 1, 
	0, 1, 1, 1, 1, 0, 1, 
};
const bool UPPERCASE_R[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_S[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	0, 1, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_T[12][7] = 
{
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
};
const bool UPPERCASE_U[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool UPPERCASE_V[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 0, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
	0, 0, 1, 1, 1, 0, 0, 
	0, 0, 0, 1, 0, 0, 0, 
};
const bool UPPERCASE_W[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 1, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 0, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 0, 0, 0, 0, 0, 1, 
};
const bool UPPERCASE_X[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 1, 1, 0, 1, 1, 0, 
	0, 1, 1, 0, 1, 1, 0, 
	0, 0, 1, 1, 1, 0, 0, 
	0, 0, 1, 1, 1, 0, 0, 
	0, 1, 1, 0, 1, 1, 0, 
	0, 1, 1, 0, 1, 1, 0, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
};
const bool UPPERCASE_Y[12][7] = 
{
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 1, 1, 1, 1, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
};
const bool UPPERCASE_Z[12][7] = 
{
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 1, 1, 0, 0, 
	0, 0, 0, 1, 1, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 0, 1, 1, 0, 0, 0, 
	0, 1, 1, 0, 0, 0, 0, 
	0, 1, 1, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_0[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_1[12][7] = 
{
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 1, 1, 1, 1, 0, 
	0, 0, 1, 1, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
};
const bool DIGIT_2[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 1, 1, 1, 
	0, 0, 0, 1, 1, 1, 0, 
	0, 0, 1, 1, 1, 0, 0, 
	0, 1, 1, 1, 0, 0, 0, 
	1, 1, 1, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
};
const bool DIGIT_3[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 1, 1, 1, 
	0, 0, 0, 1, 1, 1, 0, 
	0, 0, 0, 1, 1, 1, 0, 
	0, 0, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_4[12][7] = 
{
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 0, 0, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
	0, 0, 0, 0, 1, 1, 0, 
};
const bool DIGIT_5[12][7] = 
{
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_6[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_7[12][7] = 
{
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
};
const bool DIGIT_8[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool DIGIT_9[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 1, 1, 1, 1, 1, 
	0, 1, 1, 1, 1, 1, 0, 
};
const bool PERIOD[12][7] = 
{
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
};
const bool EXCLAMATION_POINT[12][7] =
{
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
	1, 1, 0, 0, 0, 0, 0, 
};
const bool QUESTION_MARK[12][7] = 
{
	0, 1, 1, 1, 1, 1, 0, 
	1, 1, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	1, 1, 0, 0, 0, 1, 1, 
	0, 0, 0, 0, 1, 1, 1, 
	0, 0, 0, 1, 1, 1, 0, 
	0, 0, 0, 1, 1, 0, 0, 
	0, 0, 0, 1, 1, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 1, 1, 0, 0, 
	0, 0, 0, 1, 1, 0, 0, 
};
const bool UNDERSCORE[12][7] = 
{
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 
	1, 1, 1, 1, 1, 1, 1, 
};
const bool SPACE[12][7] =
{
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
                0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0,
};

public:
	Font7x12() {}

	int letterWidth() const override {
		return LETTER_WIDTH;
	}

	int letterHeight() const override {
		return LETTER_HEIGHT;
	}

	bool_matrix letterData(char letter) const override {
        bool_matrix data(LETTER_WIDTH, LETTER_HEIGHT);

		switch (letter) {
			case 'a':
			case 'A':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_A[y][x];
				}
				break;
			case 'b':
			case 'B':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_B[y][x];
				}
				break;
			case 'c':
			case 'C':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_C[y][x];
				}
				break;
			case 'd':
			case 'D':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_D[y][x];
				}
				break;
			case 'e':
			case 'E':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_E[y][x];
				}
				break;
			case 'f':
			case 'F':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_F[y][x];
				}
				break;
			case 'g':
			case 'G':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_G[y][x];
				}
				break;
			case 'h':
			case 'H':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_H[y][x];
				}
				break;
			case 'i':
			case 'I':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_I[y][x];
				}
				break;
			case 'j':
			case 'J':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_J[y][x];
				}
				break;
			case 'k':
			case 'K':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_K[y][x];
				}
				break;
			case 'l':
			case 'L':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_L[y][x];
				}
				break;
			case 'm':
			case 'M':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_M[y][x];
				}
				break;
			case 'n':
			case 'N':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_N[y][x];
				}
				break;
			case 'o':
			case 'O':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_O[y][x];
				}
				break;
			case 'p':
			case 'P':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_P[y][x];
				}
				break;
			case 'q':
			case 'Q':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_Q[y][x];
				}
				break;
			case 'r':
			case 'R':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_R[y][x];
				}
				break;
			case 's':
			case 'S':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_S[y][x];
				}
				break;
			case 't':
			case 'T':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_T[y][x];
				}
				break;
			case 'u':
			case 'U':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_U[y][x];
				}
				break;
			case 'v':
			case 'V':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_V[y][x];
				}
				break;
			case 'w':
			case 'W':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_W[y][x];
				}
				break;
			case 'x':
			case 'X':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_X[y][x];
				}
				break;
			case 'y':
			case 'Y':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_Y[y][x];
				}
				break;
			case 'z':
			case 'Z':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UPPERCASE_Z[y][x];
				}
				break;
			case '0':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_0[y][x];
				}
				break;
			case '1':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_1[y][x];
				}
				break;
			case '2':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_2[y][x];
				}
				break;
			case '3':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_3[y][x];
				}
				break;
			case '4':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_4[y][x];
				}
				break;
			case '5':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_5[y][x];
				}
				break;
			case '6':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_6[y][x];
				}
				break;
			case '7':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_7[y][x];
				}
				break;
			case '8':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_8[y][x];
				}
				break;
			case '9':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = DIGIT_9[y][x];
				}
				break;
			case '.':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = PERIOD[y][x];
				}
				break;
			case '!':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = EXCLAMATION_POINT[y][x];
				}
				break;
			case '?':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = QUESTION_MARK[y][x];
				}
				break;
			case '_':
				for (int y = 0; y < LETTER_HEIGHT; y++) {
					for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = UNDERSCORE[y][x];
				}
				break;
			default:
                for (int y = 0; y < LETTER_HEIGHT; y++) {
                    for (int x = 0; x < LETTER_WIDTH; x++) data[x][y] = SPACE[y][x];
                }
				break;
		}
		return data;
	}
};


#endif //LIGHTRENDERER_FONT7X12_H
