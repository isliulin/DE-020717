/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter (ST) for emWin V5.40.                      *
*        Compiled Mar 17 2017, 15:33:27                              *
*                                                                    *
*        (c) 1998 - 2017 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file:	weather_icon										 *
* Dimensions:	55 * 55												 *
* NumColors:	32bpp: 16777216 + 256								 *
* FileSize:		12100 bytes											 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP bmweather_icon;


#if defined ( __ICCARM__ )
#pragma location="ExtQSPIFlashSection" 
#else
__attribute__((section(".ExtQSPIFlashSection")))  
#endif
static GUI_CONST_STORAGE unsigned long _acweather_icon[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xE1EECD8E, 0x38E5B76A, 0x00C58A30, 0x00A16714, 0x0094590B, 0x00995708, 0x00995708, 0x00955606, 0x00955606, 0x00945606, 0x00935706, 0x00935706, 0x00945807, 0x00945807, 0x00965908, 
        0x00975A09, 0x00985907, 0x00995706, 0x00995706, 0x00985806, 0x00975D07, 0x00975D07, 0x00985E07, 0x00965A05, 0x00965904, 0x00955904, 0x00995A06, 0x009A5907, 0x00995806, 0x00965807, 0x00935807, 0x00925807, 0x00925706, 0x00945806, 0x00955806, 
        0x00955806, 0x00995906, 0x00975903, 0x00935908, 0x0098600F, 0x00B2792B, 0x38D9A96A, 0xE1DFBC8A, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF4FFFFFF, 0xB1BA8F51, 0x01BB8942, 0x009B5D02, 0x00A86902, 0x00B8800C, 0x00C69015, 0x00CE9920, 0x00D19D24, 0x00D3A024, 0x00D3A024, 0x00D3A125, 0x00D5A327, 0x00D6A528, 0x00D7A529, 0x00D7A62A, 0x00D8A72B, 
        0x00D8A72B, 0x00D8A92D, 0x00D6AC2D, 0x00D6AC2D, 0x00D7AC2C, 0x00DAAA2B, 0x00DBAB2B, 0x00DBAC2C, 0x00D8AC2E, 0x00D6AC2E, 0x00D7AD2E, 0x00D7AC2D, 0x00D8AB2D, 0x00D6AA2B, 0x00D7A82B, 0x00D9A62A, 0x00D8A529, 0x00D6A428, 0x00D3A226, 0x00D3A126, 
        0x00D3A126, 0x00D39F21, 0x00D19A22, 0x00C8931C, 0x00B9860C, 0x00AE7605, 0x009A5B00, 0x01B07C39, 0xB1AD824C, 0xF4FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xF9FFFFFF, 0x58B69864, 0x0BA16714, 0x00B06F00, 0x00BE8C12, 0x00D9AF4A, 0x00E2BB73, 0x00E3C481, 0x00E7CB8C, 0x00E6CD8F, 0x00E8CE8D, 0x00E8CF8D, 0x00E9D08E, 0x00ECD191, 0x00EDD291, 0x00EDD291, 0x00ECD392, 0x00EBD493, 
        0x00ECD493, 0x00EED693, 0x00F0D793, 0x00F0D793, 0x00EFD793, 0x00EDD793, 0x00EED793, 0x00EED893, 0x00F1D793, 0x00F1D793, 0x00F1D793, 0x00F1D693, 0x00F0D494, 0x00F0D493, 0x00EFD494, 0x00EED594, 0x00EED494, 0x00EDD392, 0x00EAD291, 0x00E9D190, 
        0x00E9D090, 0x00E9D08E, 0x00EACE8F, 0x00E6C987, 0x00E4C278, 0x00DFB557, 0x00CA9721, 0x00B47500, 0x0BA46F11, 0x58B28E60, 0xF9FFFFFF, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xF9FFFFFF, 0x4DB78447, 0x00AB6717, 0x00B77D06, 0x00CBA136, 0x00EDC593, 0x00EAD2A9, 0x00ECDFAE, 0x00EEDBB3, 0x00EFDDB4, 0x00EFDEB3, 0x00EFE0B3, 0x00F0E0B4, 0x00F0E2B5, 0x00F1E2B5, 0x00F0E2B5, 0x00F0E2B5, 0x00F1E2B6, 0x00F2E3B6, 
        0x00F2E3B6, 0x00F2E4B6, 0x00F2E5B6, 0x00F2E5B6, 0x00F3E5B6, 0x00F3E5B6, 0x00F3E5B6, 0x00F3E5B6, 0x00F3E4B6, 0x00F4E4B6, 0x00F4E4B6, 0x00F2E4B6, 0x00F1E4B5, 0x00F1E4B5, 0x00F2E4B6, 0x00F2E3B7, 0x00F1E3B6, 0x00F0E2B5, 0x00F0E2B4, 0x00EFE0B4, 
        0x00EFE0B3, 0x00F0DFB2, 0x00F0DEB2, 0x00EFDEB1, 0x00ECDCB3, 0x00ECD8AC, 0x00F2D193, 0x00D6A853, 0x00B78407, 0x00B47811, 0x4DAB743F, 0xF9FFFFFF, 0xFF000000, 0xFF000000,
  0xFF000000, 0xF7FFFFFF, 0x59BB9052, 0x009F5F12, 0x00C68403, 0x00D7AB49, 0x00EAD3A4, 0x00E6D8A4, 0x00EADCAC, 0x00E8D7A9, 0x00EED9AB, 0x00EFD9AC, 0x00EFDCAD, 0x00EFDDAD, 0x00EFDEAE, 0x00F0DFAF, 0x00F1DFAF, 0x00F1DFAF, 0x00F1DFAF, 0x00F1E0B0, 0x00F2E0B0, 
        0x00F2E0B0, 0x00F2E1AF, 0x00F3E2AF, 0x00F3E2AF, 0x00F2E2AF, 0x00F0E3AF, 0x00F0E3AF, 0x00F0E3AF, 0x00F1E3AF, 0x00F1E3AF, 0x00F1E3AF, 0x00F1E2AE, 0x00F2E1AE, 0x00F2E1AE, 0x00F2E1AF, 0x00F2E1B1, 0x00F2E0B0, 0x00F1DFAF, 0x00F0DFAF, 0x00EFDEAE, 
        0x00EFDDAD, 0x00EFDDAD, 0x00F0DCAC, 0x00EFDBAC, 0x00ECDCA9, 0x00EBDEA8, 0x00E9D8AA, 0x00F0DAAE, 0x00E4B872, 0x00C1860A, 0x00A8730A, 0x59A87D3E, 0xF7FFFFFF, 0xFF000000,
  0xF4FFF7D7, 0x6EE6BD7A, 0x00AD7120, 0x00B37100, 0x00D09D45, 0x00EFD5A9, 0x00EBD7A6, 0x00F1D5A9, 0x00F0D7A9, 0x00EED7A8, 0x00EED7A9, 0x00EFD8AA, 0x00EFD9A9, 0x00EFDCA9, 0x00F0DCAA, 0x00F1DDAB, 0x00F1DEAB, 0x00F1DEAB, 0x00F1DEAC, 0x00F2DEAC, 0x00F2DFAC, 
        0x00F2DFAC, 0x00F3E0AD, 0x00F3E1AB, 0x00F3E1AB, 0x00F2E2AB, 0x00EFE2AC, 0x00EEE2AC, 0x00EFE2AC, 0x00EFE2AC, 0x00EFE1AC, 0x00EFE1AC, 0x00F1E1AC, 0x00F2E0AA, 0x00F2E0AA, 0x00F3E0AC, 0x00F3E0AD, 0x00F2DFAC, 0x00F1DEAB, 0x00F1DDAC, 0x00F0DCAB, 
        0x00EFDCA9, 0x00F0DBA9, 0x00F0DAA8, 0x00EFDAA8, 0x00ECD8A7, 0x00EBD7A9, 0x00EAD6A6, 0x00EBDAA5, 0x00EED6A9, 0x00DCB364, 0x00BA8208, 0x00A76F18, 0x6ECEA668, 0xF4FFF3D7,
  0x99F9D185, 0x00D39742, 0x01A06200, 0x00C1881D, 0x00EED499, 0x00E6D1A1, 0x00EAD2A5, 0x00E9D5A1, 0x00EAD7A3, 0x00ECD7A3, 0x00EDD8A4, 0x00EDD9A5, 0x00EFDAA5, 0x00EFDBA4, 0x00F0DBA5, 0x00F0DCA5, 0x00F1DDA6, 0x00F2DEA7, 0x00F3DEA8, 0x00F3DFA8, 0x00F3DFA8, 
        0x00F3DFA8, 0x00F3E0A8, 0x00F2E1A7, 0x00F2E1A7, 0x00F2E2A8, 0x00F3E2A9, 0x00F3E2A9, 0x00F3E2A9, 0x00F3E2A9, 0x00F3E2A9, 0x00F3E2A9, 0x00F3E2A9, 0x00F2E1A7, 0x00F2E1A8, 0x00F3E0A8, 0x00F3DFA8, 0x00F3DFA8, 0x00F3DFA8, 0x00F2DDA7, 0x00F1DCA6, 
        0x00F0DCA5, 0x00F0DBA5, 0x00EFDAA4, 0x00EEDAA3, 0x00EDD8A3, 0x00EDD6A3, 0x00ECD5A2, 0x00EAD2A0, 0x00E7D4A1, 0x00EDD1A4, 0x00D8A03D, 0x01AF7000, 0x00B98133, 0x99F4C98C,
  0x73EFAB3E, 0x00B16F13, 0x00B07403, 0x00E2B65C, 0x00F1D2A8, 0x00E7D29A, 0x00EAD49C, 0x00EAD49E, 0x00EBD59F, 0x00EBD6A0, 0x00ECD8A1, 0x00EDD8A2, 0x00EDDAA2, 0x00EDDBA2, 0x00EFDCA3, 0x00EFDCA3, 0x00F0DDA4, 0x00F0DEA5, 0x00F1DFA6, 0x00F2DFA6, 0x00F3DFA6, 
        0x00F3DFA6, 0x00F1E0A5, 0x00F1E2A5, 0x00F1E2A5, 0x00F1E2A5, 0x00F2E3A6, 0x00F2E3A6, 0x00F2E3A6, 0x00F2E3A6, 0x00F2E3A6, 0x00F3E3A6, 0x00F1E2A6, 0x00F1E2A5, 0x00F1E2A5, 0x00F1E0A5, 0x00F2DFA6, 0x00F2DFA6, 0x00F2DFA5, 0x00F1DEA5, 0x00F0DDA4, 
        0x00EEDCA3, 0x00EEDCA3, 0x00EEDAA1, 0x00EDDAA1, 0x00EDD8A0, 0x00EBD6A0, 0x00EBD59F, 0x00EBD59F, 0x00E5D69C, 0x00E1CC9E, 0x00ECC27E, 0x00C28517, 0x00935D0B, 0x73DDA24B,
  0x76DF9D41, 0x00975F02, 0x00C38F1A, 0x00EAC885, 0x00E6CF94, 0x00E8D196, 0x00EAD09C, 0x00EAD39B, 0x00EBD39B, 0x00EBD59E, 0x00EAD89F, 0x00ECD9A0, 0x00ECDAA0, 0x00EDDBA0, 0x00EDDBA0, 0x00EFDDA1, 0x00EFDDA2, 0x00F0DEA3, 0x00F0DEA3, 0x00F1DFA4, 0x00F1DFA4, 
        0x00F1DFA4, 0x00F1E0A3, 0x00F0E1A2, 0x00F0E1A2, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A3, 0x00F1E2A4, 0x00F0E1A2, 0x00F3E1A2, 0x00F1E0A3, 0x00F1DFA4, 0x00F1DFA4, 0x00F1DFA3, 0x00F0DDA2, 0x00EFDDA2, 
        0x00EEDCA1, 0x00EDDBA0, 0x00EDDB9F, 0x00ECDA9F, 0x00EBD89E, 0x00EBD79E, 0x00EAD69D, 0x00EBD49E, 0x00ECD698, 0x00E2CD95, 0x00ECCE96, 0x00CF9B30, 0x00A36301, 0x76A67424,
  0x76B87F45, 0x009E6200, 0x00D29F39, 0x00E4C98E, 0x00E7CE96, 0x00E9D098, 0x00EBD098, 0x00EDD299, 0x00EDD299, 0x00EBD499, 0x00E9D699, 0x00EBD89B, 0x00EBD89B, 0x00EBD89B, 0x00ECD99C, 0x00EDDA9D, 0x00EEDC9C, 0x00EEDC9C, 0x00EFDD9D, 0x00F0DE9E, 0x00F0DE9F, 
        0x00F1DF9F, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F2E0A0, 0x00F1E498, 0x00EBDEA5, 0x00CBE2A8, 0x00EADFA1, 0x00F0DDA0, 0x00F0DDA0, 0x00F0DDA0, 0x00EEDE9E, 0x00ECDD9C, 
        0x00ECDC9C, 0x00EDDB9C, 0x00EED89C, 0x00ECD79A, 0x00ECD69B, 0x00EAD49A, 0x00EAD49A, 0x00E9D399, 0x00E8D298, 0x00E7D197, 0x00E7D197, 0x00D7AE4D, 0x00B27004, 0x768F5507,
  0x76A46A2E, 0x00A86900, 0x00D8A440, 0x00E6C98E, 0x00E8CD94, 0x00E9CE95, 0x00EAD094, 0x00EBD194, 0x00ECD295, 0x00EBD497, 0x00EAD697, 0x00EBD798, 0x00EBD898, 0x00ECD899, 0x00EDD99A, 0x00EDDA9A, 0x00EDDC9A, 0x00EEDC9A, 0x00EFDD9B, 0x00EFDE9C, 0x00EFDE9C, 
        0x00F1DF9D, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F1E09E, 0x00F5DEA0, 0x00C9DEB0, 0x0037E2E2, 0x00D4DEA9, 0x00EFDD9D, 0x00EFDD9D, 0x00EFDD9D, 0x00EEDD9A, 0x00EDDC9A, 
        0x00ECDC98, 0x00EDD99A, 0x00ECD799, 0x00ECD798, 0x00ECD598, 0x00ECD498, 0x00EBD396, 0x00EAD295, 0x00E9D195, 0x00E8D093, 0x00E9D195, 0x00E0B759, 0x00B87A09, 0x768E5708,
  0x76985C1E, 0x00AE6C00, 0x00D8A744, 0x00E6C88A, 0x00E9CC8F, 0x00EACD91, 0x00E9CF91, 0x00E9D091, 0x00E9D092, 0x00EBD393, 0x00EDD694, 0x00EDD695, 0x00EFD796, 0x00EED896, 0x00F0D997, 0x00EFD998, 0x00ECDC97, 0x00ECDC97, 0x00EEDD98, 0x00EEDE99, 0x00EEDE9A, 
        0x00EFDF9A, 0x00F0E09B, 0x00F0E09B, 0x00F0E09B, 0x00F1E09B, 0x00F1E09B, 0x00F0E09B, 0x00F0E09B, 0x00F0E09B, 0x00F0E09B, 0x00F0E09B, 0x00F4E199, 0x00C2E4A9, 0x004BDEE1, 0x00D7DEA6, 0x00EEDD9A, 0x00EEDD9A, 0x00EEDC9A, 0x00EEDB97, 0x00ECD996, 
        0x00ECD995, 0x00EDD996, 0x00ECD996, 0x00EAD795, 0x00ECD695, 0x00EDD395, 0x00ECD294, 0x00EBD192, 0x00EAD091, 0x00E9CF90, 0x00E9CF92, 0x00DFB65C, 0x00B67A08, 0x768A5808,
  0x769A6113, 0x00A96900, 0x00D9A843, 0x00E6C789, 0x00E7CA8D, 0x00E8CC8D, 0x00E9CE8D, 0x00E9CF8D, 0x00ECD18F, 0x00EBD390, 0x00EAD591, 0x00EBD592, 0x00EDD692, 0x00F0D793, 0x00F1D894, 0x00F1D994, 0x00ECDB93, 0x00ECDD93, 0x00EEDD95, 0x00EEDE95, 0x00EFDE96, 
        0x00EFE096, 0x00EFE096, 0x00F0DF95, 0x00F3DE97, 0x00EAE09A, 0x00F1E095, 0x00EBDE94, 0x00F2DF9D, 0x00F4E098, 0x00F2DF96, 0x00F2DF96, 0x00F7E093, 0x00C5E2A7, 0x0045E0DF, 0x00D6DFA2, 0x00EDDD95, 0x00EDDD95, 0x00EBDC95, 0x00ECDC92, 0x00F2DB96, 
        0x00E7D992, 0x00EDD593, 0x00EBDB90, 0x00ECD994, 0x00EDD593, 0x00EED391, 0x00ECD18F, 0x00EBD08F, 0x00E8CF8D, 0x00E7CD8C, 0x00E5CC8C, 0x00DBB357, 0x00B97D06, 0x76885208,
  0x769B650D, 0x00A76901, 0x00DAA942, 0x00E6C787, 0x00E6C98A, 0x00E7CB8A, 0x00E8CD89, 0x00EACF8A, 0x00EBD18C, 0x00EAD28D, 0x00EAD48E, 0x00EAD58E, 0x00ECD68F, 0x00EFD78F, 0x00F0D891, 0x00F0D991, 0x00EEDB90, 0x00EEDC90, 0x00EFDD91, 0x00EFDD91, 0x00EFDE92, 
        0x00F1DE93, 0x00EFDF92, 0x00F0DE90, 0x00F0DD90, 0x00AAE0B0, 0x0045E7D0, 0x00E8DC9A, 0x00F3E08E, 0x00EEDF91, 0x00F2DD91, 0x00F2DD91, 0x00F0DA99, 0x00C1E2A1, 0x003BE0DD, 0x00D1E09E, 0x00EFDC90, 0x00EFDC90, 0x00F0DC90, 0x00E9DE91, 0x00E8DE88, 
        0x00E1D99E, 0x0040DFD6, 0x00B9D6AD, 0x00F3D48B, 0x00ECD38B, 0x00ECD28D, 0x00EBD08B, 0x00E9CF8A, 0x00E8CD8B, 0x00E6CB89, 0x00E4CA8B, 0x00DBB557, 0x00BD8008, 0x76885008,
  0x769A640D, 0x00AA6C03, 0x00DBAA42, 0x00E7C583, 0x00E8C886, 0x00E8C887, 0x00E7CC86, 0x00E8CF86, 0x00E9D088, 0x00EAD189, 0x00EAD28A, 0x00ECD28A, 0x00ECD48B, 0x00EDD68A, 0x00EED78B, 0x00EFD88C, 0x00EFDA8D, 0x00EFDB8E, 0x00F0DC8F, 0x00F0DC8E, 0x00F0DC8E, 
        0x00F1DD8F, 0x00F0DE8E, 0x00F1DD8D, 0x00EEDD8F, 0x00E1DE97, 0x004ADEDF, 0x0028E5E1, 0x00F8DA92, 0x00F3DC8E, 0x00F1DD8F, 0x00F1DD90, 0x00EFE283, 0x00F1D799, 0x00E5DB9A, 0x00F3DA94, 0x00F0DC8E, 0x00F0DC8E, 0x00EFDB90, 0x00F3DB8D, 0x00E7D796, 
        0x0025E0E3, 0x0057DAD5, 0x00EAD892, 0x00E3D489, 0x00F0CE8B, 0x00EAD28A, 0x00E9D087, 0x00E7CE86, 0x00E7CC86, 0x00E5CA84, 0x00E3C986, 0x00DCB557, 0x00BE8109, 0x76895109,
  0x769A620C, 0x00AB6D05, 0x00DBAA40, 0x00E7C47F, 0x00E8C782, 0x00E9C783, 0x00E6CB82, 0x00E6CD82, 0x00E8CF84, 0x00E9D085, 0x00E9D186, 0x00EAD287, 0x00EBD388, 0x00ECD588, 0x00ECD589, 0x00EDD68A, 0x00EFDA8A, 0x00F0DB8D, 0x00F0DB8C, 0x00F1DC8B, 0x00F1DC8C, 
        0x00F1DB8A, 0x00EFDD89, 0x00F2DD89, 0x00F5D98D, 0x00F2DF86, 0x00F3DD89, 0x004DD8DA, 0x003AE0D1, 0x00DFDB91, 0x00F3DC8A, 0x00F0DC8C, 0x00D9DD91, 0x00D4DA9A, 0x00CAE097, 0x00D1DD9A, 0x00E2DD92, 0x00F4DC8A, 0x00F2DA88, 0x00E1DA90, 0x0031E0E2, 
        0x005BDCD5, 0x00F2DA85, 0x00ECD883, 0x00ECD48B, 0x00EDD386, 0x00E8D085, 0x00E7CE84, 0x00E6CC82, 0x00E8CB84, 0x00E6C981, 0x00E4C883, 0x00DCB555, 0x00BF810A, 0x76895208,
  0x76A26511, 0x00A96A03, 0x00D7AA39, 0x00E5C37A, 0x00E6C67C, 0x00E6C77E, 0x00E5C97E, 0x00E6CB7F, 0x00E8CD81, 0x00E8CF82, 0x00E9D283, 0x00EAD384, 0x00ECD485, 0x00EBD385, 0x00ECD586, 0x00ECD686, 0x00EDDA86, 0x00EEDC8A, 0x00EEDA87, 0x00EDD684, 0x00E6D38B, 
        0x00E7D38F, 0x00E1CE83, 0x00EAD882, 0x00F1DB87, 0x00E7D685, 0x00E7D496, 0x00DDD9B4, 0x009BDED3, 0x00C1D3A4, 0x00E2D68E, 0x0095DCB8, 0x0049E1D8, 0x001BE1ED, 0x000FE1F5, 0x001EE1EE, 0x004FDFDA, 0x009FDEAB, 0x00E6DB86, 0x00C5D8A3, 0x007CDDBB, 
        0x00EED686, 0x00EDD187, 0x00ECD486, 0x00EAD384, 0x00E9D284, 0x00E8CF83, 0x00E6CE82, 0x00E5CC80, 0x00E6CA81, 0x00E4C97F, 0x00E2C77F, 0x00DDB351, 0x00BC800D, 0x76835103,
  0x76A86B17, 0x00AC6E06, 0x00D7AA39, 0x00E3C276, 0x00E4C479, 0x00E4C67A, 0x00E5C77A, 0x00E7C97B, 0x00E9CB7D, 0x00E9CD7E, 0x00E9CF7E, 0x00EBD181, 0x00EBD281, 0x00E9D382, 0x00EAD382, 0x00EAD584, 0x00EDDA83, 0x00F2DC7D, 0x00E6D187, 0x00E1D3A5, 0x00EFEAD2, 
        0x00F1EFE7, 0x00F1EBDE, 0x00E8DBAE, 0x00D9C973, 0x00E0D6A7, 0x00EFEFE4, 0x00FCFBFF, 0x00FFFAFA, 0x00F6ECE0, 0x009CD2B8, 0x000EE2F4, 0x0000E3F8, 0x0003E2FF, 0x0007E3FF, 0x0000E9F9, 0x0009DFFD, 0x000EDDF4, 0x006BDFC2, 0x00E0D788, 0x00EAD77A, 
        0x00E9D682, 0x00F0D282, 0x00ECD282, 0x00EBD180, 0x00EAD080, 0x00E8CE7F, 0x00E6CC7D, 0x00E6CA7C, 0x00E6C97D, 0x00E5C77C, 0x00E3C67C, 0x00DDB350, 0x00BD800D, 0x76845103,
  0x76A16411, 0x00AA6B04, 0x00D8AB39, 0x00E2C274, 0x00E1C375, 0x00E2C476, 0x00E4C676, 0x00E6C878, 0x00E8CA79, 0x00E9CC7A, 0x00EBCF7B, 0x00EDD17D, 0x00EBD27E, 0x00E7D27D, 0x00E8D37E, 0x00E8D27F, 0x00EFD584, 0x00E8D179, 0x00E1D7AF, 0x00FAF9F6, 0x00FAFBFB, 
        0x00FDFEFC, 0x00F4FEF4, 0x00F2EFF1, 0x00DED2AB, 0x00F5F1E6, 0x00F7FBF7, 0x00EAE4CF, 0x00EADECB, 0x00F0E0D3, 0x00EBD9CC, 0x0031D5D3, 0x0005E4FD, 0x0005E4F6, 0x0003E5FA, 0x0009E1FA, 0x0007E3FD, 0x0003E7F8, 0x0003E6F8, 0x0091DAB6, 0x00EFD678, 
        0x00E4D085, 0x00E8D679, 0x00EDD17E, 0x00ECD07D, 0x00EBCE7C, 0x00EACD7C, 0x00E7CB7A, 0x00E6C979, 0x00E6C67A, 0x00E5C579, 0x00E3C479, 0x00DDB34F, 0x00BC810D, 0x76835103,
  0x76AD6B0A, 0x00AA6D06, 0x00D4A738, 0x00E1BE6E, 0x00E2C172, 0x00E4C374, 0x00E4C574, 0x00E4C775, 0x00E7C977, 0x00E8CB77, 0x00E9CC77, 0x00EBCE79, 0x00EAD178, 0x00E9D27A, 0x00E9D280, 0x00E5D57B, 0x00EED773, 0x00DCC98B, 0x00F9F7F6, 0x00FCFDFA, 0x00FEFEFE, 
        0x00FFFFFF, 0x00FCFCFD, 0x00F9FBF9, 0x00FBF9F4, 0x00EDE4D5, 0x00E3DACB, 0x00F3EFE9, 0x00FCFBFB, 0x00F4F9F9, 0x00F2ECDF, 0x00A9C8BA, 0x0020E0D6, 0x0003E2FB, 0x000DE2F2, 0x0005E3FC, 0x0003E4FD, 0x0003E4FD, 0x0000E7FC, 0x002BE0ED, 0x00D8DC86, 
        0x00F4D379, 0x00E5D17E, 0x00EDD479, 0x00EBD278, 0x00E8CF7A, 0x00ECCA7A, 0x00ECC975, 0x00E7CB78, 0x00E4C774, 0x00E2C472, 0x00E0C473, 0x00DEB54B, 0x00BD7F0B, 0x76844F05,
  0x76A86A0E, 0x00A96D07, 0x00D5A736, 0x00E0BC6B, 0x00E2C06F, 0x00E3C170, 0x00E4C471, 0x00E4C672, 0x00E7C874, 0x00E7CA74, 0x00E7CB74, 0x00E9CE77, 0x00EACC75, 0x00E9CE70, 0x00E8D372, 0x00EACF7E, 0x00E7CF75, 0x00E0D29A, 0x00F7FBFF, 0x00FCFEFD, 0x00FDFDFD, 
        0x00FFFFFF, 0x00FDFEFE, 0x00FBFAF6, 0x00E4E0D6, 0x00EDEAE2, 0x00FEFDFB, 0x00FAFBFB, 0x00F8FBFF, 0x00F9FDFE, 0x00F1FBF2, 0x00FFFFFE, 0x00D9DFDF, 0x0028D4DA, 0x0001E4FC, 0x0007E5FD, 0x0003E4FD, 0x0003E4FD, 0x0004E3FD, 0x0000E2FD, 0x00B2DA9C, 
        0x00F3D077, 0x00EAD17C, 0x00E7D079, 0x00E7CF78, 0x00DFCF72, 0x00E1CD6F, 0x00DDCC72, 0x00E6C670, 0x00E5C570, 0x00E2C46F, 0x00E1C26F, 0x00DCB248, 0x00BF810B, 0x76855005,
  0x76A46A11, 0x00A76C08, 0x00D6A734, 0x00E2BB67, 0x00E3BF6B, 0x00E4C06C, 0x00E4C26D, 0x00E5C46E, 0x00E8C671, 0x00E6C86F, 0x00E5CB70, 0x00E7CC72, 0x00E9CC6F, 0x00E0CA7F, 0x00E1DAB6, 0x00EAE0CA, 0x00E9DAAF, 0x00D6C9A7, 0x00F9F9FB, 0x00FEFEF9, 0x00FEFEFE, 
        0x00FFFFFF, 0x00FDFFFF, 0x00EAE8DF, 0x00EAE4D7, 0x00FDFFFE, 0x00FBFCFD, 0x00FCFCFC, 0x00FCFFFD, 0x00F6FCFC, 0x00F8FCFC, 0x00F6FDFC, 0x00F9FCFB, 0x00B0D9D2, 0x000EDDEC, 0x000AE4FD, 0x0003E4FD, 0x0003E4FD, 0x0003E4FC, 0x0000E2FF, 0x0097D9AB, 
        0x00E6CD76, 0x0083E0AB, 0x0057DDC4, 0x005ADCC0, 0x0058DCC9, 0x00A4D1A3, 0x00EDC665, 0x00E3C56D, 0x00E4C46E, 0x00E2C16C, 0x00E0C16B, 0x00DAAF45, 0x00C1830D, 0x76865106,
  0x769F6312, 0x00A76E06, 0x00D5A634, 0x00DFB964, 0x00E0BD68, 0x00E2C067, 0x00E2C267, 0x00E3C469, 0x00E5C56A, 0x00E7CA6C, 0x00E2C96F, 0x00EECE6B, 0x00D3BC72, 0x00F4ECD8, 0x00F2F8FC, 0x00F6FDFF, 0x00FFFFFF, 0x00F5F5F1, 0x00FBFDFF, 0x00FEFFFF, 0x00FAFBFB, 
        0x00FCFFFE, 0x00FFFEF8, 0x00D8D1C6, 0x00FFFFFA, 0x00FDFDFA, 0x00FEFEFE, 0x00FEFEFD, 0x00FFFFFE, 0x00FDFEFE, 0x00FCFFFF, 0x00FFFFFF, 0x00FDFEFF, 0x00EAEEEC, 0x0049DAD9, 0x0000E3FA, 0x0005E5FB, 0x0002E4FB, 0x0001E2F9, 0x0000E4FF, 0x008ED9A6, 
        0x00E7CF76, 0x00A6D797, 0x008DD6AC, 0x008ED5A9, 0x0084D4A5, 0x00ABCD8B, 0x00E6C56B, 0x00E8C568, 0x00E4C368, 0x00E3BF67, 0x00E1BE69, 0x00D7B043, 0x00BB7F0D, 0x768D5503,
  0x769D6214, 0x00A86E05, 0x00D6A532, 0x00DDB760, 0x00DEBA63, 0x00E0BE62, 0x00E1C063, 0x00E2C365, 0x00E4C466, 0x00E6C766, 0x00E0C76B, 0x00E7C367, 0x00DEC99D, 0x00F9F9F9, 0x00F9FBFA, 0x00F9F9F0, 0x00E7DECF, 0x00DFD4C5, 0x00E2D6C7, 0x00E4DDD1, 0x00FAF9F2, 
        0x00FEFFFF, 0x00EAE8E0, 0x00EFEAE1, 0x00FEFFFF, 0x00FDFEFD, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00F9FFFF, 0x00FFF4F6, 0x0078DCD7, 0x0000E0F5, 0x0000E0FE, 0x0001E2FE, 0x0003E6FA, 0x0000E1FF, 0x00C6D48B, 
        0x00EAC96F, 0x00E4CF69, 0x00E3CB70, 0x00E0C96D, 0x00E4C76C, 0x00EEC56B, 0x00EBC369, 0x00DFC465, 0x00E2C163, 0x00E1BE63, 0x00E0BC65, 0x00D6B040, 0x00BA7D0D, 0x768D5602,
  0x769E6617, 0x00A96E05, 0x00D8A12F, 0x00DDB45C, 0x00DFB85D, 0x00E0BA5E, 0x00E0BD5E, 0x00E0BF5F, 0x00E3C061, 0x00E8C664, 0x00E0C464, 0x00DEBD5F, 0x00EFDEB9, 0x00FAFBFB, 0x00F8F4E9, 0x00DBD7CB, 0x00EFEFED, 0x00FEFFFF, 0x00FDFFFD, 0x00F6F3EC, 0x00DED9CE, 
        0x00F8F5ED, 0x00D8D2C8, 0x00FFFEF7, 0x00F8FDFD, 0x00FDFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FBFFFF, 0x00FFFBF9, 0x00A5DFD9, 0x0010DFEF, 0x000AE7FD, 0x0007E5FE, 0x0000E5FF, 0x0030DCDE, 0x00D4D370, 
        0x00DBCA6A, 0x00ECCF5F, 0x00E6CC60, 0x00E5CA5E, 0x00DECA5F, 0x00DBC862, 0x00E3C362, 0x00E4BF61, 0x00DFBE5E, 0x00DEBC5F, 0x00DCBA5F, 0x00D6AC3C, 0x00BD7F0E, 0x768A5502,
  0x769F6819, 0x00AA6E04, 0x00D6A02D, 0x00DBB357, 0x00DDB758, 0x00E0BA59, 0x00DFBB59, 0x00DFBD5B, 0x00E1BF5C, 0x00E2C060, 0x00E0C360, 0x00E1C358, 0x00DFCE94, 0x00FDF9EF, 0x00E0D8CD, 0x00F3F3EE, 0x00FDFDFB, 0x00FCFBFA, 0x00FCFCFC, 0x00FCFEFB, 0x00F5F4EF, 
        0x00E8DECD, 0x00E4D7C4, 0x00FCFDF9, 0x00F9FDFD, 0x00FCFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FEFFFE, 0x00F6FDF7, 0x00C4E5DE, 0x0052D7D8, 0x0048DAD9, 0x002AD7E5, 0x0011DFF2, 0x0096D599, 0x00E7CB61, 
        0x00E9CF66, 0x00EFCA6A, 0x00E9C867, 0x00E7C766, 0x00EAC365, 0x00EAC164, 0x00E2C05F, 0x00E0BF5D, 0x00E0BD5C, 0x00DDB95A, 0x00DAB65B, 0x00D5AA3C, 0x00BD800F, 0x768B5805,
  0x769C6617, 0x00AA6D03, 0x00CF9F2C, 0x00D6B053, 0x00DAB456, 0x00DFB857, 0x00E0BA57, 0x00DFBC59, 0x00DEBE5B, 0x00E3C15C, 0x00DFBD53, 0x00DCC264, 0x00D6B878, 0x00E7D0AE, 0x00EEEBE2, 0x00FAFEFF, 0x00FDFDFD, 0x00FEFEFE, 0x00FEFEFE, 0x00FEFEFC, 0x00FCFFFF, 
        0x00F4F0EA, 0x00EEE7DD, 0x00FDFEFF, 0x00FEFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FDFEFB, 0x00FCFCF8, 0x00F5F3EF, 0x00F5EFE8, 0x00FEF4E7, 0x00D3E5DE, 0x00A4D2AB, 0x00E3C766, 0x00E5CC56, 
        0x00DDCC68, 0x00E8C85E, 0x00E5C65F, 0x00E3C65E, 0x00E4C45E, 0x00E3C15E, 0x00E0BE5B, 0x00DFBC59, 0x00E0BA58, 0x00DEB856, 0x00DBB555, 0x00D4A93B, 0x00B87F0D, 0x7694590D,
  0x76966216, 0x00AB6C02, 0x00D39D25, 0x00E0B24D, 0x00E0B553, 0x00DEB755, 0x00E0B954, 0x00E0BB54, 0x00E0BE57, 0x00D2B654, 0x00DAC992, 0x00F0EBDF, 0x00F0F0E8, 0x00EAECE6, 0x00F4FAFC, 0x00FDFDFB, 0x00FFFEFD, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFD, 0x00FCFEFE, 
        0x00F9FCFF, 0x00FAFBFC, 0x00FEFEFE, 0x00FEFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FEFEFD, 0x00FFFFFE, 0x00FDFEFD, 0x00FEFEFD, 0x00FFFAFA, 0x00F5FEFD, 0x00F5EDDD, 0x00A4CFA2, 0x004BD7BC, 
        0x00F4C55A, 0x00E9C955, 0x00E4C45B, 0x00E4C45A, 0x00E3C259, 0x00E3BF58, 0x00E0BC55, 0x00DFBA57, 0x00E3B95E, 0x00E4B85A, 0x00E3B552, 0x00D7A530, 0x00B97C0B, 0x768F5309,
  0x76936015, 0x00AB6C02, 0x00CC9310, 0x00CA9317, 0x00CE9E25, 0x00D3A934, 0x00D9B146, 0x00DAB44D, 0x00DAB54B, 0x00D7BB84, 0x00FDFDFC, 0x00F5F9F9, 0x00FAF6F2, 0x00FBFEF9, 0x00F7FDFE, 0x00FBFFFE, 0x00FFFFFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FBFCFD, 0x00FEFEFC, 
        0x00FFFEFB, 0x00FFFFFD, 0x00FEFEFE, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FDFCFC, 0x00F6FBFC, 0x00FFFDFA, 0x00FDF9FE, 0x00F6FFFD, 0x00DED7BE, 0x002DDED3, 
        0x0037DDCE, 0x00E8BF55, 0x00E4C256, 0x00E3C156, 0x00E3BF56, 0x00E3BD56, 0x00E0BA53, 0x00DDB64C, 0x00D7AD39, 0x00D3A327, 0x00CF9A19, 0x00CE9913, 0x00C28011, 0x7690530A,
  0x76996310, 0x00AD6F06, 0x00D09113, 0x00CA8F11, 0x00CD9213, 0x00D19812, 0x00D59B14, 0x00D4A016, 0x00C5A122, 0x00F6E9DF, 0x00FAFEFF, 0x00FBFDFF, 0x00FAFDFF, 0x00FAFDFE, 0x00FBFEFF, 0x00FBFEFE, 0x00F9FEFE, 0x00F9FEFE, 0x00FAFFFF, 0x00FAFFFF, 0x00FAFFFF, 
        0x00FAFFFF, 0x00FAFEFF, 0x00FCFDFE, 0x00FCFDFE, 0x00FCFDFD, 0x00FDFEFE, 0x00FDFEFE, 0x00FDFEFE, 0x00FDFDFE, 0x00FDFDFE, 0x00FDFDFE, 0x00FAFBFC, 0x00F6FDF9, 0x00F9FCF7, 0x00FAFEF8, 0x00FAFDFE, 0x00F9FCFE, 0x00FBFDFE, 0x00F0F3ED, 0x00E1C159, 
        0x0037D9DB, 0x004DD7B9, 0x00D7C149, 0x00DABD44, 0x00E3B030, 0x00DCAE2A, 0x00D6A321, 0x00D29C1A, 0x00D39A17, 0x00D09714, 0x00CD9511, 0x00CD9211, 0x00B87D0B, 0x768A5009,
  0x769B6513, 0x00AC6E04, 0x00CD8F11, 0x00C88E11, 0x00CC9313, 0x00CF9714, 0x00CF9A17, 0x00D79C0F, 0x00C69A2F, 0x00EEE4C7, 0x00EDE1C2, 0x00EEE1C3, 0x00EEE2C3, 0x00EFE3C2, 0x00EFE3C3, 0x00EFE4C3, 0x00EFE4C4, 0x00EFE5C5, 0x00EFE5C5, 0x00EEE5C3, 0x00EEE6C2, 
        0x00EEE6C2, 0x00EEE6C3, 0x00EEE5C4, 0x00EEE5C4, 0x00EEE5C3, 0x00EFE6C3, 0x00EFE7C3, 0x00EFE6C4, 0x00EFE5C4, 0x00EFE5C5, 0x00EFE5C5, 0x00E9E5C2, 0x00E4E3CD, 0x00D3E6DC, 0x00E4E5C7, 0x00F0E6C5, 0x00F0E6C5, 0x00EDE7C4, 0x00F0E1D0, 0x00D1B73A, 
        0x00D0B338, 0x005BD7A1, 0x00ADB64B, 0x00E4A515, 0x00D0A51A, 0x00D0A217, 0x00D2A116, 0x00D39E16, 0x00D29A17, 0x00D09815, 0x00CC9410, 0x00CC9211, 0x00B97D0B, 0x768A5009,
  0x769D6715, 0x00AB6D03, 0x00CA8C0E, 0x00C78D10, 0x00CA9111, 0x00D09714, 0x00D39B15, 0x00CF9D15, 0x00D39D1B, 0x00CDA22A, 0x00D3A528, 0x00D3A529, 0x00D4A82A, 0x00D5AB2B, 0x00D5AB2C, 0x00D6AD2D, 0x00D7AE2F, 0x00D8AF30, 0x00D9B131, 0x00DCB431, 0x00DDB731, 
        0x00DDB631, 0x00DCB831, 0x00DCB931, 0x00DCB930, 0x00DCB831, 0x00DDB933, 0x00DDB933, 0x00DDB933, 0x00DDBA32, 0x00DDBA32, 0x00DEBA32, 0x00DCB42D, 0x00BEBE4E, 0x004DCDB7, 0x00C6BB44, 0x00DBB331, 0x00D9B231, 0x00D6B02F, 0x00D9B32F, 0x00CAAF21, 
        0x00E7AE1B, 0x00D5B020, 0x00DDAB21, 0x00D4A918, 0x00D3A41B, 0x00D2A219, 0x00D5A017, 0x00D59D17, 0x00D19916, 0x00CE9713, 0x00CC9410, 0x00CD9211, 0x00B87D0C, 0x768A500A,
  0x76966213, 0x00AB6E05, 0x00C8890B, 0x00C78B0E, 0x00C98F0F, 0x00CD9311, 0x00D09713, 0x00D09A16, 0x00D69E19, 0x00D4A018, 0x00D5A31A, 0x00D8A61D, 0x00DAA81E, 0x00DAAC1E, 0x00DBAD1F, 0x00DCAF21, 0x00DDB122, 0x00DDB222, 0x00DEB323, 0x00DFB624, 0x00E1B724, 
        0x00E2B825, 0x00E1B925, 0x00E0B925, 0x00E1BA26, 0x00E1BB27, 0x00E1BC27, 0x00E1BC27, 0x00E1BC27, 0x00E1BC26, 0x00E1BB26, 0x00DFBA25, 0x00E5B925, 0x00B3C33F, 0x003BD7BD, 0x00C8BC3F, 0x00DFB424, 0x00DFB424, 0x00DDB223, 0x00DFB222, 0x00DBB222, 
        0x00DDAF20, 0x00D9AA1F, 0x00DAA81F, 0x00D6A61D, 0x00D6A41C, 0x00D3A11B, 0x00D49E18, 0x00D39A16, 0x00D09814, 0x00CC9313, 0x00C98F11, 0x00C98E0E, 0x00BB7B0A, 0x768C5406,
  0x76936012, 0x00AA6D05, 0x00C8880A, 0x00C68A0E, 0x00C98E0F, 0x00CB920F, 0x00CE9512, 0x00D09815, 0x00D39B18, 0x00D39E18, 0x00D3A21A, 0x00D6A41C, 0x00D7A71D, 0x00D7AA1D, 0x00D9AC1F, 0x00DAAE20, 0x00DBB022, 0x00DBB122, 0x00DCB223, 0x00DDB423, 0x00DFB623, 
        0x00DFB624, 0x00DFB725, 0x00DEB725, 0x00DFB826, 0x00E0B926, 0x00E0BA26, 0x00E0BA26, 0x00E0BA26, 0x00E0BA26, 0x00DFB925, 0x00DFB925, 0x00E2B923, 0x00BDBA44, 0x003ADBC3, 0x00C9BB34, 0x00DDB324, 0x00DCB223, 0x00DCB223, 0x00DCB021, 0x00DBAF20, 
        0x00D9AD1E, 0x00D9A91F, 0x00D8A61E, 0x00D6A41C, 0x00D3A21B, 0x00D2A01A, 0x00D19C16, 0x00D19914, 0x00CE9713, 0x00CB9112, 0x00C78D11, 0x00C78D0D, 0x00BA790A, 0x768C5305,
  0x76925F11, 0x00A96C04, 0x00C78709, 0x00C6890C, 0x00C88D0E, 0x00CA900E, 0x00CB9311, 0x00CE9613, 0x00D19816, 0x00D19C17, 0x00D19F17, 0x00D4A21A, 0x00D6A51C, 0x00D5A81B, 0x00D7AA1D, 0x00D8AB1E, 0x00D9AE1F, 0x00D9AF20, 0x00DAB021, 0x00DBB221, 0x00DCB321, 
        0x00DDB422, 0x00DDB523, 0x00DCB523, 0x00DDB624, 0x00DEB724, 0x00DEB824, 0x00DEB824, 0x00DEB824, 0x00DFB925, 0x00DEB824, 0x00DEB824, 0x00DDBA22, 0x00D8B62F, 0x00C4B83D, 0x00DAAE2C, 0x00DBB122, 0x00DAB021, 0x00D9AF20, 0x00DAAF20, 0x00D9AD1E, 
        0x00D8AB1D, 0x00D7A71C, 0x00D6A31C, 0x00D4A21A, 0x00D2A119, 0x00D09E17, 0x00D09A14, 0x00CF9713, 0x00CD9612, 0x00CA9111, 0x00C68C10, 0x00C68C0C, 0x00B97809, 0x768B5204,
  0x76935E12, 0x00AA6B03, 0x00C78609, 0x00C6870B, 0x00C78B0D, 0x00C98E0E, 0x00CB910E, 0x00CF9313, 0x00D09614, 0x00CD9B10, 0x00CF9D16, 0x00D29F19, 0x00D0A416, 0x00D1A519, 0x00D6A61F, 0x00D6A91D, 0x00D8AD1D, 0x00DAAE1F, 0x00DBAF20, 0x00DAB121, 0x00D8B120, 
        0x00DAB221, 0x00DAB21F, 0x00DBB322, 0x00DDB423, 0x00DDB523, 0x00DFB624, 0x00DDB522, 0x00DBB521, 0x00DFB822, 0x00DFB723, 0x00DEB726, 0x00DCB126, 0x00DAB320, 0x00E1B11E, 0x00DFB322, 0x00DEB024, 0x00DCB11F, 0x00D9AD1F, 0x00D7AC1E, 0x00D6AC1C, 
        0x00D4AA1B, 0x00D6A51F, 0x00D6A31D, 0x00D2A119, 0x00D09E19, 0x00CF9B18, 0x00CD9613, 0x00CD9412, 0x00CC9312, 0x00C98E10, 0x00C78B0F, 0x00C78A0B, 0x00BA7707, 0x768B5205,
  0x76965F15, 0x00AA6A01, 0x00C78407, 0x00C68409, 0x00C7880C, 0x00C78A0F, 0x00C78C11, 0x00CC9412, 0x00CB9811, 0x00CD9618, 0x00CF9517, 0x00CF9B15, 0x00D4A120, 0x00D39F1E, 0x00D2A018, 0x00D8A61D, 0x00D6A81F, 0x00D8AC1E, 0x00D6AB19, 0x00DAAE1F, 0x00DBAD22, 
        0x00DAAD25, 0x00DBB421, 0x00D9B523, 0x00D6AD26, 0x00D8B324, 0x00D8B522, 0x00D9B425, 0x00DCB228, 0x00DDB325, 0x00DCB221, 0x00DCB420, 0x00DEAE23, 0x00DEAD28, 0x00D9AF21, 0x00DBAF1B, 0x00DAB01C, 0x00DBB120, 0x00D8AD1B, 0x00DCA91B, 0x00DCA81B, 
        0x00DAA619, 0x00D5A717, 0x00D0A611, 0x00CE9E12, 0x00D09A14, 0x00D49812, 0x00CF9412, 0x00CB9114, 0x00C98F12, 0x00C88B0F, 0x00C7880D, 0x00C88709, 0x00BB7705, 0x768C5207,
  0x76965F15, 0x00A86801, 0x00C48105, 0x00C48207, 0x00C5860A, 0x00C7890D, 0x00D28F10, 0x00C99208, 0x00CB9408, 0x00D79715, 0x00CC9811, 0x00C69A0B, 0x00D89E16, 0x00D6A217, 0x00C9A30D, 0x00D2A615, 0x00DAA61E, 0x00D7A319, 0x00D9A81A, 0x00D8A818, 0x00DDB41A, 
        0x00DBB119, 0x00E1AD24, 0x00D9AC13, 0x00DAB613, 0x00E2AD26, 0x00E4B229, 0x00E1B21F, 0x00DEB314, 0x00E2B81A, 0x00DDAE19, 0x00E8B026, 0x00D8A816, 0x00DBB414, 0x00DDB11D, 0x00D7AD23, 0x00D8A820, 0x00E1A320, 0x00DAA51C, 0x00D4A519, 0x00D1A318, 
        0x00D0A116, 0x00D69F1B, 0x00D79B19, 0x00D3980F, 0x00D2970F, 0x00D29811, 0x00CF9610, 0x00CB9013, 0x00C78D10, 0x00C6890D, 0x00C6860B, 0x00C78607, 0x00BA7604, 0x768B5106,
  0x76965E15, 0x00A66700, 0x00C27F03, 0x00C38106, 0x00C38408, 0x00C4870A, 0x00BD880A, 0x00CFA345, 0x00DBAE51, 0x00C48F0A, 0x00C99A26, 0x00E0B556, 0x00D59F1C, 0x00CC991C, 0x00E0BA5D, 0x00D7B03F, 0x00D0AF3F, 0x00E5CA66, 0x00E6C36A, 0x00DFBE59, 0x00D2AD29, 
        0x00D9AB1C, 0x00DAA822, 0x00E7C55C, 0x00D8B755, 0x00D4B01D, 0x00D5AD18, 0x00DFBB45, 0x00E6C870, 0x00DFBE6C, 0x00EBCA68, 0x00CDAA2C, 0x00EDD162, 0x00DEB847, 0x00D6A61C, 0x00D9B141, 0x00E6C65F, 0x00D5AC21, 0x00D9B33D, 0x00E1C360, 0x00DDC15E, 
        0x00DCBE5B, 0x00CDA629, 0x00D8AF3C, 0x00E1C069, 0x00DBB65B, 0x00CCA12C, 0x00C38E09, 0x00CC8D10, 0x00C68C0F, 0x00C5880C, 0x00C5850A, 0x00C68407, 0x00B97503, 0x768A5005,
  0x76955D09, 0x00AC6805, 0x00C27B08, 0x00C17C07, 0x00C47F09, 0x00C68309, 0x00C18002, 0x00E9C482, 0x00EFF0E7, 0x00C78B08, 0x00DEB353, 0x00FFFFFF, 0x00D8AB3A, 0x00CA9B1A, 0x00F8FFFE, 0x00E2BB5C, 0x00EAD9A1, 0x00FBF7FA, 0x00EFF0DD, 0x00F3E8C8, 0x00D7B445, 
        0x00DCA714, 0x00D8AD20, 0x00F2FAFA, 0x00F7F5DB, 0x00D7B83A, 0x00E1AF09, 0x00E4CC81, 0x00FAF8E9, 0x00F7FFFD, 0x00FBF9E8, 0x00D1AC33, 0x00FAF9E3, 0x00E7D78E, 0x00CEA101, 0x00E9CD7D, 0x00FFFFFF, 0x00D7A11A, 0x00E1CA7D, 0x00FAFFFF, 0x00F8F3E1, 
        0x00F4EFD7, 0x00D1AB40, 0x00E4C78F, 0x00FEFCFC, 0x00F1EADC, 0x00F9FAEA, 0x00D4A849, 0x00C78607, 0x00C7870D, 0x00C6830A, 0x00C68007, 0x00C38105, 0x00B17202, 0x768C5200,
  0x76946011, 0x00A76502, 0x00C07904, 0x00BF7A05, 0x00C27E07, 0x00C48207, 0x00C08100, 0x00D1A045, 0x00FDF9F0, 0x00CD952C, 0x00E3CA95, 0x00FEFFFF, 0x00E5B962, 0x00DDAD4A, 0x00F4F9EB, 0x00D2A027, 0x00EAD6A7, 0x00F0D9B4, 0x00D1AF34, 0x00DDAE35, 0x00D3A120, 
        0x00D2A20B, 0x00EAC979, 0x00F1FCF0, 0x00F3EBDA, 0x00E9CA67, 0x00D2AA18, 0x00D3AC29, 0x00E9BC52, 0x00F2F5E3, 0x00D9BA4B, 0x00D7A005, 0x00F1F2E4, 0x00E9D18F, 0x00D3A10B, 0x00E5CA7C, 0x00FDFDF9, 0x00D5A119, 0x00E1C97B, 0x00ECE4C7, 0x00D9AE3B, 
        0x00D8A72F, 0x00D1971E, 0x00E4CF8A, 0x00EBD7B9, 0x00CC9924, 0x00E9E8D6, 0x00E6C88D, 0x00BB8000, 0x00C3850A, 0x00C48208, 0x00C47E05, 0x00C17D03, 0x00B17002, 0x768E5305,
  0x7694641A, 0x00A36202, 0x00BF7602, 0x00BE7803, 0x00C07D05, 0x00C38005, 0x00C38004, 0x00C98A1D, 0x00F7F3E6, 0x00D4B35D, 0x00E9DFC1, 0x00F2ECD4, 0x00E8D59B, 0x00E9C997, 0x00F6EDD7, 0x00CB9506, 0x00E7D79F, 0x00FAF5F0, 0x00EDEFD5, 0x00F3E8C0, 0x00DDAD41, 
        0x00C89E0C, 0x00F8EFD3, 0x00E6DEA1, 0x00E6C981, 0x00F0E1AC, 0x00D3A62A, 0x00CFA316, 0x00E3B647, 0x00F7F4DF, 0x00D5B53C, 0x00D39B06, 0x00F6F8DD, 0x00F6F1E8, 0x00EDEECD, 0x00F5F2E2, 0x00FDFDFA, 0x00D5A019, 0x00DFC778, 0x00FAFDFA, 0x00F7F1D8, 
        0x00F5EDD0, 0x00CFAA3C, 0x00E0C581, 0x00FAF4E9, 0x00EBDDBF, 0x00F5F5E3, 0x00D3AA4E, 0x00C48304, 0x00C28309, 0x00C28006, 0x00C27C04, 0x00BD7A03, 0x00B06F02, 0x76905408,
  0x76915C16, 0x00AD6403, 0x00C27301, 0x00BE7404, 0x00BF7605, 0x00C27907, 0x00C07C09, 0x00C67C00, 0x00EFE3C6, 0x00EAE1C7, 0x00F3E5C9, 0x00DAB86B, 0x00F5E5D2, 0x00EEEED8, 0x00EAD09D, 0x00C98C00, 0x00E5D4A8, 0x00F0DFB8, 0x00DCB444, 0x00D2B045, 0x00D9A026, 
        0x00DDB74A, 0x00F4FAF5, 0x00DEBF68, 0x00EAC67B, 0x00F6F2E6, 0x00DDA92F, 0x00C9A71C, 0x00DFB645, 0x00F5F4DC, 0x00D8B13C, 0x00D09B08, 0x00F1EFD9, 0x00F1E2B0, 0x00E5BD59, 0x00DED0A5, 0x00FAFAF6, 0x00D5A014, 0x00E4C879, 0x00EAE9C4, 0x00D8BA54, 
        0x00D1AA4A, 0x00C79718, 0x00DDC483, 0x00F4F0E0, 0x00F8FDFA, 0x00D8BB70, 0x00C68000, 0x00C17F08, 0x00C37E08, 0x00C27C06, 0x00BF7903, 0x00BE7701, 0x00B56F03, 0x76915609,
  0x7694601E, 0x00A65E00, 0x00C07200, 0x00BC7102, 0x00BE7404, 0x00BF7605, 0x00BF7C02, 0x00BE7600, 0x00DDBC8A, 0x00F6FCFE, 0x00EFDEB8, 0x00C08B20, 0x00F2E7D5, 0x00FDFFFF, 0x00D5AD65, 0x00CB8D00, 0x00E7DAA9, 0x00F0D9A1, 0x00CF9109, 0x00DBA710, 0x00D09009, 
        0x00F1D5A8, 0x00F3EFEC, 0x00FDFDF5, 0x00ECF9F1, 0x00F5FFFF, 0x00DDC571, 0x00D7A110, 0x00DCA948, 0x00F7F8DD, 0x00D2A936, 0x00CF9805, 0x00F9F2DD, 0x00E1CA86, 0x00C48D00, 0x00DDC170, 0x00FEFBF9, 0x00D09515, 0x00E7C57F, 0x00F0DBC2, 0x00D59722, 
        0x00C6900E, 0x00CB9407, 0x00E4CB91, 0x00DCCBAB, 0x00EEDEB0, 0x00F5E3D4, 0x00C1800B, 0x00C7820B, 0x00C17B08, 0x00C07A04, 0x00BD7602, 0x00BD7501, 0x00B06800, 0x76894C01,
  0x76A47333, 0x00A15C00, 0x00BD7101, 0x00BA7001, 0x00BB7202, 0x00BC7303, 0x00BD7603, 0x00BD7700, 0x00D99F46, 0x00F5FEFF, 0x00DEBF80, 0x00C07C00, 0x00E8D3AA, 0x00FEFFF3, 0x00C89728, 0x00CF870B, 0x00E1D29C, 0x00F8F4E8, 0x00E7E6CB, 0x00EBDBB5, 0x00D8B04E, 
        0x00EEECDA, 0x00DAC26A, 0x00D2A32C, 0x00D49E1F, 0x00E9D091, 0x00F1EAD0, 0x00CE960F, 0x00DDAF49, 0x00F7F2DE, 0x00D5A937, 0x00D19603, 0x00F9F2E1, 0x00E7CD8C, 0x00D29000, 0x00DFC06B, 0x00FDFBF7, 0x00CF9012, 0x00E0C076, 0x00F6FBED, 0x00ECE8C2, 
        0x00EDE3C6, 0x00CC9F37, 0x00E2C384, 0x00E7D5B0, 0x00C8912A, 0x00F8F5E7, 0x00D2AC66, 0x00C07703, 0x00BF7707, 0x00BC7504, 0x00BB7302, 0x00BC7301, 0x00AE6500, 0x76894C04,
  0x76BB9150, 0x00995700, 0x00BF6F04, 0x00BD7001, 0x00BD7001, 0x00BD7102, 0x00BF7405, 0x00BC7503, 0x00C47E10, 0x00D5AF6C, 0x00C58E28, 0x00C78200, 0x00D09E3F, 0x00DFB664, 0x00C6880A, 0x00CF870F, 0x00D5A945, 0x00E3BE72, 0x00E1C176, 0x00DBBA66, 0x00D9AA3E, 
        0x00DFBC6D, 0x00D09916, 0x00CC9317, 0x00CD920A, 0x00D5A530, 0x00DFBF76, 0x00CB9816, 0x00D2A224, 0x00DFBA6E, 0x00D09C22, 0x00CD9109, 0x00DCBB69, 0x00D4AC42, 0x00CC930A, 0x00CFA63A, 0x00DEBF73, 0x00CC900E, 0x00D3A337, 0x00E1BE73, 0x00DBBC73, 
        0x00DDBB70, 0x00CA9421, 0x00D5A03C, 0x00CEA350, 0x00C78000, 0x00D0A54D, 0x00CF9F4F, 0x00BE7604, 0x00BC7303, 0x00BB7202, 0x00B97001, 0x00BA6F02, 0x00AD6302, 0x76905916,
  0x76D9BC79, 0x00955C0C, 0x00BB6B01, 0x00C07101, 0x00BF7001, 0x00BF7001, 0x00BB7202, 0x00BC7404, 0x00BD7505, 0x00BD7500, 0x00C17B02, 0x00C47F05, 0x00C58103, 0x00C58103, 0x00C9860A, 0x00CA880B, 0x00C98807, 0x00C98805, 0x00CA8906, 0x00C98C08, 0x00C98F0C, 
        0x00C98E0A, 0x00CB9110, 0x00CD9310, 0x00CD9311, 0x00CC920E, 0x00CC920A, 0x00CD9510, 0x00CC940F, 0x00CC910B, 0x00CE9311, 0x00CE9412, 0x00CC900C, 0x00CB900D, 0x00CB910F, 0x00CA8F0C, 0x00C88B09, 0x00C78D0E, 0x00C78B0B, 0x00C98706, 0x00C98504, 
        0x00C78302, 0x00C78407, 0x00C58104, 0x00C37F01, 0x00C27E03, 0x00C07900, 0x00BE7600, 0x00BD7604, 0x00BB7101, 0x00BB7101, 0x00BA7000, 0x00BB7106, 0x00995500, 0x76BD9359,
  0x72E4D09D, 0x00A67C36, 0x00AD6700, 0x00BF7101, 0x00BF7001, 0x00BE7001, 0x00BA7001, 0x00BA7202, 0x00BB7303, 0x00BC7404, 0x00BE7704, 0x00C07B04, 0x00C27E05, 0x00C38007, 0x00C58109, 0x00C7840A, 0x00C7860C, 0x00C8870C, 0x00C9880D, 0x00C7890E, 0x00C78B0F, 
        0x00C88C10, 0x00C88D10, 0x00C98E10, 0x00C98E10, 0x00C98F0F, 0x00C9910F, 0x00C9910F, 0x00C9910F, 0x00CA9011, 0x00CA8F11, 0x00CA8F11, 0x00C98E10, 0x00C98E10, 0x00C88D0E, 0x00C68C0E, 0x00C5890D, 0x00C4880C, 0x00C5880C, 0x00C7850C, 0x00C6830A, 
        0x00C48108, 0x00C48008, 0x00C27F06, 0x00C07E04, 0x00BF7A03, 0x00BD7702, 0x00BB7403, 0x00BB7203, 0x00BB7101, 0x00BB7101, 0x00BA7000, 0x00AF6900, 0x0093611A, 0x72E9CEA5,
  0xF4F9E1C9, 0x00D1B284, 0x00995900, 0x00BC6E01, 0x00BE7001, 0x00BF7001, 0x00BA6F01, 0x00B97001, 0x00BA7202, 0x00BA7202, 0x00BB7403, 0x00BE7803, 0x00BF7A04, 0x00C17C06, 0x00C37F08, 0x00C48109, 0x00C58508, 0x00C68608, 0x00C78709, 0x00C6890A, 0x00C5890A, 
        0x00C58A0A, 0x00C68B0C, 0x00C78B0F, 0x00C78B0F, 0x00C78B0F, 0x00C78D0E, 0x00C78D0E, 0x00C78D0E, 0x00C88C0F, 0x00C88C10, 0x00C88C0F, 0x00C88C0F, 0x00C78A0E, 0x00C5890D, 0x00C4880D, 0x00C3870C, 0x00C2860B, 0x00C3850A, 0x00C58307, 0x00C48206, 
        0x00C27F04, 0x00C27E05, 0x00C07C06, 0x00BE7A04, 0x00BD7702, 0x00BB7401, 0x00BA7101, 0x00BA7102, 0x00BB7101, 0x00BB7101, 0x00BA7000, 0x00A76400, 0x26AE8546, 0xF9896124,
  0xFEFFFFFF, 0xB1E0CFAF, 0x0BA6793A, 0x00AB6705, 0x00B77103, 0x00C07303, 0x00C17003, 0x00BF7001, 0x00BF7001, 0x00BE7102, 0x00BC7202, 0x00BD7303, 0x00BE7503, 0x00BE7802, 0x00C07A04, 0x00C27C05, 0x00C27D04, 0x00C47F06, 0x00C58108, 0x00C68307, 0x00C78407, 
        0x00C78408, 0x00C78709, 0x00C6880A, 0x00C7890C, 0x00C78A0D, 0x00C6890E, 0x00C6890E, 0x00C6890E, 0x00C7890D, 0x00C7890C, 0x00C6880A, 0x00C6880A, 0x00C6880A, 0x00C5870A, 0x00C58609, 0x00C68309, 0x00C68209, 0x00C58007, 0x00C27C06, 0x00C17B05, 
        0x00C07A04, 0x00C07705, 0x00BF7505, 0x00BE7404, 0x00BF7103, 0x00BF7001, 0x00BF7001, 0x00BF7201, 0x00BB7200, 0x00BD7104, 0x00AF6A05, 0x0C9E6A25, 0xAECBB390, 0xFDFFFFFF,
  0xFF000000, 0xFF000000, 0xABC1A57D, 0x059B6C26, 0x00AD6702, 0x00BC6F02, 0x00BE6F01, 0x00BF7001, 0x00BF7001, 0x00BD7001, 0x00BA7101, 0x00BC7202, 0x00BC7302, 0x00BB7501, 0x00BD7703, 0x00BE7804, 0x00BE7903, 0x00C07A04, 0x00C27C06, 0x00C27E05, 0x00C27F05, 
        0x00C38006, 0x00C48108, 0x00C58209, 0x00C68309, 0x00C6840A, 0x00C5840A, 0x00C4840A, 0x00C5840A, 0x00C6840A, 0x00C68309, 0x00C58208, 0x00C58309, 0x00C58209, 0x00C48107, 0x00C38007, 0x00C27E07, 0x00C27D06, 0x00C07C06, 0x00BF7905, 0x00BE7804, 
        0x00BD7703, 0x00BD7504, 0x00BE7304, 0x00BC7202, 0x00BD7001, 0x00BF7001, 0x00BF7001, 0x00BB7001, 0x00B97204, 0x00B46800, 0x059F6920, 0xABB09066, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xB5C7B597, 0x00AA7733, 0x00A96200, 0x00BC7001, 0x00C07101, 0x00BF7001, 0x00BC7001, 0x00BA7000, 0x00BB7101, 0x00BB7101, 0x00B87000, 0x00BB7303, 0x00BB7403, 0x00BB7401, 0x00BC7602, 0x00BE7804, 0x00BF7A04, 0x00BF7B03, 
        0x00BF7C04, 0x00C27D06, 0x00C37D07, 0x00C47E08, 0x00C47F08, 0x00C48107, 0x00C48107, 0x00C48107, 0x00C47F08, 0x00C47E08, 0x00C37D07, 0x00C37D07, 0x00C37D07, 0x00C27C06, 0x00C17B05, 0x00BF7905, 0x00BD7904, 0x00BD7704, 0x00BD7505, 0x00BC7404, 
        0x00BA7302, 0x00BB7202, 0x00BB7101, 0x00BA7100, 0x00BC7001, 0x00BF7001, 0x00C07001, 0x00BD7103, 0x00B36900, 0x00AA702B, 0xB5BBA687, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xBEF2EDE3, 0x2C9A7031, 0x009E5B00, 0x00B66601, 0x00BD7104, 0x00B97101, 0x00BB7102, 0x00B97001, 0x00BA7102, 0x00BB7000, 0x00BB7000, 0x00BB7000, 0x00BA7200, 0x00BA7200, 0x00BA7200, 0x00B97500, 0x00B97600, 
        0x00B97600, 0x00BA7701, 0x00BC7902, 0x00BC7902, 0x00BD7A03, 0x00BD7A03, 0x00BD7A03, 0x00BD7A03, 0x00BD7A03, 0x00BD7A03, 0x00BD7A03, 0x00BC7902, 0x00BB7801, 0x00BB7801, 0x00BB7602, 0x00BC7303, 0x00BC7303, 0x00BB7302, 0x00B97100, 0x00B97100, 
        0x00B97100, 0x00BC7202, 0x00BC7001, 0x00BC6E00, 0x00BE7103, 0x00C37502, 0x00BA7100, 0x00A36100, 0x2B9E6A2A, 0xCBE8DFD6, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xF2FFFFFF, 0x38B3966B, 0x0393621D, 0x00A8690D, 0x00AE6904, 0x00AF6902, 0x00B26B01, 0x00B56C04, 0x00B76B04, 0x00B86B04, 0x00B76B04, 0x00B56B04, 0x00B56B04, 0x00B56B04, 0x00B56D04, 0x00B56F04, 
        0x00B56F04, 0x00B67004, 0x00B77005, 0x00B77005, 0x00B77006, 0x00B87106, 0x00B87106, 0x00B87106, 0x00B87106, 0x00B87106, 0x00B87106, 0x00B77005, 0x00B76F05, 0x00B77005, 0x00B76F05, 0x00B66E03, 0x00B66E03, 0x00B66D03, 0x00B56C04, 0x00B56B04, 
        0x00B56B04, 0x00B56A01, 0x00B46B01, 0x00B66D04, 0x00AA6805, 0x00A06607, 0x0A905611, 0x38B28A62, 0xF2FAFAFC, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0x89E9D7B4, 0x5DAE864D, 0x5E87520C, 0x5E8C5402, 0x5E935703, 0x5E945603, 0x5E945401, 0x5E945401, 0x5E935401, 0x5E925401, 0x5E925401, 0x5E925401, 0x5E935400, 0x5E945500, 
        0x5E945500, 0x5E945500, 0x5E945500, 0x5E945500, 0x5E945500, 0x5E955600, 0x5E955600, 0x5E955600, 0x5E955600, 0x5E955600, 0x5E955600, 0x5E955600, 0x5E945500, 0x5E945500, 0x5E935500, 0x5E935500, 0x5E935500, 0x5E935500, 0x5E935500, 0x5E935401, 
        0x5E935401, 0x5E955602, 0x5E955703, 0x5E8D5403, 0x5E8E5108, 0x62A16C35, 0xABC0A883, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP bmweather_icon = {
  55, // xSize
  55, // ySize
  220, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)_acweather_icon,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/