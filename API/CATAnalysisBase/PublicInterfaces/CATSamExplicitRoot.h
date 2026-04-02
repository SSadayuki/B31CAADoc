// COPYRIGHT DASSAULT SYSTEMES  1999

// Acces aux CATString
#include "CATString.h"

// Acces aux CATBoolean
#include "CATBoolean.h"

#include "CATSAM0Explicit.h"

//=============================================================================
//
// CATSamExplicitRoot
//
//=============================================================================
//
// Usage Notes: Root class for any explicit model objetcs....
//
//=============================================================================
// August 2000   Creation                                                   JND
//=============================================================================
#ifndef CATSamExplicitRoot_H_
#define CATSamExplicitRoot_H_
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Common memory management services for Field Model Objects.
 * No direct access to the methods.
 */

#include <stdlib.h>

class ExportedByCATSAM0Explicit CATSamExplicitRoot
{
  private :
    // friend class for private method
    friend class CATSamAxis;
    friend class CATSamBasicAxis;
    friend class CATSamDimension;
    friend class CATSamAxisAdaptor;
    friend class CATSamCharacVersion;
    friend class CATSamAxisAggregator;
    friend class CATSamCollectorBuilder;
    friend class CATAnalysisExplicitAxis;
    friend class CATCharacCollectorFactory;
    friend class CATSamDimensionAggregator;
    friend class CATSamDimensionDescriptor;
    friend class CATSamPhysicalDescription;
    friend class CATAnalysisCharacCollector;
    friend class CATAnalysisExplicitRulesStream;
    friend class CATAnalysisCharacCollectorPacked;
    friend class CATSamCollectionOfCharacVersion;
    friend class CATSamCollectorBuilderForMeshSet;
    friend class CATSamCollectorBuilderForSetCharac;
    friend class CATCharacCollectorFactoryForMeshSet;
    friend class CATSamCollectorBuilderForPreproEntity;

    // Default constructor.
    CATSamExplicitRoot();

    // Copy constructor.
    CATSamExplicitRoot(const CATSamExplicitRoot & iRoot);

    // Destructor.
    virtual  ~CATSamExplicitRoot() ;

    // IsAKindOf.
    virtual CATBoolean IsAKindOf(const CATString & iType) const = 0;

    // Root DerivateType
    enum RootType {
      RootType_CATSamAxis,
      RootType_CATSamBasicAxis,
      RootType_CATSamDimension,
      RootType_CATSamCharacVersion,
      RootType_CATSamDimensionDescriptor
    };

    // GetType.
    virtual CATSamExplicitRoot::RootType GetType() const = 0;


} ;

#endif
