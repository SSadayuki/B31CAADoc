// COPYRIGHT DASSAULT SYSTEMES  1999
//=============================================================================
//
// CATAnalysisExplicitSet
//
//=============================================================================
//
// Usage Notes: Services linked to the field model objects which can be sets.
//
//=============================================================================
// Octobre 99   Creation                                                    LBK
//=============================================================================
#ifndef CATAnalysisExplicitSet_H_
#define CATAnalysisExplicitSet_H_

#include "CATAnalysisExplicitParent.h"

class CATSamStream ;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Field model set.
 * This object is used to provide services to the field model objects which can be sets.
 */
class ExportedByCATSAM0Explicit CATAnalysisExplicitSet : public CATAnalysisExplicitParent
{
  public :
/**
 * Default constructor.
 */
    CATAnalysisExplicitSet() ;

/**
 * Copy constructor.
 */
    CATAnalysisExplicitSet(const CATAnalysisExplicitSet &iSet) ;

/**
 * Copy constructor.
 * @see CATAnalysisExplicitData
 */
    CATAnalysisExplicitSet(const CATAnalysisExplicitData &iData) ;

/**
 * Assignment operator.
 */
    CATAnalysisExplicitSet &operator = (const CATAnalysisExplicitSet &iSet) ;

/**
 * Assignment operator.
 * @see CATAnalysisExplicitData
 */
    CATAnalysisExplicitSet &operator = (const CATAnalysisExplicitData &iData) ;

/**
 * Creates a set in the field model.
 * @param iModel
 *   A pointer to the field model into which the set will be created.
 * @param iPhysicalType
 *   The physical type of the set.
 * @see CATAnalysisExplicitModel
 */
    HRESULT CreateSet(const CATAnalysisExplicitModel *iModel, CATSamPhysicalType iPhysicalType) ;

/**
 * Creates a set in the field model as the child of an other set.
 * @param iParent
 *   The parent of the set which will be created.
 * @param iPhysicalType
 *   The physical type of the set.
 */
    HRESULT CreateSet(const CATAnalysisExplicitSet &iParent, CATSamPhysicalType iPhysicalType) ;

  protected:
    virtual void Reset() ;
    virtual HRESULT Init(const CATAnalysisExplicitData &iData) ;

  private :
    // Friend Class for Private Methods
    friend class CATAnalysisExplicitModel;
    friend class CATAnalysisExplicitTopology;
    friend class CATAnalysisExplicitServices;
    friend class CATAnalysisExplicitTopologyUnit;

    // Creates a set in the field model (for internal use only).
    HRESULT CreateSet(const CATAnalysisExplicitModel *iModel, const CATULONG32& iSetTag, const CATSamPhysicalType& iPhysicalType, const CATBoolean& iIsOrpan) ;

    // Computes a sequential number to all the entities child of the set.
    HRESULT RenumberSet() const ;

    // Returns the number of entities child of the set.
    int GetEntitiesNumber(CATBoolean iExpandProxyAndCombined) const;   
} ;

#endif
