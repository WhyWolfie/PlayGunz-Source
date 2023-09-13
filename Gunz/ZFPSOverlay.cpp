#include "stdafx.h"
#include "ZFPSOverlay.H"
#include "RealSpace2.h"
#include "Mint4R2.h"
 
extern MDrawContextR2 *g_pDC;
 
namespace FPSRunGame 
{ 
namespace FPSPlayGunZ
{
 
	std::auto_ptr<FPSOverlay> FPSOverlay::instance;
 
	FPSOverlay::FPSOverlay()
		: bEnabled(true) 
	{
		
	}
 
	FPSOverlay::~FPSOverlay()
	{
		
	}
 
	FPSOverlay *FPSOverlay::Get()
	{
		if (!instance.get())
			instance = std::auto_ptr<FPSOverlay>(new FPSOverlay);
 
		return instance.get();
	}
 
	void FPSOverlay::Toggle(bool bEnabled)
	{
		this->bEnabled = bEnabled;
	}
 
	void FPSOverlay::Draw()
	{
		if (!bEnabled)
			return;

		int x;
		char buf[512] = { 0 };

		//sprintf(buf, "FPS: %g", g_fFPS);

		x = g_pDC->GetClipRect().w - g_pDC->GetFont()->GetWidth(buf) - 10;
		g_pDC->Text(x, 10, buf);
	}
  }
}