// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATSamAxis
//
//=============================================================================
//
// Usage Notes: axis information of a collector characteristic
//
//=============================================================================
// Juin 99   Creation                                                  JND, LBK
//=============================================================================
#ifndef CATSamAxis_H_
#define CATSamAxis_H_

#include "CATSAM0Explicit.h"
#include "CATSamExplicitRoot.h"
#include "CATAnalysisExplicitTypes.h"

#include "CATListOfCATUnicodeString.h"

class CATSamStream;
class CATSamDimensionHandler;

class CATMathVector;
class CATSamBasicAxis;
class CATSamDimension;
class CATMath3x3Matrix;
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Definition of the axis system information of a collector characteristic.
 * It defines the axis system orientations for each position, repeat and lamina.<br>
 * <br>
 * <b>Public member :</b>
 * <ul>
 * <pre><li>int * const PublicWorkPtr</pre>
 *   A pointer to a public work area.
 * </ul>
 */
class ExportedByCATSAM0Explicit CATSamAxis : public CATSamExplicitRoot
{
  public :
/**
 * Default constructor.
 */
    CATSamAxis();

/**
 * Constructs and initializes a <b>CATSamAxis</b> object with an instance of a <b>CATSamDimension</b>.<br>
 * The instance is initialized with the members NbPosition, NbRepeat, NbLamina and NbSMI of the <b>CATSamDimension</b> object.
 * @param iDimension
 *   The <b>CATSamDimension</b> instance used to initialize the <b>CATSamAxis</b>.
 * @see CATSamDimension
 */ 
    CATSamAxis(const CATSamDimension* iDimension) ;

/**
 * Copy constructor.
 */
    CATSamAxis(const CATSamAxis & iAxis);

/**
 * Destructor.
 */
    virtual ~CATSamAxis() ;

/**
 * Assignment operator.
 */
    CATSamAxis &operator = (const CATSamAxis &iAxis) ;

/**
 * Dumps the contents of the object.
 * @param oListOfString
 *   The List of CATUnicodeString.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(CATListValCATUnicodeString* oListOfString, int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const ;

/**
 * Dumps the contents of the object.
 * @param iIndent
 *   The indentation level (one level represents 3 spaces).
 * @param iRecurse
 *   The number of recursion levels.
 * @param iLoopSize
 *   The size of loops.
 */
    void Dump(int iIndent = 0, int iRecurse = 1, int iLoopSize = 10) const ;

/**
 * Initializes a <b>CATSamAxis</b> object with an instance of a <b>CATSamDimension</b>.<br>
 * The instance is initialized with the members NbPosition, NbRepeat, NbLamina and
 * NbSMI of the <b>CATSamDimension</b> object.
 * @param iDimension
 *   The <b>CATSamDimension</b> instance used to initialize the <b>CATSamAxis</b>.
 * @see CATSamDimension
 */ 
    HRESULT Initialize(const CATSamDimension* iDimension) ;


/**
 * Sets the definition of the axis for a position and a repeat in the position.<br>
 * The coordinates of the Uaxis, Vaxis and Waxis vectors are computed in order
 * to have an orthonormal axis system, and the direction of wAxis is equal to
 * the direction defined by iOrigin and iPointOnZAxis, except in case of CATSamRefFrameType*Spherical.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iOrigin[3]
 *   The coordinates of the origin of the Z axis.
 * @param iPointOnZAxis[3]
 *   The coordinates of a point of the Z axis.
 * @param iPointOnXoZPlane[3]
 *   The coordinates of a point of the +X,o,+Z plane.
 * @param iRefFrameType
 *   The mathematical type of the axis.
 * @param iLocationPoint[3]
 *   The coordinates of the point where the axis will be computed.
 * Only used when iRefFrameType = CATSamRefFrameType*Cylindrical or CATSamRefFrameType*Spherical.
 * @see CATSamRefFrameType
 */
    HRESULT SetDefinition(int iPosition,
                          int iLamina,
                          int iSMI,
                          int iRepeat,
                          const float iOrigin[3],
                          const float iPointOnZAxis[3],
                          const float iPointOnXoZPlane[3],
                          CATSamRefFrameType iRefFrameType,
                          const float iLocationPoint[3]) ;

/**
 * Set the Axis angle in Radians for a a Position, a Lamina,
 * a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iAxisAngle
 *   The orientation angle in Radians of the Axis.
 */
    HRESULT SetAxisAngle(int iPosition,
                         int iLamina,
                         int iSMI,
                         int iRepeat,
                         float iAxisAngle);

/**
 * Get the Axis angle in Radians for a a Position, a Lamina,
 * a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iAxisAngle
 *   The orientation angle in Radians of the Axis.
 */
    HRESULT GetAxisAngle(int iPosition,
                         int iLamina,
                         int iSMI,
                         int iRepeat,
                         float & oAxisAngle) const;

/**
 * Add a angle to the Axis angle in Radians for a Position, a Lamina,
 * a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iAxisAngle
 *   The orientation angle in Radians of the Axis.
 */
    HRESULT AddAxisAngle(int iPosition,
                         int iLamina,
                         int iSMI,
                         int iRepeat,
                         float iAxisAngle);

/**
 * Get the Definition of the instance of the <b>CATSamAxis</b> object for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.
 * The 3 vectors U,V and W are defined in order to have an orthonormal axis system.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param oUaxis[3]
 *   The coordinates of the U vector of the axis.
 * @param oVaxis[3]
 *   The coordinates of the V vector of the axis.
 * @param oWaxis[3]
 *   The coordinates of the W vector of the axis.
 */
    HRESULT GetDefinition(int iPosition,
                          int iLamina,
                          int iSMI,
                          int iRepeat,
                          float oUaxis[3],
                          float oVaxis[3],
                          float oWaxis[3]) const;

/**
 * Get the Definition of the instance of the <b>CATSamAxis</b> object for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.
 * The 3 vectors U,V and W are defined in order to have an orthonormal axis system.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iVectorU
 *   The U vector of the axis.
 * @param iVectorV
 *   The V vector of the axis.
 * @param iVectorW
 *   The W vector of the axis.
 */
    HRESULT GetDefinition(int iPosition,
                          int iLamina,
                          int iSMI,
                          int iRepeat,
                          CATMathVector & oVectorU,
                          CATMathVector & oVectorV,
                          CATMathVector & oVectorW) const;

/**
 * Set the Definition of the instance ofthe <b>CATSamAxis</b> object for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iUaxis[3]
 *   The coordinates of the U vector of the axis.
 * @param iVaxis[3]
 *   The coordinates of the V vector of the axis.
 * @param iWaxis[3]
 *   The coordinates of the W vector of the axis.
 */
    HRESULT SetDefinition(int iPosition,
                          int iLamina,
                          int iSMI,
                          int iRepeat,
                          const float iUaxis[3],
                          const float iVaxis[3],
                          const float iWaxis[3]);

/**
 * Set the Definition of the instance ofthe <b>CATSamAxis</b> object for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param iVectorU
 *   The U vector of the axis.
 * @param iVectorV
 *   The V vector of the axis.
 * @param iVectorW
 *   The W vector of the axis.
 */
    HRESULT SetDefinition(int iPosition,
                          int iLamina,
                          int iSMI,
                          int iRepeat,
                          const CATMathVector & iVectorU,
                          const CATMathVector & iVectorV,
                          const CATMathVector & iVectorW);

/**
 * Gets the transformation matrix between the current axis system defined  for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.to the global axis.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param oTransformationMatrix[3][3]
 *   The Transformation matrix.
 * @param iTranspose
 *   A flag to compute the reverse transformation.
 */
    HRESULT GetTransformationMatrix(int iPosition,
                                    int iLamina,
                                    int iSMI,
                                    int iRepeat,
                                    float oTransformationMatrix[3][3],
                                    CATBoolean iTranspose = FALSE) const;

/**
 * Gets the transformation matrix between the current axis system defined  for
 * a Position, a Lamina, a position in the Lamina and a repeat for the position.to the global axis.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param oTransformationMatrix
 *   The Transformation matrix.
 * @param iTranspose
 *   A flag to compute the reverse transformation.
 */
    HRESULT GetTransformationMatrix(int iPosition,
                                    int iLamina,
                                    int iSMI,
                                    int iRepeat,
                                    CATMath3x3Matrix & oTransformationMatrix,
                                    CATBoolean iTranspose = FALSE) const;

/**
 * Gets the axis index in the Axis array for a Position, a Lamina,
 * a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param oAxisIndex
 *   The axis index.
 */
    HRESULT GetAxisIndex(int iPosition,
                         int iLamina,
                         int iSMI,
                         int iRepeat,
                         int & oAxisIndex) const;

/**
 * Gets the axis angle index in the AxisAngle array for a Position, a Lamina,
 * a position in the Lamina and a repeat for the position.
 * @param iPosition
 *   The index of the position.
 * @param iLamina
 *   The index of the lamina.
 * @param iSMI
 *   The index of the position in the lamina.
 * @param iRepeat
 *   The index of the repeat for the postion.
 * @param oAxisAngleIndex
 *   The axis index.
 */
    HRESULT GetAxisAngleIndex(int iPosition,
                              int iLamina,
                              int iSMI,
                              int iRepeat,
                              int & oAxisAngleIndex) const;

/**
 * Test the type of the instance.
 * Return True if iType = CATSamAxis
 * @param iType
 *   The type to test.
 */
    CATBoolean IsAKindOf(const CATString & iType) const;

/**
 * Apply a transformation to the axis.
 * @param iTransformation the Transformation to Apply.
 * @see CATMath3x3Matrix
 */
    HRESULT ApplyTransformation(const CATMath3x3Matrix &iTransformationMatrix);

/**
 * Internal Use Only....
 */
    const CATSamDimension* GetDimensionPtr() const;

 /**
 *   A pointer to a public work area.
 */
    int  * const PublicWorkPtr ;

  private :
    // Friend Class for Private Methods
    friend class CATSPMProcessSmi;
    friend class CATSamAxisAdaptor;
    friend class CATSPMProcessPlyId;
    friend class CATSPMProcessRepeat;
    friend class CATSPMProcessLamina;
    friend class CATSPMProcessComponent;
    friend class CATAnalysisCharacCollector;
    friend class CATAnalysisCharacCollectorPacked;

    // Stream the object.
    // @param ioStream  : The streaming buffer.
    // @param iVersion  : The version of stream.
    HRESULT Stream(CATSamStream &ioStream, int iVersion) const ;

    // Unstream the object.
    // @param iStream       : The unstreaming buffer.
    // @param iVersion      : The version of stream.
    // @param iNbDimensions : The number of <pre>CATSamDimension</pre> objects.
    // @param iDimensions   : A pointer to the array of <pre>CATSamDimension</pre> objects.
    HRESULT UnStream(CATSamStream &iStream, int iVersion, int iNbDimensions, const CATSamDimension* iDimensions) ;

    // Gets the full contents of the instance ofthe <b>CATSamAxis</b> object.
    // @param oDimension    : The <b>CATSamDimension</b> instance which was used to initialize the <b>CATSamAxis</b>.
    // @param oNbAxisAngle  : The number of Angle of the axis of the object.
    // @param oAxisAngle    : The Angle of the axis of the object.
    // @param oAxis         : The Axis of the object.
    // @param oNbAxis       : The number of axis of the object.
    HRESULT GetContents(const CATSamDimension* &oDimension, int &oNbAxisAngle, const float* &oAxisAngle, int &oNbAxis, const CATSamBasicAxis* &oAxis) const;

    // Sets the full constents of the instance ofthe <b>CATSamAxis</b> object.
    // @param iAxisAngle    : The Angle of the axis of the object.
    // @param iAxis         : The Axis of the object.
    // <b>WARNING :: </b> the iAxisAngle and iAxis must be allocated according to the
    // <b>CATSamDimension</b> instance which was used to initialize the <b>CATSamAxis</b>.
    HRESULT SetContents(const float* iAxisAngle, const CATSamBasicAxis* iAxis);

    // GetStructureSizes
    HRESULT GetStructureSizes(int &oNbAxis, int &oNbAngles) const;

    // GetType
    virtual CATSamExplicitRoot::RootType GetType() const;

    // DATA MEMBERS
    int                     _Work ;
    float*                  _AxisAngle;    
    CATSamBasicAxis*        _Axis;
    CATSamDimensionHandler* _DimensionHandler;
} ;

#endif
