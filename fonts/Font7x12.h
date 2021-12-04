#ifndef LIGHTRENDERER_FONT7X12_H
#define LIGHTRENDERER_FONT7X12_H


#include "Font.h"


class Font7x12 : public Font {

const int LETTER_WIDTH  = 7;
const int LETTER_HEIGHT = 12;

const int UPPERCASE_A[12][7] = 
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
const int UPPERCASE_B[12][7] = 
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
const int UPPERCASE_C[12][7] = 
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
const int UPPERCASE_D[12][7] = 
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
const int UPPERCASE_E[12][7] = 
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
const int UPPERCASE_F[12][7] = 
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
const int UPPERCASE_G[12][7] = 
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
const int UPPERCASE_H[12][7] = 
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
const int UPPERCASE_I[12][7] = 
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
const int UPPERCASE_J[12][7] = 
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
const int UPPERCASE_K[12][7] = 
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
const int UPPERCASE_L[12][7] = 
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
const int UPPERCASE_M[12][7] = 
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
const int UPPERCASE_N[12][7] = 
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
const int UPPERCASE_O[12][7] = 
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
const int UPPERCASE_P[12][7] = 
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
const int UPPERCASE_Q[12][7] = 
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
const int UPPERCASE_R[12][7] = 
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
const int UPPERCASE_S[12][7] = 
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
const int UPPERCASE_T[12][7] = 
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
const int UPPERCASE_U[12][7] = 
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
const int UPPERCASE_V[12][7] = 
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
const int UPPERCASE_W[12][7] = 
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
const int UPPERCASE_X[12][7] = 
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
const int UPPERCASE_Y[12][7] = 
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
const int UPPERCASE_Z[12][7] = 
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
const int DIGIT_0[12][7] = 
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
const int DIGIT_1[12][7] = 
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
const int DIGIT_2[12][7] = 
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
const int DIGIT_3[12][7] = 
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
const int DIGIT_4[12][7] = 
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
const int DIGIT_5[12][7] = 
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
const int DIGIT_6[12][7] = 
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
const int DIGIT_7[12][7] = 
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
const int DIGIT_8[12][7] = 
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
const int DIGIT_9[12][7] = 
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
const int PERIOD[12][7] = 
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
const int EXCLAMATION_POINT[12][7] = 
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
const int QUESTION_MARK[12][7] = 
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
const int UNDERSCORE[12][7] = 
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

public:
	Font7x12() {}

	int letterWidth() const override {
		return LETTER_WIDTH;
	}

	int letterHeight() const override {
		return LETTER_HEIGHT;
	}

	matrix letterData(char letter) const override {
        matrix data(LETTER_WIDTH, LETTER_HEIGHT);

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
				break;
		}
		return data;
	}
};


#endif //LIGHTRENDERER_FONT7X12_H
