// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'VCLEditors.pas' rev: 35.00 (Windows)

#ifndef VcleditorsHPP
#define VcleditorsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Winapi.Messages.hpp>
#include <System.Types.hpp>
#include <System.UITypes.hpp>
#include <System.Classes.hpp>
#include <System.Actions.hpp>
#include <Winapi.Windows.hpp>
#include <Vcl.Graphics.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <DesignIntf.hpp>
#include <DesignEditors.hpp>
#include <DesignMenus.hpp>
#include <Vcl.ActnList.hpp>
#include <Vcl.ComCtrls.hpp>

//-- user supplied -----------------------------------------------------------

namespace Vcleditors
{
//-- forward type declarations -----------------------------------------------
__interface DELPHIINTERFACE ICustomPropertyDrawing;
typedef System::DelphiInterface<ICustomPropertyDrawing> _di_ICustomPropertyDrawing;
__interface DELPHIINTERFACE ICustomPropertyDrawing80;
typedef System::DelphiInterface<ICustomPropertyDrawing80> _di_ICustomPropertyDrawing80;
__interface DELPHIINTERFACE ICustomPropertyMessage;
typedef System::DelphiInterface<ICustomPropertyMessage> _di_ICustomPropertyMessage;
__interface DELPHIINTERFACE ICustomPropertyListDrawing;
typedef System::DelphiInterface<ICustomPropertyListDrawing> _di_ICustomPropertyListDrawing;
class DELPHICLASS TFontNameProperty;
class DELPHICLASS TFontCharsetProperty;
class DELPHICLASS TImeNameProperty;
class DELPHICLASS TColorProperty;
class DELPHICLASS TBrushStyleProperty;
class DELPHICLASS TPenStyleProperty;
class DELPHICLASS TCursorProperty;
class DELPHICLASS TFontProperty;
class DELPHICLASS TModalResultProperty;
class DELPHICLASS TShortCutProperty;
class DELPHICLASS TFileNameProperty;
class DELPHICLASS TMPFilenameProperty;
class DELPHICLASS TTabOrderProperty;
class DELPHICLASS TCaptionProperty;
class DELPHICLASS TBooleanProperty;
class DELPHICLASS TSetProperty;
class DELPHICLASS TSetElementProperty;
class DELPHICLASS TMonthCalendar;
class DELPHICLASS TDateProperty;
__interface DELPHIINTERFACE ISelectionMessage;
typedef System::DelphiInterface<ISelectionMessage> _di_ISelectionMessage;
__interface DELPHIINTERFACE ISelectionMessageList;
typedef System::DelphiInterface<ISelectionMessageList> _di_ISelectionMessageList;
__interface DELPHIINTERFACE ICustomDesignForm;
typedef System::DelphiInterface<ICustomDesignForm> _di_ICustomDesignForm;
__interface DELPHIINTERFACE ICustomDesignForm80;
typedef System::DelphiInterface<ICustomDesignForm80> _di_ICustomDesignForm80;
class DELPHICLASS TControlGuidelines;
class DELPHICLASS TWinControlGuidelines;
class DELPHICLASS TCustomFormGuidelines;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{E1A50419-1288-4B26-9EFA-6608A35F0824}") ICustomPropertyDrawing  : public System::IInterface 
{
	virtual void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected) = 0 ;
	virtual void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected) = 0 ;
};

__interface  INTERFACE_UUID("{73100176-DF0B-4900-AA52-4E67D7D04895}") ICustomPropertyDrawing80  : public ICustomPropertyDrawing 
{
	virtual System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect) = 0 ;
	virtual System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect) = 0 ;
};

__interface  INTERFACE_UUID("{60E3EB3A-23DD-459C-8936-0607A27D11A8}") ICustomPropertyMessage  : public System::IInterface 
{
	virtual void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled) = 0 ;
	virtual void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled) = 0 ;
	virtual void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled) = 0 ;
	virtual void __fastcall HintShow(Vcl::Controls::THintInfo &HintInfo, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled) = 0 ;
};

__interface  INTERFACE_UUID("{BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}") ICustomPropertyListDrawing  : public System::IInterface 
{
	virtual void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth) = 0 ;
	virtual void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight) = 0 ;
	virtual void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFontNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFontNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFontNameProperty() { }
	
private:
	void *__ICustomPropertyListDrawing;	// ICustomPropertyListDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator _di_ICustomPropertyListDrawing()
	{
		_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFontCharsetProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFontCharsetProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFontCharsetProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TImeNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TImeNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TImeNameProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TColorProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
protected:
	System::Types::TRect __fastcall PaintColorBox(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TColorProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TColorProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
private:
	void *__ICustomPropertyDrawing80;	// ICustomPropertyDrawing80 
	void *__ICustomPropertyListDrawing;	// ICustomPropertyListDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73100176-DF0B-4900-AA52-4E67D7D04895}
	operator _di_ICustomPropertyDrawing80()
	{
		_di_ICustomPropertyDrawing80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing80*(void) { return (ICustomPropertyDrawing80*)&__ICustomPropertyDrawing80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator _di_ICustomPropertyListDrawing()
	{
		_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator _di_ICustomPropertyDrawing()
	{
		_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing*(void) { return (ICustomPropertyDrawing*)&__ICustomPropertyDrawing80; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBrushStyleProperty : public Designeditors::TEnumProperty
{
	typedef Designeditors::TEnumProperty inherited;
	
public:
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TBrushStyleProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TEnumProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TBrushStyleProperty() { }
	
private:
	void *__ICustomPropertyListDrawing;	// ICustomPropertyListDrawing 
	void *__ICustomPropertyDrawing;	// ICustomPropertyDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator _di_ICustomPropertyListDrawing()
	{
		_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator _di_ICustomPropertyDrawing()
	{
		_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing*(void) { return (ICustomPropertyDrawing*)&__ICustomPropertyDrawing; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TPenStyleProperty : public Designeditors::TEnumProperty
{
	typedef Designeditors::TEnumProperty inherited;
	
public:
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TPenStyleProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TEnumProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TPenStyleProperty() { }
	
private:
	void *__ICustomPropertyListDrawing;	// ICustomPropertyListDrawing 
	void *__ICustomPropertyDrawing;	// ICustomPropertyDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator _di_ICustomPropertyListDrawing()
	{
		_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator _di_ICustomPropertyDrawing()
	{
		_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing*(void) { return (ICustomPropertyDrawing*)&__ICustomPropertyDrawing; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCursorProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
	void __fastcall ListMeasureHeight(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AHeight);
	void __fastcall ListMeasureWidth(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, int &AWidth);
	void __fastcall ListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TCursorProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TCursorProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
private:
	void *__ICustomPropertyListDrawing;	// ICustomPropertyListDrawing 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {BE2B8CF7-DDCA-4D4B-BE26-2396B969F8E0}
	operator _di_ICustomPropertyListDrawing()
	{
		_di_ICustomPropertyListDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyListDrawing*(void) { return (ICustomPropertyListDrawing*)&__ICustomPropertyListDrawing; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFontProperty : public Designeditors::TClassProperty
{
	typedef Designeditors::TClassProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFontProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TClassProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFontProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TModalResultProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TModalResultProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TModalResultProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShortCutProperty : public Designeditors::TOrdinalProperty
{
	typedef Designeditors::TOrdinalProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	virtual System::UnicodeString __fastcall GetValue();
	virtual void __fastcall GetValues(System::Classes::TGetStrProc Proc);
	virtual void __fastcall SetValue(const System::UnicodeString Value)/* overload */;
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TShortCutProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TOrdinalProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TShortCutProperty() { }
	
	/* Hoisted overloads: */
	
public:
	inline void __fastcall  SetValue(const System::WideString Value){ Designeditors::TPropertyEditor::SetValue(Value); }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TFileNameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
protected:
	virtual void __fastcall GetDialogOptions(Vcl::Dialogs::TOpenDialog* Dialog);
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TFileNameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TFileNameProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TMPFilenameProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual void __fastcall Edit();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TMPFilenameProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TMPFilenameProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TTabOrderProperty : public Designeditors::TIntegerProperty
{
	typedef Designeditors::TIntegerProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TTabOrderProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TIntegerProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TTabOrderProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCaptionProperty : public Designeditors::TStringProperty
{
	typedef Designeditors::TStringProperty inherited;
	
public:
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TCaptionProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TStringProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TCaptionProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TBooleanProperty : public Designeditors::TEnumProperty
{
	typedef Designeditors::TEnumProperty inherited;
	
protected:
	System::Types::TRect __fastcall CBRect(const System::Types::TRect &ItemRect);
	
public:
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect);
	void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall HintShow(Vcl::Controls::THintInfo &HintInfo, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TBooleanProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TEnumProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TBooleanProperty() { }
	
private:
	void *__ICustomPropertyMessage;	// ICustomPropertyMessage 
	void *__ICustomPropertyDrawing80;	// ICustomPropertyDrawing80 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {60E3EB3A-23DD-459C-8936-0607A27D11A8}
	operator _di_ICustomPropertyMessage()
	{
		_di_ICustomPropertyMessage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyMessage*(void) { return (ICustomPropertyMessage*)&__ICustomPropertyMessage; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73100176-DF0B-4900-AA52-4E67D7D04895}
	operator _di_ICustomPropertyDrawing80()
	{
		_di_ICustomPropertyDrawing80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing80*(void) { return (ICustomPropertyDrawing80*)&__ICustomPropertyDrawing80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator _di_ICustomPropertyDrawing()
	{
		_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing*(void) { return (ICustomPropertyDrawing*)&__ICustomPropertyDrawing80; }
	#endif
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSetProperty : public Designeditors::TSetProperty
{
	typedef Designeditors::TSetProperty inherited;
	
public:
	virtual void __fastcall GetProperties(Designintf::TGetPropProc Proc);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TSetProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TSetProperty(ADesigner, APropCount) { }
	/* TPropertyEditor.Destroy */ inline __fastcall virtual ~TSetProperty() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSetElementProperty : public Designeditors::TSetElementProperty
{
	typedef Designeditors::TSetElementProperty inherited;
	
private:
	Designeditors::TBit FBit;
	
protected:
	System::Types::TRect __fastcall CBRect(const System::Types::TRect &ItemRect);
	
public:
	void __fastcall PropDrawName(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	void __fastcall PropDrawValue(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected);
	System::Types::TRect __fastcall PropDrawNameRect(const System::Types::TRect &ARect);
	System::Types::TRect __fastcall PropDrawValueRect(const System::Types::TRect &ARect);
	void __fastcall MouseDown(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall MouseMove(System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall MouseUp(System::Uitypes::TMouseButton Button, System::Classes::TShiftState Shift, int X, int Y, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	void __fastcall HintShow(Vcl::Controls::THintInfo &HintInfo, bool InNameRect, const System::Types::TRect &ItemRect, bool &Handled);
	__fastcall TSetElementProperty(Designeditors::TPropertyEditor* Parent, int AElement);
public:
	/* TNestedProperty.Destroy */ inline __fastcall virtual ~TSetElementProperty() { }
	
private:
	void *__ICustomPropertyMessage;	// ICustomPropertyMessage 
	void *__ICustomPropertyDrawing80;	// ICustomPropertyDrawing80 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {60E3EB3A-23DD-459C-8936-0607A27D11A8}
	operator _di_ICustomPropertyMessage()
	{
		_di_ICustomPropertyMessage intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyMessage*(void) { return (ICustomPropertyMessage*)&__ICustomPropertyMessage; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {73100176-DF0B-4900-AA52-4E67D7D04895}
	operator _di_ICustomPropertyDrawing80()
	{
		_di_ICustomPropertyDrawing80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing80*(void) { return (ICustomPropertyDrawing80*)&__ICustomPropertyDrawing80; }
	#endif
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {E1A50419-1288-4B26-9EFA-6608A35F0824}
	operator _di_ICustomPropertyDrawing()
	{
		_di_ICustomPropertyDrawing intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator ICustomPropertyDrawing*(void) { return (ICustomPropertyDrawing*)&__ICustomPropertyDrawing80; }
	#endif
	
};

#pragma pack(pop)

class PASCALIMPLEMENTATION TMonthCalendar : public Vcl::Comctrls::TMonthCalendar
{
	typedef Vcl::Comctrls::TMonthCalendar inherited;
	
protected:
	DYNAMIC void __fastcall ChangeScale(int M, int D, bool isDpiChange)/* overload */;
public:
	/* TMonthCalendar.Create */ inline __fastcall virtual TMonthCalendar(System::Classes::TComponent* AOwner) : Vcl::Comctrls::TMonthCalendar(AOwner) { }
	
public:
	/* TCommonCalendar.Destroy */ inline __fastcall virtual ~TMonthCalendar() { }
	
public:
	/* TWinControl.CreateParented */ inline __fastcall TMonthCalendar(HWND ParentWindow) : Vcl::Comctrls::TMonthCalendar(ParentWindow) { }
	
	/* Hoisted overloads: */
	
protected:
	DYNAMIC inline void __fastcall  ChangeScale(int M, int D){ Vcl::Controls::TControl::ChangeScale(M, D); }
	
};


#pragma pack(push,4)
class PASCALIMPLEMENTATION TDateProperty : public Designeditors::TDateProperty
{
	typedef Designeditors::TDateProperty inherited;
	
private:
	TMonthCalendar* FControl;
	Designintf::_di_IPropertyHost FHost;
	bool FIgnoreDblClick;
	
public:
	__fastcall virtual ~TDateProperty();
	virtual Designintf::TPropertyAttributes __fastcall GetAttributes();
	HIDESBASE void __fastcall Edit(const Designintf::_di_IPropertyHost Host, bool DblClick)/* overload */;
	void __fastcall CalendarDblClick(System::TObject* Sender);
	void __fastcall CalendarKeyPress(System::TObject* Sender, System::WideChar &Key);
public:
	/* TPropertyEditor.Create */ inline __fastcall virtual TDateProperty(const Designintf::_di_IDesigner ADesigner, int APropCount) : Designeditors::TDateProperty(ADesigner, APropCount) { }
	
private:
	void *__IProperty80;	// Designintf::IProperty80 
	
public:
	#if defined(MANAGED_INTERFACE_OPERATORS)
	// {A02577DB-D5E5-4374-A8AB-4B2F83177878}
	operator Designintf::_di_IProperty80()
	{
		Designintf::_di_IProperty80 intf;
		this->GetInterface(intf);
		return intf;
	}
	#else
	operator Designintf::IProperty80*(void) { return (Designintf::IProperty80*)&__IProperty80; }
	#endif
	
};

#pragma pack(pop)

__interface  INTERFACE_UUID("{58274878-BB87-406A-9220-904105C9E112}") ISelectionMessage  : public System::IInterface 
{
	virtual bool __fastcall IsSelectionMessage(Vcl::Controls::TControl* Sender, Winapi::Messages::TMessage &Message) = 0 ;
};

__interface  INTERFACE_UUID("{C1360368-0099-4A7C-A4A8-7650503BA0C6}") ISelectionMessageList  : public System::IInterface 
{
	
public:
	_di_ISelectionMessage operator[](int Index) { return this->Items[Index]; }
	virtual _di_ISelectionMessage __fastcall Get(int Index) = 0 ;
	virtual int __fastcall GetCount() = 0 ;
	__property int Count = {read=GetCount};
	__property _di_ISelectionMessage Items[int Index] = {read=Get/*, default*/};
};

__interface  INTERFACE_UUID("{787195AF-C234-49DC-881B-221B69C0137A}") ICustomDesignForm  : public System::IInterface 
{
	virtual void __fastcall CreateDesignerForm _DEPRECATED_ATTRIBUTE0 (const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Vcl::Forms::TCustomForm* &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer) = 0 ;
};

__interface  INTERFACE_UUID("{525A1DF8-5EF3-4B98-8EE3-4567910A7EA1}") ICustomDesignForm80  : public System::IInterface 
{
	virtual void __fastcall CreateDesignerForm(const Designintf::_di_IDesigner Designer, System::Classes::TComponent* Root, /* out */ Designintf::_di_IHostForm &DesignForm, /* out */ Vcl::Controls::TWinControl* &ComponentContainer) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TControlGuidelines : public Designeditors::TComponentGuidelines
{
	typedef Designeditors::TComponentGuidelines inherited;
	
private:
	System::Types::TRect FClientDelta;
	System::Types::TRect FBoundsRect;
	
protected:
	void __fastcall CalcClientDelta(bool Force = true);
	virtual int __fastcall CalcHorzPos(int APos);
	virtual int __fastcall CalcVertPos(int APos);
	virtual int __fastcall GetCount();
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
	virtual bool __fastcall GetCtl3D();
	
public:
	virtual void __fastcall Initialize(System::Classes::TComponent* AComponent, System::Classes::TComponent* AContainer);
	static int __fastcall GetTextBaseline(Vcl::Controls::TControl* AControl, Vcl::Stdctrls::TTextLayout Align);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TControlGuidelines(const Designintf::_di_IDesigner ADesigner) : Designeditors::TComponentGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TControlGuidelines() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TWinControlGuidelines : public TControlGuidelines
{
	typedef TControlGuidelines inherited;
	
private:
	int FCountDelta;
	
protected:
	virtual Vcl::Controls::TPadding* __fastcall GetControlPadding();
	virtual int __fastcall GetCount();
	virtual Designintf::TDesignerGuideType __fastcall GetDesignerGuideType(int Index);
	virtual int __fastcall GetDesignerGuideOffset(int Index);
	
public:
	virtual void __fastcall Initialize(System::Classes::TComponent* AComponent, System::Classes::TComponent* AContainer);
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TWinControlGuidelines(const Designintf::_di_IDesigner ADesigner) : TControlGuidelines(ADesigner) { }
	
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TWinControlGuidelines() { }
	
};

#pragma pack(pop)

#pragma pack(push,4)
class PASCALIMPLEMENTATION TCustomFormGuidelines : public TWinControlGuidelines
{
	typedef TWinControlGuidelines inherited;
	
private:
	Vcl::Controls::TPadding* FCustomPadding;
	
protected:
	virtual Vcl::Controls::TPadding* __fastcall GetControlPadding();
	
public:
	__fastcall virtual ~TCustomFormGuidelines();
public:
	/* TBaseComponentGuidelines.Create */ inline __fastcall virtual TCustomFormGuidelines(const Designintf::_di_IDesigner ADesigner) : TWinControlGuidelines(ADesigner) { }
	
};

#pragma pack(pop)

//-- var, const, procedure ---------------------------------------------------
static const System::Word CM_FORMMODIFIED = System::Word(0xb064);
extern DELPHI_PACKAGE bool FontNamePropertyDisplayFontNames;
#define cfDelphiComponents L"Delphi Components"
#define cfDelphiComponent L"Delphi Component"
extern DELPHI_PACKAGE System::Word CF_COMPONENTS;
extern DELPHI_PACKAGE System::Word CF_COMPONENT;
extern DELPHI_PACKAGE System::UnicodeString BaseRegistryKey;
extern DELPHI_PACKAGE int PropertyDrawingOffset;
extern DELPHI_PACKAGE System::UnicodeString __fastcall GetDisplayValue(const Designintf::_di_IProperty Prop);
extern DELPHI_PACKAGE void __fastcall DefaultPropertyDrawName(Designeditors::TPropertyEditor* Prop, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, int Spacing = 0x0);
extern DELPHI_PACKAGE void __fastcall DefaultPropertyDrawValue(Designeditors::TPropertyEditor* Prop, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, int Spacing = 0x0);
extern DELPHI_PACKAGE void __fastcall DefaultPropertyListDrawValue(const System::UnicodeString Value, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, bool Selected, int Spacing = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall DefaultPropertyListDrawValue(const System::WideString Value, Vcl::Graphics::TCanvas* Canvas, const System::Types::TRect &Rect, bool Selected, int Spacing = 0x0)/* overload */;
extern DELPHI_PACKAGE void __fastcall DrawCheckbox(Vcl::Graphics::TCanvas* ACanvas, const System::Types::TRect &ARect, bool ASelected, bool AEnabled, bool AAllEqual, bool AValue);
extern DELPHI_PACKAGE void __fastcall CopyStreamToClipboard(System::Classes::TMemoryStream* S);
extern DELPHI_PACKAGE System::Classes::TMemoryStream* __fastcall GetClipboardStream();
extern DELPHI_PACKAGE _di_ISelectionMessageList __fastcall SelectionMessageListOf(const Designintf::_di_ISelectionEditorList SelectionEditorList);
extern DELPHI_PACKAGE bool __fastcall EditActionFor(Vcl::Stdctrls::TCustomEdit* AEditControl, Designintf::TEditAction Action);
extern DELPHI_PACKAGE Designintf::TEditState __fastcall GetEditStateFor(Vcl::Stdctrls::TCustomEdit* AEditControl);
}	/* namespace Vcleditors */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_VCLEDITORS)
using namespace Vcleditors;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// VcleditorsHPP
