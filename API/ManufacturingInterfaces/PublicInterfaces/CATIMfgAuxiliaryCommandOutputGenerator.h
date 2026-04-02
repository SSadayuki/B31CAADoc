// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// Define the CATIMfgAuxiliaryCommandOutputGenerator interface
//
//===================================================================
//
// Usage notes:
//   interface dedicated to output generation for auxiliary commands
//
//===================================================================
#ifndef CATIMfgAuxiliaryCommandOutputGenerator_H
#define CATIMfgAuxiliaryCommandOutputGenerator_H

/**
 * @CAA2Level L0
 * @CAA2Usage U3

*/#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgAuxiliaryCommandOutputGenerator;
#else
extern "C" const IID IID_CATIMfgAuxiliaryCommandOutputGenerator ;
#endif

//------------------------------------------------------------------

/**
 * This interface allows to manage NC Code file on Activity
 * <p>
 */
class ExportedByMfgItfEnv CATIMfgAuxiliaryCommandOutputGenerator: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * <dl>
     * This method allows to generate APT code for auxiliary commands
     * <dt><b>Example:</b>
     * <pre>
           *   @param oAPTCode
           *      CATUnicodeString describing the APT Code
          *   @param iPointOrAxis
           *      0 : Point (X,Y,Z)  1: Axis (X,Y,Z,I,J,K)
		   *   @return
           *      HRESULT can be S_OK, E_FAIL with allocated Error definition.
           * 
     * </pre>
     * </dl>
     */
     virtual HRESULT GenerateAPTFormat (CATUnicodeString &oAPTCode, int iPointOrAxis = 0) = 0;

  
	// No constructors or destructors on this pure virtual base class
    // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATIMfgAuxiliaryCommandOutputGenerator, CATBaseUnknown) ;

#endif
