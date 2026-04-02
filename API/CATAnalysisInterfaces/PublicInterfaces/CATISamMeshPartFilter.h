// COPYRIGHT Dassault Systemes 2003
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//===================================================================
// CATISamMeshPartFilter.h
// Define the CATISamMeshPartFilter interface
//
//===================================================================
//
// Usage notes:
// Management of Mesh Part Filter on Analysis Supports
// and Basic Components which select geometries
//===================================================================
#ifndef CATISamMeshPartFilter_H
#define CATISamMeshPartFilter_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATBoolean.h"
class CATISpecObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamMeshPartFilter;
#else
extern "C" const IID IID_CATISamMeshPartFilter ;
#endif

//------------------------------------------------------------------

/**
* Management of Mesh Part Filter on Analysis Supports.
*/
class ExportedByCATAnalysisInterface CATISamMeshPartFilter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Retrieves if an Analysis entity or Basic Components that select geometries
 * allow to filter the associativity results according
 * to a list of Mesh Part. <br>
 * <b>Legal values</b>:
 * <tt>TRUE</tt> .
 * <tt>FALSE</tt> .
 */
    virtual CATBoolean AllowMeshPartFilter() = 0;

/**
 * Sets if an Analysis entity or Basic Components that select geometries
 * allow to filter the associativity results according
 * to a list of Mesh Part. <br>
 * @param iMode: 
 * <b>Legal values</b>:
 * <tt>TRUE</tt> .
 * <tt>FALSE</tt> .
 */
    virtual HRESULT SetAllowMeshPartFilter(CATBoolean iMode) = 0 ;

/**
 * Sets the list of Mesh Parts that define the filter on the associativity results to
 * manage the CATISamAnalysisSupport extraction. 
 * @param iObj the MeshPart.
 */
  	virtual HRESULT SetMeshPartsFilter(const CATISpecObject_var& ispMeshPart) = 0;

/**
 * Retrieves the list of Mesh Parts that define the filter on the associativity results to
 * manage the CATISamAnalysisSupport extraction. 
 * @param oMeshPartList the MeshPart list pointer.
 */
  	virtual HRESULT GetMeshPartsFilter(CATLISTV(CATISpecObject_var)* &oMeshPartList) = 0;

/**
 * Remove a Mesh Part from the list of Mesh Parts.
 * @param ispMeshPart the Mesh Part to remove.
 */
  	virtual HRESULT RemoveMeshPartsFilter(const CATISpecObject_var& ispMeshPart) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler( CATISamMeshPartFilter, CATBaseUnknown );

#endif
