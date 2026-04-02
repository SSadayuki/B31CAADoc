#ifndef CATITPSSetGlobalCopy_H
#define CATITPSSetGlobalCopy_H

// COPYRIGHT DASSAULT SYSTEMES 2012
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"

class CATIPrtPart;
class CATMathTransformation;
class CATBaseUnknown_Associations;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSSetGlobalCopy;
#else
extern "C" const IID IID_CATITPSSetGlobalCopy;
#endif

/**
 * Interface for the TPS Set of objects.
 */
class ExportedByCATTPSItfCPP CATITPSSetGlobalCopy : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Copies the entire or a subpart of a part level Annotation Set into a destination CATPart 
  *   @param ipiDestinationPart
  *     Destination CATPart where the annotation set will be copied. 
  *     Destination CATPart has to be different from the origin CATPart.
  *   @param oMessage
  *     Result of datums merge. If there is no merge done, the returned message is empty.
  *   @param ipCaptureName
  *     Optional argument. String used to filter FTA features.
  *     The system keeps only the FTA features that belong to the captures FTA that contain the string ipCaptureName. 
  *     If the ipCaptureName is null, the system keeps all the FTA features (it performs a global copy).
  *   @param ipTransfo
  *     Optional argument. Transformation matrix to apply to FTA features during copy.
  *     The transformation is also used for retrieving in the destination CATPart the geometrical elements the FTA
  *     features are rerouted on.
  */
  virtual HRESULT GlobalCopySetTo(CATIPrtPart *ipiDestinationPart, CATUnicodeString &oMessage, CATUnicodeString *ipCaptureName = NULL, CATMathTransformation *ipTransfo = NULL) const = 0;

  /**
  * Copies the entire or a subpart of a part level Annotation Set into a destination CATPart 
  *   @param ipiDestinationPart
  *     Destination CATPart where the annotation set will be copied. 
  *     Destination CATPart has to be different from the origin CATPart.
  *   @param oMessage
  *     Result of datums merge. If there is no merge done, the returned message is empty.
  *   @param ioAssocTableBodiesGeomSet
  *     Association table used by the system to reconnect FTA Captures to Bodies and GeometricalSets.
  *   @param ipCaptureName
  *     Optional argument. String used to filter FTA features.
  *     The system keeps only the FTA features that belong to the captures FTA that contain the string ipCaptureName. 
  *     If the ipCaptureName is null, the system keeps all the FTA features (it performs a global copy).
  *   @param ipTransfo
  *     Optional argument. Transformation matrix to apply to FTA features during copy.
  *     The transformation is also used for retrieving in the destination CATPart the geometrical elements the FTA
  *     features are rerouted on.
  */
  virtual HRESULT GlobalCopySetTo(CATIPrtPart *ipiDestinationPart, CATUnicodeString &oMessage, CATBaseUnknown_Associations &ioAssocTableBodiesGeomSet, CATUnicodeString *ipCaptureName = NULL, CATMathTransformation *ipTransfo = NULL) const = 0;


};

CATDeclareHandler(CATITPSSetGlobalCopy, CATBaseUnknown);

#endif
