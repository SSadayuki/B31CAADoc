/* -*-c++ -*- */
#ifndef CATIElbExternalSplice_H
#define CATIElbExternalSplice_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATIProduct;
class CATUnicodeString;
class CATILinkableObject;
class CATListValCATBaseUnknown_var;
class CATIElbBundleCnctPt;

#include "CATBaseUnknown.h"
#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbExternalSplice;
#else
extern "C" const IID IID_CATIElbExternalSplice;
#endif

/**
 * Interface to manage External Splices.
 */
class ExportedByCATElbInterfaces CATIElbExternalSplice : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
 
/**
 * @nodoc
 * Add Bundle Connection Point on Device
 *
 * @param iId
 *   Identifier (Name)
 *
 * @param iGeoDefinition
 *   Define the Leaf Product where Joint's Graphical elements and 
 *   representation come from
 *
 *      @param iRepresentation
 *        Connector's graphical representation (optional)
 *
 *      @param iJointType
 *        Joint's type
 *      @param iJointReferences
 *        Graphical elements used to realize joint
 *
 * @param oBundleCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddBundleCnctPt(const CATUnicodeString &iId, 
				  CATIProduct * iGeoDefinition,
				  CATILinkableObject * iRepresentation,
				  const CATUnicodeString &iJointType, 
				  CATListValCATBaseUnknown_var *iJointReferences,
				  CATIElbBundleCnctPt *& oBundleCnctPt) = 0;
 
/**
 * List of Terminations.
 *
 * @param oTerminations
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListTerminations(CATListValCATBaseUnknown_var*& oTerminations) = 0;
  
/**
 * List of BundleCnctPts.
 *
 * @param oBundleCnctPts
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts) = 0; 
};

CATDeclareHandler(CATIElbExternalSplice, CATBaseUnknown);
#endif


