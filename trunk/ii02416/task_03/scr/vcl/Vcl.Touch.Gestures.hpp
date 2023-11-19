// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'Vcl.Touch.Gestures.pas' rev: 35.00 (Windows)

#ifndef Vcl_Touch_GesturesHPP
#define Vcl_Touch_GesturesHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.RtsCom.hpp>
#include <Winapi.TpcShrd.hpp>
#include <Winapi.MsInkAut.hpp>
#include <Winapi.Windows.hpp>
#include <System.Types.hpp>
#include <System.Classes.hpp>
#include <System.SysUtils.hpp>
#include <System.Diagnostics.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.ActnList.hpp>
#include <Winapi.Messages.hpp>
#include <System.Generics.Collections.hpp>
#include <System.Generics.Defaults.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcl
{
namespace Touch
{
namespace Gestures
{
//-- forward type declarations -----------------------------------------------
class DELPHICLASS TGestureEngine;
class DELPHICLASS TPlatformGestureEngine;
class DELPHICLASS TMouseGestureEngine;
class DELPHICLASS TCustomGestureRecognizer;
class DELPHICLASS TGestureRecognizer;
struct TStandardGestureData;
//-- type declarations -------------------------------------------------------
typedef System::Generics::Collections::TList__1<System::Types::TPoint>* TGesturePoints;

typedef System::Generics::Collections::TList__1<Vcl::Controls::TCustomGestureCollectionItem*>* TGestureList;

#ifndef _WIN64
typedef System::TMetaClass* TGestureEngineClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TGestureEngineClass);
#endif /* _WIN64 */

#ifndef _WIN64
typedef System::TMetaClass* TCustomGestureRecognizerClass;
#else /* _WIN64 */
_DECLARE_METACLASS(System::TMetaClass, TCustomGestureRecognizerClass);
#endif /* _WIN64 */

class PASCALIMPLEMENTATION TGestureEngine : public Vcl::Controls::TCustomGestureEngine
{
	typedef Vcl::Controls::TCustomGestureEngine inherited;
	
private:
	static TGestureEngineClass FDefaultEngineClass;
	static TCustomGestureRecognizerClass FDefaultRecognizerClass;
	static TCustomGestureRecognizer* FRecognizer;
	static int FSensitivity;
	static int FTimeOut;
	// __classmethod void __fastcall Create@();
	// __classmethod void __fastcall Destroy@();
	static TCustomGestureRecognizer* __fastcall GetRecognizer();
	static void __fastcall SetDefaultRecognizerClass(const TCustomGestureRecognizerClass Value);
	static void __fastcall SetSensitivity(const int Value);
	Vcl::Controls::TWinControl* FControl;
	System::Types::TPoint FInitialPoint;
	System::Generics::Collections::TList__1<System::Types::TPoint>* FPoints;
	System::Diagnostics::TStopwatch FStopWatch;
	Vcl::Controls::TControl* FTargetControl;
	int __fastcall GetPointCount();
	Vcl::Controls::TGesturePointArray __fastcall GetPoints();
	bool __fastcall GetTimerExpired();
	void __fastcall SetInitialPoint(const System::Types::TPoint &Value);
	
protected:
	void __fastcall AddPoint(int X, int Y);
	void __fastcall BroadcastGesture(Vcl::Controls::TControl* AControl, const Vcl::Controls::TGestureEventInfo &EventInfo);
	void __fastcall ClearPoints();
	__classmethod void __fastcall GetCompleteGestureList(Vcl::Controls::TControl* AControl, System::Generics::Collections::TList__1<Vcl::Controls::TCustomGestureCollectionItem*>* AGestureList);
	virtual Vcl::Controls::TCustomGestureEngine::TGestureEngineFlags __fastcall GetFlags();
	void __fastcall ResetTimer();
	void __fastcall StartTimer();
	__property Vcl::Controls::TWinControl* Control = {read=FControl};
	__property System::Types::TPoint InitialPoint = {read=FInitialPoint, write=SetInitialPoint};
	__property int PointCount = {read=GetPointCount, nodefault};
	__property Vcl::Controls::TGesturePointArray Points = {read=GetPoints};
	__property Vcl::Controls::TControl* TargetControl = {read=FTargetControl, write=FTargetControl};
	__property bool TimerExpired = {read=GetTimerExpired, nodefault};
	
public:
	__classmethod void __fastcall CreateEngine(Vcl::Controls::TControl* AControl);
	__classmethod bool __fastcall IsGesture(const System::Types::TPoint *Points, const int Points_High, System::Generics::Collections::TList__1<Vcl::Controls::TCustomGestureCollectionItem*>* Items, Vcl::Controls::TGestureTypes GestureTypes, Vcl::Controls::TGestureEventInfo &EventInfo);
	/* static */ __property TGestureEngineClass DefaultEngineClass = {read=FDefaultEngineClass, write=FDefaultEngineClass};
	/* static */ __property TCustomGestureRecognizerClass DefaultRecognizerClass = {read=FDefaultRecognizerClass, write=SetDefaultRecognizerClass};
	/* static */ __property TCustomGestureRecognizer* Recognizer = {read=GetRecognizer};
	/* static */ __property int Sensitivity = {read=FSensitivity, write=SetSensitivity, nodefault};
	/* static */ __property int TimeOut = {read=FTimeOut, write=FTimeOut, nodefault};
	__fastcall virtual TGestureEngine(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TGestureEngine();
	virtual void __fastcall Notification(const Winapi::Messages::TMessage &Message);
};


class PASCALIMPLEMENTATION TPlatformGestureEngine : /*[[sealed]]*/ public TGestureEngine
{
	typedef TGestureEngine inherited;
	
	
private:
	class DELPHICLASS TRealTimeStylus;
#ifndef _WIN64
	#pragma pack(push,4)
#endif /* not _WIN64 */
	class PASCALIMPLEMENTATION TRealTimeStylus : public System::TInterfacedObject
	{
		typedef System::TInterfacedObject inherited;
		
	private:
		bool FEnabled;
		TGestureEngine* FEngine;
		_di_IGestureRecognizer FGestureRecognizer;
		System::Generics::Collections::TList__1<Vcl::Controls::TCustomGestureCollectionItem*>* FGestureList;
		HWND FHandle;
		_di_IRealTimeStylus FRealTimeStylus;
		void __fastcall AddStylusAsyncPlugin(_di_IStylusAsyncPlugin APlugin);
		void __fastcall AddStylusSyncPlugin(_di_IStylusSyncPlugin APlugin);
		void __fastcall SetEnabled(const bool Value);
		void __fastcall SetHandle(const HWND Value);
		__classmethod int __fastcall StandardGestureMap(Vcl::Controls::TStandardGesture AGesture);
		__classmethod int __fastcall StylusGestureMap(int AGesture);
		
	public:
		HRESULT __stdcall RealTimeStylusEnabled(_di_IRealTimeStylus piRtsSrc, unsigned cTcidCount, unsigned &pTcids);
		HRESULT __stdcall RealTimeStylusDisabled(_di_IRealTimeStylus piRtsSrc, unsigned cTcidCount, unsigned &pTcids);
		HRESULT __stdcall StylusInRange(_di_IRealTimeStylus piRtsSrc, unsigned tcid, unsigned sid);
		HRESULT __stdcall StylusOutOfRange(_di_IRealTimeStylus piRtsSrc, unsigned tcid, unsigned sid);
		HRESULT __stdcall StylusDown(_di_IRealTimeStylus piRtsSrc, const StylusInfo &pStylusInfo, unsigned cPropCountPerPkt, System::PInteger pPacket, System::PInteger &ppInOutPkt);
		HRESULT __stdcall StylusUp(_di_IRealTimeStylus piRtsSrc, const StylusInfo &pStylusInfo, unsigned cPropCountPerPkt, System::PInteger pPacket, System::PInteger &ppInOutPkt);
		HRESULT __stdcall StylusButtonDown(_di_IRealTimeStylus piRtsSrc, unsigned sid, const GUID &pGuidStylusButton, System::Types::TPoint &pStylusPos);
		HRESULT __stdcall StylusButtonUp(_di_IRealTimeStylus piRtsSrc, unsigned sid, const GUID &pGuidStylusButton, System::Types::TPoint &pStylusPos);
		HRESULT __stdcall InAirPackets(_di_IRealTimeStylus piRtsSrc, const StylusInfo &pStylusInfo, unsigned cPktCount, unsigned cPktBuffLength, System::PInteger pPackets, unsigned &pcInOutPkts, System::PInteger &ppInOutPkts);
		HRESULT __stdcall Packets(_di_IRealTimeStylus piRtsSrc, const StylusInfo &pStylusInfo, unsigned cPktCount, unsigned cPktBuffLength, System::PInteger pPackets, unsigned &pcInOutPkts, System::PInteger &ppInOutPkts);
		HRESULT __stdcall CustomStylusDataAdded(_di_IRealTimeStylus piRtsSrc, const GUID &pGuidId, unsigned cbData, System::PByte pbData);
#ifndef _WIN64
		HRESULT __stdcall SystemEvent(_di_IRealTimeStylus piRtsSrc, unsigned tcid, unsigned sid, System::Word event, SYSTEM_EVENT_DATA eventdata);
#else /* _WIN64 */
		HRESULT __stdcall SystemEvent(_di_IRealTimeStylus piRtsSrc, unsigned tcid, unsigned sid, System::Word event, const SYSTEM_EVENT_DATA &eventdata);
#endif /* _WIN64 */
		HRESULT __stdcall TabletAdded(_di_IRealTimeStylus piRtsSrc, _di_IInkTablet piTablet);
		HRESULT __stdcall TabletRemoved(_di_IRealTimeStylus piRtsSrc, int iTabletIndex);
		HRESULT __stdcall Error(_di_IRealTimeStylus piRtsSrc, _di_IStylusPlugin piPlugin, RealTimeStylusDataInterest dataInterest, HRESULT hrErrorCode, NativeInt &lptrKey);
		HRESULT __stdcall UpdateMapping(_di_IRealTimeStylus piRtsSrc);
		HRESULT __stdcall DataInterest(/* out */ RealTimeStylusDataInterest &pDataInterest);
		__fastcall virtual TRealTimeStylus(TGestureEngine* Engine)/* overload */;
		__fastcall virtual ~TRealTimeStylus();
		bool __fastcall Initialize();
		bool __fastcall EnableStylus(bool Value, bool Silent);
		void __fastcall Uninitialize();
		__property bool Enabled = {read=FEnabled, write=SetEnabled, nodefault};
#ifndef _WIN64
		__property HWND Handle = {read=FHandle, write=SetHandle, nodefault};
#else /* _WIN64 */
		__property HWND Handle = {read=FHandle, write=SetHandle};
#endif /* _WIN64 */
private:
		void *__IStylusAsyncPlugin;	// IStylusAsyncPlugin 
		
public:
		#if defined(MANAGED_INTERFACE_OPERATORS)
		// {A7CCA85A-31BC-4CD2-AADC-3289A3AF11C8}
		operator _di_IStylusAsyncPlugin()
		{
			_di_IStylusAsyncPlugin intf;
			this->GetInterface(intf);
			return intf;
		}
		#else
		operator IStylusAsyncPlugin*(void) { return (IStylusAsyncPlugin*)&__IStylusAsyncPlugin; }
		#endif
		
	};
	
#ifndef _WIN64
	#pragma pack(pop)
#endif /* not _WIN64 */
	
	
private:
	typedef System::DynamicArray<TRealTimeStylus*> _TPlatformGestureEngine__1;
	
	
private:
	static bool FSupported;
	static bool FSupportedTested;
	_TPlatformGestureEngine__1 FDeferredCleanupList;
	TRealTimeStylus* FStylusGestureEngine;
	
protected:
	virtual bool __fastcall GetActive();
	virtual void __fastcall SetActive(const bool Value);
	
public:
	__fastcall virtual TPlatformGestureEngine(Vcl::Controls::TWinControl* AControl);
	__fastcall virtual ~TPlatformGestureEngine();
	__classmethod virtual bool __fastcall Supported();
};


class PASCALIMPLEMENTATION TMouseGestureEngine : /*[[sealed]]*/ public TGestureEngine
{
	typedef TGestureEngine inherited;
	
private:
	bool FActive;
	
protected:
	virtual bool __fastcall GetActive();
	virtual Vcl::Controls::TCustomGestureEngine::TGestureEngineFlags __fastcall GetFlags();
	virtual void __fastcall SetActive(const bool Value);
	
public:
	__fastcall virtual ~TMouseGestureEngine();
	virtual void __fastcall Notification(const Winapi::Messages::TMessage &Message);
	__classmethod virtual bool __fastcall Supported();
public:
	/* TGestureEngine.Create */ inline __fastcall virtual TMouseGestureEngine(Vcl::Controls::TWinControl* AControl) : TGestureEngine(AControl) { }
	
};


#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TCustomGestureRecognizer : public System::TObject
{
	typedef System::TObject inherited;
	
public:
	virtual float __fastcall Match(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, const Vcl::Controls::TGestureOptions Options, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin) = 0 ;
	virtual Vcl::Controls::TGesturePointArray __fastcall NormalizePoints(const System::Types::TPoint *Points, const int Points_High) = 0 ;
	virtual Vcl::Controls::TGesturePointArray __fastcall ScalePoints(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, int MinScale, bool Scaling = false) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TCustomGestureRecognizer() : System::TObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomGestureRecognizer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

class PASCALIMPLEMENTATION TGestureRecognizer : public TCustomGestureRecognizer
{
	typedef TCustomGestureRecognizer inherited;
	
	
private:
	typedef void __fastcall (__closure *TPreCallback)(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin);
	
	typedef void __fastcall (__closure *TPostCallback)(const double *Percentages, const int Percentages_High, const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, Vcl::Controls::TGestureID GestureID);
	
	typedef int __fastcall (__closure *TGestureFunc)(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin, double *Percentages, const int Percentages_High);
	
	
private:
	int __fastcall IsPointsGesture(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin, double *Percentages, const int Percentages_High);
	int __fastcall IsScratchout(const System::Types::TPoint *Points, const int Points_High, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin, double *Percentages, const int Percentages_High);
	Vcl::Controls::TGesturePointArray __fastcall CopyPoints(System::Generics::Collections::TList__1<System::Types::TPoint>* Points);
	Vcl::Controls::TGesturePointArray __fastcall InterpolatePoints(const System::Types::TPoint *Points, const int Points_High);
	Vcl::Controls::TGesturePointArray __fastcall RemoveDuplicates(const System::Types::TPoint *Points, const int Points_High);
	Vcl::Controls::TGesturePointArray __fastcall RotatePoints(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, int ErrorMargin, double &Angle);
	
protected:
	TPreCallback FPreCallback;
	TPostCallback FPostCallback;
	
public:
	virtual float __fastcall Match(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, const Vcl::Controls::TGestureOptions Options, Vcl::Controls::TGestureID GestureID, int Deviation, int ErrorMargin);
	virtual Vcl::Controls::TGesturePointArray __fastcall NormalizePoints(const System::Types::TPoint *Points, const int Points_High);
	virtual Vcl::Controls::TGesturePointArray __fastcall ScalePoints(const System::Types::TPoint *Points, const int Points_High, const System::Types::TPoint *GesturePoints, const int GesturePoints_High, int MinScale, bool Scaling = false);
public:
	/* TObject.Create */ inline __fastcall TGestureRecognizer() : TCustomGestureRecognizer() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TGestureRecognizer() { }
	
};


struct DECLSPEC_DRECORD TStandardGestureData
{
public:
	Vcl::Controls::TGesturePointArray Points;
	Vcl::Controls::TGestureID GestureID;
	Vcl::Controls::TGestureOptions Options;
	int Deviation;
	int ErrorMargin;
};


//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE bool __fastcall GestureToIdent(int ID, System::UnicodeString &Ident);
extern DELPHI_PACKAGE bool __fastcall IdentToGesture(const System::UnicodeString Ident, int &ID);
extern DELPHI_PACKAGE bool __fastcall FindStandardGesture(Vcl::Controls::TGestureID AGestureID, TStandardGestureData &AGestureData)/* overload */;
extern DELPHI_PACKAGE bool __fastcall FindStandardGesture(const System::UnicodeString AName, Vcl::Controls::TGestureID &AGestureID)/* overload */;
}	/* namespace Gestures */
}	/* namespace Touch */
}	/* namespace Vcl */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH_GESTURES)
using namespace Vcl::Touch::Gestures;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL_TOUCH)
using namespace Vcl::Touch;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCL)
using namespace Vcl;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Vcl_Touch_GesturesHPP
