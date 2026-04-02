// COPYRIGHT DASSAULT SYSTEMES  1996
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//=============================================================================
//
// CATSdaiStaticGlobalData:
// class defining a scope for access of static global data used in SDM/SDAI
//
//=============================================================================
// Usage Notes:
//
// internal use only (called in macros replacing static global variables)
//=============================================================================
// Nov. 96   Creation                                   Ph. BAUCHER
//=============================================================================

#ifndef CATSdaiStaticGlobalData_H
#define CATSdaiStaticGlobalData_H

#include "KS0SIMPL.h"
#include <stdlib.h>

class SdaiBoolean;
class SdaiLogical;
class SdaiBinary;
class SdaiString;
class SdaiSelectH;
class SdaiEnum;
class SdaiPrimitiveH;



class ExportedByKS0SIMPL CATSdaiStaticGlobalData
{
  protected:
    //------
    // 'tors
    //------
  CATSdaiStaticGlobalData();
  CATSdaiStaticGlobalData( const CATSdaiStaticGlobalData& );
  virtual ~CATSdaiStaticGlobalData()=0; // not instanciable.
  CATSdaiStaticGlobalData&	operator=( const CATSdaiStaticGlobalData& );

  public:
    //-------------------------------
    // Create/Delete the stuff behind
    //-------------------------------
    static
      void	Create() ;
    static
      void	Delete() ;

    //----------------------
    // Access to static data
    //----------------------
    static
      const SdaiBoolean&	THEsdaiTRUE()		{ return *_THEsdaiTRUE ; }
    static
      const SdaiBoolean&	THEsdaiFALSE()		{ return *_THEsdaiFALSE ; }
    static
      const SdaiLogical&	THEsdaiLTRUE()		{ return *_THEsdaiLTRUE ; }
    static
      const SdaiLogical&	THEsdaiLFALSE()		{ return *_THEsdaiLFALSE ; }
    static
      const SdaiLogical&	THEsdaiUNKNOWN()	{ return *_THEsdaiUNKNOWN ; }
    static
      const SdaiPrimitiveH&	TheNO_VALUE()		{ return *_TheNO_VALUE ; }
    static
      const SdaiSelectH&	TheNO_SELECT()		{ return *_TheNO_SELECT ; }
    static
      const SdaiEnum&		TheNO_ENUM()		{ return *_TheNO_ENUM ; }
    static
      const SdaiBinary&		TheNO_BINARY()		{ return *_TheNO_BINARY ; }
    static
      const SdaiString&		TheNO_STRING()		{ return *_TheNO_STRING ; }
    static
      const SdaiString&		TheNULL_SDAI_STRING()	{ return *_TheNULL_SDAI_STRING ; }

  private:
    //--------------------
    // Static data members
    //--------------------
    static
      SdaiBoolean*	_THEsdaiTRUE ;
    static
      SdaiBoolean*	_THEsdaiFALSE ;
    static
      SdaiLogical*	_THEsdaiLTRUE ;
    static
      SdaiLogical*	_THEsdaiLFALSE ;
    static
      SdaiLogical*	_THEsdaiUNKNOWN ;
    static
      SdaiPrimitiveH*	_TheNO_VALUE ;
    static
      SdaiSelectH*	_TheNO_SELECT ;
    static
      SdaiEnum*		_TheNO_ENUM ;
    static
      SdaiBinary*	_TheNO_BINARY ;
    static
      SdaiString*	_TheNO_STRING ;
    static
      SdaiString*	_TheNULL_SDAI_STRING ;

};
#endif
