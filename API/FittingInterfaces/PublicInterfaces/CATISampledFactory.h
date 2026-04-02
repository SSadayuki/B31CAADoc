// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATISampledFactory.h
// Define the CATISampledFactory interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================


/**
 * @CAA2Level L0  
 * @CAA2Usage U1
 */


#ifndef CATISampledFactory_H
#define CATISampledFactory_H

#include "G60I0FIT.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISampledFactory;
#else
extern "C" const IID IID_CATISampledFactory ;
#endif

class CATISampled;

//------------------------------------------------------------------

    /**
     * Interface to implement factory design pattern for CATISampled
     * objects.
     */

class ExportedByG60I0FIT CATISampledFactory: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


      /**
       * Creates and returns a CATISampled object.
       * @param iPrototypeName
       *    The prototype of the sampled you want to create. For example, use "Track"
       *    to build a Track object, or "Color" to build a Color Action object.
       * @param oNewSampled
       *    The created sampled.  Value to be returned and then used by the user.
       */

      virtual HRESULT CreateSampled (const char *iPrototypeName, CATISampled *&oNewSampled) = 0;
};

//------------------------------------------------------------------

#endif
