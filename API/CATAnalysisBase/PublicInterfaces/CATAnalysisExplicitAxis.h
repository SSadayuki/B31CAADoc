// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitAxis
//
//=============================================================================
//
// Usage Notes: Services linked to the field model entities.
//
//=============================================================================
// septembre 2000   Creation                                               
//=============================================================================
#ifndef CATAnalysisExplicitAxis_H_
#define CATAnalysisExplicitAxis_H_

#include "CATAnalysisExplicitEntity.h"

class CATAnalysisExplicitNode;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model axis system.
 * This object is used to provide services common to objects of the field model
 * which can represent an axis system.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitAxis : public CATAnalysisExplicitEntity
{
   friend class CATAnalysisExplicitNode ;

   private :
      virtual void    Reset() ;
      virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

   public :
/**
 * Default constructor.
 */
      CATAnalysisExplicitAxis() ;

/**
 * Copy constructor.
 */
      CATAnalysisExplicitAxis(const CATAnalysisExplicitAxis &iAxis) ;

/**
 *  Copy constructor.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitAxis(const CATAnalysisExplicitData &iData) ;

/**
 * Destructeur.
 */
      virtual ~CATAnalysisExplicitAxis() ;

/**
 *  Assignment operator.
 */
      CATAnalysisExplicitAxis &operator = (const CATAnalysisExplicitAxis &iAxis) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
      CATAnalysisExplicitAxis &operator = (const CATAnalysisExplicitData &iData) ;
   
/**
 * Returns the repeat number of a characteristic and the value distribution mode.
 * @param oNbRepeat
 *   The number of times the values are repeated (absolute value).
 * @param oDistributionMode
 *   The mode of distribution of the values.
 * @see CATSamValuesDistributionMode
 */
      HRESULT GetNbRepeat(int &oNbRepeat, CATSamValuesDistributionMode& oDistributionMode) const;

/**
 * Returns the origin coordinates.
 * @param oCoordinates The array is filled with the coordinates.
 * @param iRepeat repeat value for coordinates return
 * @param Local TRUE if express the coordinates in local reference frame.
 */
      HRESULT GetOriginCoordinates(float oCoordinates[3], int iRepeat=0, CATBoolean Local=TRUE);

/**
 * Returns the local_Z coordinates.
 * @param oCoordinates
 *   The array is filled with the coordinates.
 */
      HRESULT GetLocal_ZCoordinates(float oCoordinates[3], int iRepeat=0, CATBoolean Local=TRUE);

/**
 * Returns the local_XZ coordinates.
 * @param oCoordinates
 *    The array is filled with the coordinates.
 */
      HRESULT GetLocal_XZCoordinates(float oCoordinates[3], int iRepeat=0, CATBoolean Local=TRUE);

/**
 * Returns the local axis type.
 * @param oRefFrameType
 *    the type of the axis.
 */
      HRESULT GetRefFrameType(CATSamRefFrameType &oRefFrameType) ;

/**
 * Returns the local axis definition.
 * @param iLocationPoint
 *    the location point.
 * @param iRepeat
 *    the repeat.
 * @param oVecU
 *    the coordinates of the U vector.
 * @param oVecV
 *    the coordinates of the V vector.
 * @param oVecW
 *    the coordinates of the W vector.
 */
      HRESULT GetImplicitDefinition(const float iLocationPoint[3], int iRepeat,
                                    float oVecU[3], float oVecV[3], float oVecW[3]);

private:

	   HRESULT Convert(int iRepeat, float ioCoordinates[3], CATBoolean iReverse = FALSE);

	   HRESULT Convert(int iRepeat, double ioCoordinates[3], CATBoolean iReverse = FALSE);

   
/**
 * Returns the coordinates.
 */
	   HRESULT GetCoordinates(int iRepeat);

/**
 * Verify the agreement of the different numbers of Repeat in the tree.
 */
	   CATBoolean VerifyRepeatAccuracy() const;

/**
 * Build an array of Pointed Objects CATAnalysisExplicitNode.
 * This Method checked if an Instance is used several times in the
 * definition of the intance of the Axis (Return True in this Case).
 * @param oNbPointedNodes
 *    the number of Pointed Nodes.
 * @param oVecW
 *    the array of Pointed Nodes.
 * The memory for the array is allocated by this method but must be de-allocated by the caller.
 */
	   CATBoolean SearchPointingNodes(int & oNbPointedNodes, CATSamExplicitPtr* (&oPointedNodes));
   
/**
 * Donnees membre:les coordonnees en global et en local
 */
  float**                      _GlobalOriginCoor;
  float**                      _GlobalZCoor;
  float**                      _GlobalXZCoor;
  float**                      _LocalOriginCoor;
  float**                      _LocalZCoor;
  float**                      _LocalXZCoor;
  CATSamRefFrameType           _RefFrameType;
  CATSamValuesDistributionMode _DistributionMode;
  int                          _NbRepeat;
};

#endif
