// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//===================================================================
#ifndef CATISamSetChildFilter_H
#define CATISamSetChildFilter_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamSetChildFilter ;
#else
extern "C" const IID IID_CATISamSetChildFilter ;
#endif
class CATISpecObject;
class CATUnicodeString;
//------------------------------------------------------------------
/**
 * Management of the allowed analysis entity type.
 * <b>Role:</b> Interface designed to select the feature type of 
 * analysis entities that are compatible with an analysis set.<p>
 * Usage is dedicated to mainly Local Specification of MeshPart.
 * There is no need to implement this interface if the analysis set and the
 * analysis entity have a physical type definition, If you need to customize
 * features with physical type, prefer @see CATISamAnalysisEntityInit.
 * <p>
 * This interface is implemented on an analysis set.
 * It can test a feature type or an existing feature.
 */ 

class ExportedByCATAnalysisInterface CATISamSetChildFilter: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
/**
 * Tests if a feature is compatible with an analysis set.
 * @param ipiFeature the pointer on the feature to test.
 * @return
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">0</font color="red"> the feature is not valid. 
 * <li><font color="red">1</font color="red"> the feature is  valid. 
 * </ul>
 */

	  virtual int IsFeatureAcceptedAsChild(const CATISpecObject * ipiFeature) = 0;

/**
 * Tests if a feature type is compatible with an analysis set.
 * @param iFeatureType the feature type to test.
 * @return
 * <br><b>Legal values</b>: 
 * <ul>
 * <li><font color="red">0</font color="red"> the feature type is not valid. 
 * <li><font color="red">1</font color="red"> the feature type is  valid. 
 * </ul>
 */

	  virtual int IsFeatureTypeAcceptedAsChild(const CATUnicodeString &iFeatureType) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamSetChildFilter, CATBaseUnknown );

#endif
