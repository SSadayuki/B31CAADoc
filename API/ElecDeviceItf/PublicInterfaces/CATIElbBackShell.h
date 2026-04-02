/* -*-c++ -*- */
#ifndef CATIElbBackShell_H
#define CATIElbBackShell_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"

class CATIProduct;
class CATUnicodeString;
class CATILinkableObject;
class CATListValCATBaseUnknown_var;
class CATIElbBundleCnctPt;
class CATIElbBackShellCnctPt;
class CATIElbSingleConnector;

#include "ExportedByCATElbInterfaces.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbBackShell;
#else
extern "C" const IID IID_CATIElbBackShell;
#endif

/**
 * Interface to manage Back Shells.
 */
class ExportedByCATElbInterfaces CATIElbBackShell : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/**
 * @nodoc
 * Add Bundle Connection Point on BackShell
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
 * @nodoc
 * Add BackShell Connection Point on BackShell
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
 * @param oBackShellCnctPt
 *   The connector
 * @return
 *   Return code
 */
  virtual HRESULT AddBackShellCnctPt(const CATUnicodeString &iId, 
				     CATIProduct * iGeoDefinition,
				     CATILinkableObject * iRepresentation,
				     const CATUnicodeString &iJointType, 
				     CATListValCATBaseUnknown_var *iJointReferences,
				     CATIElbBackShellCnctPt *& oBackShellCnctPt) = 0;

/**
 * List of BundleCnctPts.
 *
 * @param oBundleCnctPts
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListBundleCnctPts(CATListValCATBaseUnknown_var*& oBundleCnctPts) = 0;
  
/**
 *
 * List of BackShellCnctPts.
 *
 * @param oBackShellCnctPts
 *   The list
 * @return
 *   Return code
 */
  virtual HRESULT ListBackShellCnctPts(CATListValCATBaseUnknown_var*& oBackShellCnctPts) = 0;

/**
 * Get Connector.
 *
 * @param oConnector
 *   The Single Connector linked to the BackShell .
 * @return
 *   Return code
 */
  virtual HRESULT GetConnector (CATIElbSingleConnector*& oConnector) = 0;

/**
 * @nodoc
 * List the cavities.
 * @param oCavities
 *   The list of cavities 
 * @return
 *   Return code
 */
  virtual HRESULT ListCavities(CATListValCATBaseUnknown_var*& oCavities) = 0;

};

CATDeclareHandler(CATIElbBackShell, CATBaseUnknown);
#endif
