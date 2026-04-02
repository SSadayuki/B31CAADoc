// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitNode
//
//=============================================================================
//
// Usage Notes: Services linked to the field model entities.
//
//=============================================================================
// Octobre 99   Creation                                                  
//=============================================================================
#ifndef CATAnalysisExplicitNode_H_
#define CATAnalysisExplicitNode_H_

#include "CATAnalysisExplicitEntity.h"

class CATMSHNode;
class CATMathVector;
class CATAnalysisExplicitAxis;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model node.
 * This object is the field model representation of the meshing nodes and their physical behavior.
 */

class ExportedByCATSAM0Explicit CATAnalysisExplicitNode : public CATAnalysisExplicitEntity
{
   private :
      CATMSHNode *_MSHNode ;      

      virtual void    Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitNode() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitNode(const CATAnalysisExplicitNode &iNode) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitNode(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
      CATAnalysisExplicitNode &operator = (const CATAnalysisExplicitNode &iNode) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitNode &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Returns the double coordinates.
 * @param oCoordinates The array of coordinates.
 * @param Local Boolean for local or global coordinates.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">TRUE</font color="red"> for coordinates in local reference frame.</li>
 * <li><font color="red">FALSE</font color="red"> for coordinates in global reference frame.</li></ul>
 */
      HRESULT GetCoordinates(double oCoordinates[3], CATBoolean Local=TRUE) const ;

/**
 * Returns the float coordinates.
 * @param oCoordinates The array of coordinates.
 * @param Local Boolean for local or global coordinates.
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">TRUE</font color="red"> for coordinates in local reference frame.</li>
 * <li><font color="red">FALSE</font color="red"> for coordinates in global reference frame.</li></ul>
 */
      HRESULT GetCoordinates(float oCoordinates[3], CATBoolean Local=TRUE) const ;

/**
 * Returns the number of linked elements.
 * @param oNumber The number of linked elements.
 */
      HRESULT GetNumberOfLinkedElements(int &oNumber) const ;

/**
 * Returns the linked Elements to the Node.
 * @param oLinkedElements The linked Elements.
 * <br><b>Note</b>: 
 *   This parameter must be equal to NULL when this method is called.<br>
 *   The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
      HRESULT GetLinkedElements(CATSamExplicitPtr* (&oLinkedElements)) const ;

/**
 * Create the field model representation of a mesh node.
 * @param iNodeSet
 *    The parent node set.
 * @param iMeshNode
 *    The mesh node pointer.
 * @param iNodePhysicalType
 *    The physical type number of "NODE".<br>
 *    If it isn't provided, it will be obtained internally.
 */
      HRESULT CreateNode(CATAnalysisExplicitSet &iNodeSet, CATMSHNode *iMeshNode,
                         CATSamPhysicalType iNodePhysicalType = CATSamPhysicalTypeNone) ;

/**
 * Links the current object with a field model node based on its pointer.
 * @param iExplicitPtr
 *   The pointer to the field model object.
 * @param iModel
 *   A pointer to the field model.
 * @see CATAnalysisExplicitModel
 */
      HRESULT LinkWithPointer(CATSamExplicitPtr iExplicitPtr, const CATAnalysisExplicitModel *iModel) ;
 
/**
 * Returns the tag (ie unique identifier) of the mesh node object.
 * @param oMeshTag  The CATMSHNode tag.
 */
      HRESULT GetMeshTag(unsigned int &oMeshTag) const ;

/**
 * Links the current object with a field model node based on a mesh node tag (ie unique identifier).
 * @param iMeshTag 
 *   The tag of the mesh node.
 * @param iModel
 *   A pointer to the field model.
 * @see CATAnalysisExplicitModel
 */
      HRESULT LinkWithMeshTag(unsigned int iMeshTag, const CATAnalysisExplicitModel *iModel) ;

/**
 * Returns the pointer of the mesh node object.
 */
      CATMSHNode *GetMeshPointer(void) const ;

/**
 * Retrieves the link to the current object with a field model node based on a mesh node pointer.
 * @param iMeshPointer Pointer of the mesh node.
 * @param iModel Pointer to the field model.
 * <br><b>Note</b>: The CATMSHNode must be in the mesh container of the same document.
 * 
 */
      HRESULT LinkWithMeshPointer(CATMSHNode *iMeshPointer, const CATAnalysisExplicitModel *iModel) ;

/**
 * Creates the link to the current unlinked explicit node with a node mesh pointer.
 * @param iMeshNode
 *   The pointer of the mesh Node.
 * <br><b>Note</b>: The CATMSHNode must be in the mesh container of the same document.
 *   This Mesh Node must be undeleted, not linked to any Explicit Node.
 *   This Explicit Node must not be linked to any Mesh Node.
 */
      HRESULT SetMeshPointer(CATMSHNode *iMeshNode);

/**
 * Returns the Local axis attached to the ExplicitNode.
 * @param oAxis The CATAnalysisExplicitAxis attached to the Explicit Node.
 */
      HRESULT GetLocalAxis(CATAnalysisExplicitAxis &oAxis) const;

/**
 * Returns the definition of the local axis attached to the ExplicitNode according to a position identifier.
 * In case of the local axis can not be computed, the method return the Global Axis.
 * @param oVecU
 *   The U Vector of the local axis attached to the ExplicitNode.
 * @param oVecV
 *   The V Vector of the local axis attached to the ExplicitNode.
 * @param oVecW
 *   The W Vector of the local axis attached to the ExplicitNode.
 */
      HRESULT GetLocalAxis(CATMathVector &oVecU, CATMathVector &oVecV, CATMathVector &oVecW) const;

/**
 * Returns if a local axis can be evaluated.
 * @param isValid
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">TRUE</font color="red"> if a local axis is valid.</li>
 * <li><font color="red">FALSE</font color="red"> if a local axis can not be computed.</li></ul>
 */
      HRESULT CanEvaluateLocalAxis(CATBoolean &isValid) const;

/**
 * Returns if the explicit node is condensed or not.
 * @return  condensation flag.
 * This consensation flag is dedicated to assembly of analysis.
 * It is automatically set up in the CreateNode method if the meshing node is condensed. 
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">TRUE</font color="red"> the explicit node is a condensed node.</li>
 * <li><font color="red">FALSE</font color="red"> the explicit node is not condensed .</li></ul>
 */
      CATBoolean IsCondensed() const ;

/**
 * Returns the Local axis attached to the ExplicitNode.
 * @param oAxis The explicit pointer attached to the Explicit Node.
 * <br><b>Note</b>:
 * <ul>
 * <li>This pointer can be NULL.</li>
 * <li>This method is more performant than @href #GetLocalAxis(CATAnalysisExplicitAxis&) if you do not need to access the local axis data members.</li></ul>
 */
      HRESULT GetLocalAxis(CATSamExplicitPtr & oAxis) const;

} ;

#endif
