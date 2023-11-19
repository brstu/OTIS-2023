/////////////////////////////////////////////////////////////////////////////
// OCXPROXY.H - Helpers for hosting OCX in CBuilder's IDE
//
// $Rev: 85079 $
//
// Copyright (c) 1999,2011 Borland International
/////////////////////////////////////////////////////////////////////////////
#ifndef __OCXPROXY_H
#define __OCXPROXY_H

#include <Vcl.OleCtrls.hpp>

// These macros provide overloaded versions of property setters/getters
// to OCX proxy classes. They simply invoke methods provide by TOleControl
// or TDBOleControl.
//
#define OVERLOADED_PROP_METHODS                                             \
  bool __fastcall GetWordBoolProp(int index)                                \
  {                                                                         \
    return Vcl::Olectrls::TOleControl::GetWordBoolProp(index) != 0;         \
  }                                                                         \
  void __fastcall SetWordBoolProp(int index, bool value)                    \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetWordBoolProp(index, value ? System::Word(-1) : System::Word(0)); \
  }                                                                         \
  System::Int8 __fastcall GetShortintProp(int index)                        \
  {                                                                         \
    return Vcl::Olectrls::TOleControl::GetSmallintProp(index);              \
  }                                                                         \
  void __fastcall SetShortintProp(int index, System::Int8 value)            \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetSmallintProp(index, value);              \
  }                                                                         \
  void __fastcall SetIUnknownProp(int index, _di_IUnknown const val)        \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetIUnknownProp(index, val);                \
  }                                                                         \
  void __fastcall _SetIUnknownProp(int index, _di_IUnknown const val)       \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetIUnknownProp(index, val);                \
  }                                                                         \
  void __fastcall _SetIDispatchProp(int index, _di_IDispatch const val)     \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetIDispatchProp(index, val);               \
  }                                                                         \
  void __fastcall _SetTFontProp(int index, Vcl::Graphics::TFont* value)     \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetTFontProp(index, value);                 \
  }                                                                         \
  void __fastcall _SetTPictureProp(int index, Vcl::Graphics::TPicture* value) \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetTPictureProp(index, value);              \
  }                                                                         \
  void __fastcall _SetOleVariantProp(int index, const System::OleVariant &value) \
  {                                                                         \
    Vcl::Olectrls::TOleControl::SetOleVariantProp(index, value);            \
  }

#endif  //  __OCXPROXY_H
