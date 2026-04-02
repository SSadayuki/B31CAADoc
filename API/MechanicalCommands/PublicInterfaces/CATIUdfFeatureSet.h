/* -*-c++-*- */
#ifndef CATIUdfFeatureSet_H
#define CATIUdfFeatureSet_H
// Copyright Dassault Systemes 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATUdfInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATUdfInterfaces IID IID_CATIUdfFeatureSet;
#else
extern "C" const IID IID_CATIUdfFeatureSet;
#endif

/**
  * Interface to handle the set of User Feature reference or of Power Copy.
  * <br><b>Role</b> This interface is implemented by references created by 
  * @href CATIUdfFactory. 
  */
class ExportedByCATUdfInterfaces CATIUdfFeatureSet: public CATBaseUnknown
{
   CATDeclareInterface;
public:
   /**
     * Reads list of feature included in the set.
     * @return
     *   List of features
     */
   virtual CATLISTV(CATBaseUnknown_var)* GetListFeature() = 0;

   /**
     * Add a new feature into the set.
     * @param iSpec
     *   Feature to add. This object must implement @href CATIUdfFeature . 
     */
   virtual HRESULT AppendFeature (const CATISpecObject_var& iSpec) = 0;

   /**
     * Reads the type of this set.
     * @param oType
     *   0 : It's the set of Power Copy, 1 : It's the set of User Feature 
     *   2 : It's the set of Power Copy Instance
    */
   virtual HRESULT GetType (int & oType) = 0;
   
};

//------------------------------------------------------------------

CATDeclareHandler (CATIUdfFeatureSet, CATBaseUnknown);

#endif
