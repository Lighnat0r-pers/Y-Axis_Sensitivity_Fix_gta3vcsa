#include "stdafx.h"
#include "CPatch.h"

#define gGameVersion (*(unsigned int *)0x601048)
#define GTA_3_1_0     0x3A83126F
#define GTA_3_1_1     0x3F8CCCCD
#define GTA_3_STEAM     0x47BDA5
#define GTA_VC_1_0     0x53FF1B8B
#define GTA_VC_STEAM     0xF04F883
#define GTA_VC_1_1     0x783EE8
#define GTA_VC_JP     0x5E5F5D60
#define GTA_SA_1_0     0xCE8B168B
#define GTA_SA_1_1     0x0
#define GTA_SA_STEAM     0x1


void Thread()
{
		switch(gGameVersion)
		{
			case GTA_3_1_0:
				CPatch::SetInt(0x45AB30+0x4CA+0x2, 0x6FAE8C);
				CPatch::SetInt(0x45FF70+0x165+0x2, 0x6FAE8C);
				CPatch::SetInt(0x460E00+0x23D+0x2, 0x6FAE8C);
				CPatch::SetInt(0x461AF0+0x23D+0x2, 0x6FAE8C);
				CPatch::SetInt(0x462420+0x26A+0x2, 0x6FAE8C);
				//sub_4856F0+15B1 fstp    ds:flt_6FAE90    
				//sub_4856F0+1620 fstp    ds:flt_6FAE90    
				CPatch::SetInt(0x488CC0+0xC1+0x1, 0x6FAE8C);
				CPatch::SetInt(0x488EE0+0x126+0x1, 0x6FAE8C);
				//sub_48B210+214  fstp    ds:flt_6FAE90    
			break;

			case GTA_3_1_1:
				CPatch::SetInt(0x45AB30+0x4CA+0x2, 0x6FAE8C);
				CPatch::SetInt(0x45FF70+0x165+0x2, 0x6FAE8C);
				CPatch::SetInt(0x460E00+0x186+0x2, 0x6FAE8C);
				CPatch::SetInt(0x461B00+0x23D+0x2, 0x6FAE8C);
				CPatch::SetInt(0x462430+0x26A+0x2, 0x6FAE8C);
				//sub_4857C0+15B1 fstp    ds:flt_6FAE90    
				//sub_4857C0+1620 fstp    ds:flt_6FAE90    
				CPatch::SetInt(0x488DC0+0xC1+0x1, 0x6FAE8C);
				CPatch::SetInt(0x488FE0+0x138+0x1, 0x6FAE8C);
				//sub_48B300+214  fstp    ds:flt_6FAE90    
			break;

			case GTA_3_STEAM:
				CPatch::SetInt(0x45AB30+0x4CA+0x2, 0x70AFCC);
				CPatch::SetInt(0x45FF70+0x165+0x2, 0x70AFCC);
				CPatch::SetInt(0x460E00+0x186+0x2, 0x70AFCC);
				CPatch::SetInt(0x461B00+0x23D+0x2, 0x70AFCC);
				CPatch::SetInt(0x462430+0x26A+0x2, 0x70AFCC);
				//sub_4857C0+15B1 fstp    ds:flt_70AFD0    
				//sub_4857C0+1620 fstp    ds:flt_70AFD0    
				CPatch::SetInt(0x488DC0+0xC1+0x1, 0x70AFCC);
				CPatch::SetInt(0x488FE0+0x138+0x1, 0x70AFCC);
				//sub_48B290+214  fstp    ds:flt_70AFD0    
			break;

			case GTA_VC_1_0:
				//CCamera__create+39F mov     ds:flt_A0D964, 0.003
				CPatch::SetInt(0x479410+0x2E0+0x2, 0x94DBD0);
				CPatch::SetInt(0x47A20E+0x27D+0x2, 0x94DBD0); 
				CPatch::SetInt(0x47AE27+0x1CC+0x2, 0x94DBD0);
				CPatch::SetInt(0x47BE8F+0x22E+0x2, 0x94DBD0);
				CPatch::SetInt(0x481AB3+0x4FE+0x2, 0x94DBD0);
			break;

			case GTA_VC_1_1:
				//sub_46F108+39F mov     ds:dword_A0D96C, 3B449BA6h
				CPatch::SetInt(0x479410+0x2E0+0x2, 0x94DBD8);  
				CPatch::SetInt(0x47A20E+0x27D+0x2, 0x94DBD8);
				CPatch::SetInt(0x47AE27+0x1CC+0x2, 0x94DBD8);
				CPatch::SetInt(0x47BE8F+0x22E+0x2, 0x94DBD8);
				CPatch::SetInt(0x481AB3+0x4FE+0x2, 0x94DBD8);
			break;
			
			case GTA_VC_JP:
				CPatch::SetInt(0x4797E7+0x2E0+0x2, 0x94ABD8);  
				CPatch::SetInt(0x47A5E5+0x27D+0x2, 0x94ABD8);
				CPatch::SetInt(0x47B1FE+0x1CC+0x2, 0x94ABD8);
				CPatch::SetInt(0x47C266+0x22E+0x2, 0x94ABD8);
				CPatch::SetInt(0x481E8A+0x4FE+0x2, 0x94ABD8);			
			break;

			case GTA_VC_STEAM:
				//sub_46EFE8+39F mov     ds:dword_A0C96C, 0.003
				CPatch::SetInt(0x4792F0+0x2E0+0x2, 0x94CBD8);  
				CPatch::SetInt(0x47A0EE+0x27D+0x2, 0x94CBD8);  
				CPatch::SetInt(0x47AD07+0x1CC+0x2, 0x94CBD8);  
				CPatch::SetInt(0x47BD6F+0x22E+0x2, 0x94CBD8);  
				CPatch::SetInt(0x481993+0x4FE+0x2, 0x94CBD8);  
			break;	

			case GTA_SA_1_0:
				CPatch::SetInt(0x50EB70+0x4D6+0x2, 0xB6EC1C); 
				CPatch::SetInt(0x50F970+0x1B6+0x2, 0xB6EC1C); 
				CPatch::SetInt(0x5105C0+0x666+0x2, 0xB6EC1C); 
				CPatch::SetInt(0x511B50+0x2B8+0x2, 0xB6EC1C); 
				CPatch::SetInt(0x521500+0xD8C+0x2, 0xB6EC1C); 
				//CCamera__init+294 mov     flt_B6EC18, 0.0015
			break;	

			case GTA_SA_1_1:

			break;

			case GTA_SA_STEAM:

			break;
		}
	return;
}




BOOL APIENTRY DllMain(HMODULE hModule, DWORD reason, LPVOID lpReserved)
{
    if(reason==DLL_PROCESS_ATTACH)
    {
		Thread();
    }
    return TRUE;
}

