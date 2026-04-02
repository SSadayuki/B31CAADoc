// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitVirtualNode
//=============================================================================
#ifndef CATAnalysisExplicitVirtualNode_H_
#define CATAnalysisExplicitVirtualNode_H_

#include "CATAnalysisExplicitEntity.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model virtual node.
 * This object is used to define in the field model an object 
 * which represent an physical behavior without meshing representation.
 */

class ExportedByCATSAM0Explicit CATAnalysisExplicitVirtualNode : public CATAnalysisExplicitEntity
{
   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitVirtualNode() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitVirtualNode(const CATAnalysisExplicitVirtualNode &iNode) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitVirtualNode(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitVirtualNode &operator = (const CATAnalysisExplicitVirtualNode &iNode) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitVirtualNode &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Get the number of linked elements.
 * @param oNumber
 *   The number of linked elements.
 */
      HRESULT GetNumberOfLinkedVirtualElements(int &oNumber) const ;

/**
 * Get the linked Elements to the Node.
 * @param oLinkedElements
 *   The linked Elements. They are @href CATAnalysisExplicitVirtualElement.<br>
 *   This parameter must be equal to NULL when this method is called.
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
      HRESULT GetLinkedVirtualElements(CATSamExplicitPtr* (&oLinkedElements)) const ;

/**
 * Create a field model virtual node.
 * @param iNodeSet The parent virtual node set.
 * This set must have VIRTUAL_NODES physical type.
 */
      HRESULT CreateVirtualNode(CATAnalysisExplicitSet &iNodeSet) ;


   private :
  
     virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

} ;

#endif
