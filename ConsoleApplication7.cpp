// ConsoleApplication7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#pragma once

__declspec(dllexport) unsigned char* ReadAndWriteToDevice(unsigned char *InputReport1, unsigned char *OutputReport1, int DevDet);
__declspec(dllexport) unsigned char* ReadAndWriteToDevice_new(unsigned char *InputReport1, unsigned char *OutputReport1, int DevDet);
__declspec(dllexport) int GetSpectra(signed __int16 *InputSpec1, unsigned char SpecNmb, unsigned __int16 startPix, unsigned __int16 endPix, unsigned char test1, unsigned __int16 tot_startPix, unsigned __int16 tot_endPix);
__declspec(dllexport) void DevDetect(unsigned char *DvDetect);

#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <wtypes.h>
#include <adcDLL1.lib>
#include <adcDLL1.dll>

int main()
{
	int i, j;
	int addr;
	unsigned char* DvDet = 0;

	DevDetect(DvDet);
	printf("%c\n", DvDet);



}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
