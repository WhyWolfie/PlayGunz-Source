#pragma once
#include <memory>
namespace FPSRunGame 
{ 
namespace FPSPlayGunZ
{
	class FPSOverlay
	{
	public:
		~FPSOverlay();
		static FPSOverlay *Get();
		void Toggle(bool bEnabled);
		void Draw();

	protected:
		static std::auto_ptr<FPSOverlay> instance;
		bool bEnabled;

		FPSOverlay();
	};
}}