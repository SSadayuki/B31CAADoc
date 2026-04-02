#ifndef CATIRSur_h
#define CATIRSur_h

// COPYRIGHT DASSAULT SYSTEMES 2005
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIBRepAccess.h"
#include "MecModItfCPP.h"
#include "CATIAV5Level.h"
class CATLISTP(CATFace);
class CATIMfFsur_var;
class CATIMfBRepFeature_var; 
class CATIPrtContainer_var;
class CATIGeometricalElement_var;
class CATIRSur_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIRSur;
#else
extern "C" const IID IID_CATIRSur;
#endif

/**
 * Interface to manage the RSur type of selecting objects.
 * <b>Role:</b> This interface manages a selecting object ( @href CATIBRepAccess ) of surfacic type.<br>
 * A <tt>RSur</tt> is a selecting object corresponding to one or several faces.
 * All the faces a RSur is made of are issued from the same basic construction element. 
 * When all the faces issued from the surface are considered, the selecting object is similar to a FSur
 * (Functional Surface). A RSur (Relimited Surface) is a connex part of a FSur. When the owning Feature
 * is just created, each FSur is equal to one RSur. It can afterwards be splitted into several RSurs 
 * through topological relimitations.<br>
 * For selection facilities, only one kind of selecting element is available, since FSur can be obtained
 * from RSurs. The difference is made during Featurization ( @ref CATIFeaturize ) according to application's needs.<br>
 * To create a @href CATIMfRsur , featurization has to be done in <tt>MfRelimitedFeaturization</tt> mode.<br>
 * To create a @href CATIMfFsur , featurization has to be done in <tt>MfFunctionalFeaturization</tt> mode.<br>
 */

class ExportedByMecModItfCPP CATIRSur: public CATIBRepAccess
{
  CATDeclareInterface;

public: 
  /**
   * Returns the geometrical faces associated with the selecting object.
   */
  virtual CATLISTP(CATFace)   GetFaces() const= 0;
};

CATDeclareHandler( CATIRSur, CATIBRepAccess) ;

#endif
