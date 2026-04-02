// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseRSur_H
#define CATIMmiUseRSur_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseRSur;
#else
extern "C" const IID IID_CATIMmiUseRSur ;
#endif

/**
 * Interface to filter the RSur type of selecting objects.
 * <b>Role:</b> This interface allows to filter a selecting object ( @href CATIMmiUseBRepAccess ) of surfacic type.<br>
 * A <tt>RSur</tt> is a selecting object corresponding to one or several faces.
 * All the faces a RSur is made of are issued from the same basic construction element. 
 * When all the faces issued from the surface are considered, the selecting object is similar to a FSur
 * (Functional Surface). A RSur (Relimited Surface) is a connex part of a FSur. When the owning Feature
 * is just created, each FSur is equal to one RSur. It can afterwards be splitted into several RSurs 
 * through topological relimitations.<br>
 * For selection facilities, only one kind of selecting element is available, since FSur can be obtained
 * from RSurs. The difference is made during Featurization ( @ref CATIMmiUseFeaturize ) according to application's needs.<br>
 */
class ExportedByCATMecModUseItf CATIMmiUseRSur: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
};
CATDeclareHandler(CATIMmiUseRSur,CATBaseUnknown);

//------------------------------------------------------------------

#endif
