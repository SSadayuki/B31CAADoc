/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIV4DataTranslator_H
#define CATIV4DataTranslator_H

#include "ExportedByCATV4iCpV4ToV5.h"
#include "CATBaseUnknown.h"
#include "CATV4iV4Element.h"
//class CATIAModel;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATV4iCpV4ToV5 IID IID_CATIV4DataTranslator;
#else
extern "C" const IID IID_CATIV4DataTranslator;
#endif

/**
 * Class to translate a V4 geometry to V5 object.
 * <br><b>Role:</b> Interface to translate a V4 geometry to V5 object
 * The user can choose to translate V4 data or not
 */


class ExportedByCATV4iCpV4ToV5 CATIV4DataTranslator : public CATBaseUnknown
{
  CATDeclareInterface;
    public:

    /**
      * Retrieves the user intent.
      * @param iJele [in]
      *   The CATGeo Jele of the element 
      * @param oIntent
      *   <br><b>legal values</b>:0 do not translate the V4 data, 1 do the standard process
      * @return
	  * <ul>
	  * <li> <tt> S_OK : </tt> The query succeeds </li>
	  * <li> <tt> E_NOINTERFACE : </tt> The interface does not exist</li>
      * </ul>
      */
   virtual HRESULT GetUserIntent(CATV4iV4Element * V4Elem, int & oIntent) = 0 ;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler (CATIV4DataTranslator ,CATBaseUnknown) ;
#endif




