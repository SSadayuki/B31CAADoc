// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitVirtualElement
//
//=============================================================================
#ifndef CATAnalysisExplicitVirtualElement_H_
#define CATAnalysisExplicitVirtualElement_H_

#include "CATAnalysisExplicitEntity.h"

class CATAnalysisExplicitListUsr;
class CATString;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model virtual element.
 * This object is used to define in the field model an object 
 * which represent an physical behavior without meshing representation.
 */

class ExportedByCATSAM0Explicit CATAnalysisExplicitVirtualElement : public CATAnalysisExplicitEntity
{

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitVirtualElement() ;
/**
 * Copy constructor.
 */
      CATAnalysisExplicitVirtualElement(const CATAnalysisExplicitVirtualElement &iElement) ;
/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitVirtualElement(const CATAnalysisExplicitData &iData) ;
/**
 * Assignment operator.
 */
      CATAnalysisExplicitVirtualElement &operator = (const CATAnalysisExplicitVirtualElement &iElement) ;
/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitVirtualElement &operator = (const CATAnalysisExplicitData &iData) ;
/**
 * Creates a virtual element.
 * @param iElementSet
 *    The parent element set.
 * @param iElementPhysicalType
 *    The physical type of the element.
 * @param iListOfNodes
 *    The list of nodes linked to the element.
 */
	  HRESULT CreateVirtualElement(CATAnalysisExplicitSet  &iElementSet,
                                 CATSamPhysicalType       iElementPhysicalType,
                                 CATAnalysisExplicitListUsr & iListOfNodes);
/**
 * Returns the number of linked Nodes.
 * @param oNumber
 *   The number of linked Nodes.
 */
      HRESULT GetNumberOfLinkedNodes(int &oNumber) const ;
/**
 * Returns the linked nodes of the element.
 * @param oLinkedNodes
 *   The linked Nodes. They can be @href CATAnalysisExplicitNode or @href CATAnalysisExplicitVirtualNode.<br>
 *   This parameter must be equal to NULL when this method is called.
 *   The memory for the array is allocated by this method and must be de-allocated by the caller.
 */
      HRESULT GetLinkedNodes(CATSamExplicitPtr * (&oLinkedNodes)) const ;


/**
 * Returns the Connectivity.
 * @param oConnectivityName
 *   The oConnectivity identifier.
 */
      HRESULT GetConnectivity(CATString & oConnectivity) const;

   private:

      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

};

#endif
